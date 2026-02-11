# Quick Start Guide - Raspberry Pi 5 Camera Setup

## For Raspberry Pi 5 Users

### Prerequisites

1. **Raspberry Pi 5** with Debian 12 (Bookworm)
2. **Camera Module** (v2, v3, or HQ Camera)
3. **libcamera** tools installed

### Step 1: Install libcamera Tools

```bash
sudo apt update
sudo apt install libcamera-apps
```

### Step 2: Enable Camera

Edit `/boot/config.txt`:
```bash
sudo nano /boot/config.txt
```

Ensure these lines are present:
```
camera_auto_detect=1
```

**Remove or comment out** any legacy camera lines:
```
# start_x=1          # Comment this out
# gpu_mem=128        # Comment this out
```

Reboot:
```bash
sudo reboot
```

### Step 3: Test Camera

```bash
# List available cameras
libcamera-hello --list-cameras

# Take a test photo
libcamera-still -o test.jpg

# Record a test video (5 seconds)
libcamera-vid -t 5000 -o test.h264
```

### Step 4: Verify Camera Detection

```bash
# This should show your camera
v4l2-ctl --list-devices

# Alternative check
vcgencmd get_camera
# Should output: supported=1 detected=1
```

### Step 5: Run QtHypCam

1. Build and run the updated QtHypCam application
2. Connect to your Raspberry Pi 5 using the network interface
3. The camera should now be detected and functional

## Troubleshooting

### Camera Not Detected

```bash
# Check if camera is connected
raspinfo | grep -i camera

# Verify cable connection
# Power off, disconnect/reconnect camera cable, power on

# Check for camera in device tree
ls /dev/video*
```

### Permission Errors

```bash
# Add user to video group
sudo usermod -a -G video $USER
sudo reboot
```

### libcamera Commands Not Found

```bash
# Reinstall libcamera
sudo apt install --reinstall libcamera-apps

# Verify installation
which libcamera-still
# Should output: /usr/bin/libcamera-still
```

### Image Quality Issues

Try adjusting gain and exposure:
```bash
libcamera-still -o test.jpg --gain 2.0 --awb auto --metering centre
```

## Common Camera Settings

### Good General Purpose Settings
```bash
libcamera-still -o photo.jpg \
  --width 2592 --height 1944 \
  --quality 100 \
  --awb auto \
  --gain 1.5 \
  --shutter 10000
```

### Low Light Settings
```bash
libcamera-still -o lowlight.jpg \
  --width 2592 --height 1944 \
  --quality 100 \
  --awb tungsten \
  --gain 4.0 \
  --shutter 100000
```

### Fast Shutter (Bright Conditions)
```bash
libcamera-still -o bright.jpg \
  --width 2592 --height 1944 \
  --quality 100 \
  --awb sunlight \
  --gain 1.0 \
  --shutter 1000
```

## Camera Resolutions

### Camera Module v2 (8MP)
- Still: 3280 x 2464
- Video: 1920 x 1080 (max)

### Camera Module v3 (12MP)
- Still: 4608 x 2592
- Video: 1920 x 1080 (max)

### HQ Camera (12MP)
- Still: 4056 x 3040
- Video: 2028 x 1520 (max)

## Performance Tips

1. **Use appropriate resolution** - higher isn't always better
2. **Adjust gain carefully** - too high introduces noise
3. **Consider denoise options** - `--denoise cdn_hq` for best quality
4. **Use appropriate AWB mode** - matches lighting conditions

## Network Camera Setup

If using QtHypCam over network:

1. Ensure SSH is enabled on Pi 5:
   ```bash
   sudo systemctl enable ssh
   sudo systemctl start ssh
   ```

2. Note your Pi's IP address:
   ```bash
   hostname -I
   ```

3. In QtHypCam, connect using this IP address

## Additional Resources

- [Raspberry Pi Camera Documentation](https://www.raspberrypi.com/documentation/computers/camera_software.html)
- [libcamera-apps GitHub](https://github.com/raspberrypi/libcamera-apps)
- [Camera Module Comparison](https://www.raspberrypi.com/products/)

## Need Help?

If you encounter issues:
1. Check `RASPBERRY_PI5_LIBCAMERA_MIGRATION.md` for detailed information
2. Review `CHANGES_SUMMARY.md` for technical details
3. File an issue on the project repository
4. Include output of `libcamera-hello --list-cameras` in your report
