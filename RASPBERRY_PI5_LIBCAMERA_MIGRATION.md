# Raspberry Pi 5 / libcamera Migration Guide

## Overview

This document describes the changes made to support Raspberry Pi 5 with Debian 12 (Bookworm) and the new libcamera stack.

## Background

Raspberry Pi 5 no longer supports the legacy camera stack (`raspistill`, `raspivid`). Instead, it uses the modern `libcamera` framework which provides:
- `libcamera-still` - replacement for `raspistill`
- `libcamera-vid` - replacement for `raspivid`

## Changes Made

### 1. Command Updates

All camera capture commands have been migrated:

| Legacy Command | New Command |
|---------------|-------------|
| `raspistill` | `libcamera-still` |
| `raspivid` | `libcamera-vid` |

### 2. Argument Changes

Several command-line arguments have been updated for libcamera compatibility:

| Legacy Argument | New Argument | Notes |
|----------------|--------------|-------|
| `-gc` | *(removed)* | Gamma curve setting no longer needed |
| `-ifx colourbalance` | *(handled by AWB)* | Color balance now automatic with AWB |
| `-ifx denoise` | `--denoise cdn_off` | New denoising system with modes |
| `-awb <mode>` | `--awb <mode>` | Changed to long-form option |
| `-ex <mode>` | `--metering <mode>` | Exposure control now via metering |
| `-ISO <value>` | `--gain <value>` | ISO converted to analog gain |
| `-vf` | `--vflip` | Changed to long-form option |

### 3. ISO to Gain Conversion

libcamera uses analog gain instead of ISO. The conversion formula used:
```
gain = ISO / 100.0
```

For example:
- ISO 100 → gain 1.0
- ISO 200 → gain 2.0
- ISO 400 → gain 4.0

### 4. Files Modified

The following files were updated:

- **rasphypcam.cpp**: Updated `genCommand()` function
- **mainwindow.cpp**: Updated command generation functions:
  - `genRemoteVideoCommand()`
  - `genTimelapseCommand()`
  - `genSubareaRaspistillCommand()`
- **__common.cpp**: Updated comments in `funcExecuteCommand()`

## Setup Requirements

### On the Raspberry Pi 5

Ensure libcamera tools are installed:

```bash
sudo apt update
sudo apt install libcamera-apps
```

Verify installation:

```bash
libcamera-still --version
libcamera-vid --version
```

### Testing Camera

Test the camera with:

```bash
libcamera-still -o test.jpg
```

## Compatibility Notes

### Supported Features
- ✅ Still image capture
- ✅ Video recording
- ✅ Auto White Balance (AWB)
- ✅ Exposure control via metering
- ✅ Shutter speed control
- ✅ Resolution settings
- ✅ ROI (Region of Interest)
- ✅ Image flipping
- ✅ Gain control (formerly ISO)
- ✅ Denoising

### Deprecated Features
- ❌ `-gc` gamma curve (libcamera handles internally)
- ❌ `-ifx` image effects (replaced by modern ISP)
- ⚠️ Color balance (now automatic with AWB)

### AWB Modes

Supported Auto White Balance modes (same as legacy):
- `auto`
- `sunlight`
- `cloudy`
- `tungsten`
- `fluorescent`
- `incandescent`
- `flash`
- `horizon`

### Denoise Modes

New denoise options available:
- `off` - No denoising
- `cdn_off` - Color denoise off, spatial on
- `cdn_fast` - Fast color denoise
- `cdn_hq` - High quality denoise (default)

## Backward Compatibility

These changes are **not** backward compatible with Raspberry Pi models using the legacy camera stack (Pi 3, Pi 4 with legacy stack enabled).

### For Mixed Environments

If you need to support both old and new Raspberry Pi models, you can:

1. Check for libcamera availability on the Pi:
```bash
which libcamera-still
```

2. Use conditional logic to select the appropriate command based on availability

3. Maintain separate configuration profiles for legacy vs. modern systems

## Troubleshooting

### Camera Not Detected

If the camera is not detected:

```bash
# Check camera detection
libcamera-hello --list-cameras

# Check for camera module
vcgencmd get_camera

# Verify /boot/config.txt
grep camera_auto_detect /boot/config.txt
```

### Permission Issues

If you get permission errors:

```bash
# Add user to video group
sudo usermod -a -G video $USER

# Reboot required for group changes
sudo reboot
```

### Legacy Stack Conflicts

If both stacks are present:

```bash
# Disable legacy stack in /boot/config.txt
sudo nano /boot/config.txt

# Ensure these lines:
camera_auto_detect=1
# Ensure NO: start_x=1 or gpu_mem settings
```

## Performance Notes

libcamera typically provides:
- Better image quality with improved ISP
- More consistent auto-exposure
- Better low-light performance
- Slightly higher latency compared to legacy stack

## Further Reading

- [Raspberry Pi Camera Documentation](https://www.raspberrypi.com/documentation/computers/camera_software.html)
- [libcamera Documentation](https://libcamera.org/)
- [libcamera-apps Guide](https://github.com/raspberrypi/libcamera-apps)

## Migration Date

These changes were implemented on: February 10, 2026

For questions or issues, please refer to the project repository.
