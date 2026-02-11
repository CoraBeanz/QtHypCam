# QtHypCam - Raspberry Pi 5 Support Update Summary

## Date: February 10, 2026

## Problem Statement
The QtHypCam software was written for the legacy Raspberry Pi camera stack, which used `raspistill` and `raspivid` commands. Raspberry Pi 5 with Debian 12 (Bookworm) uses the new libcamera stack, which doesn't expose `/dev/video*` devices the same way, causing camera enumeration to always return empty.

## Solution Implemented
Migrated from legacy camera commands to modern libcamera equivalents.

## Files Modified

### 1. rasphypcam.cpp
**Function**: `genCommand()`
- Changed base command from `raspistill` to `libcamera-still`
- Removed `-gc` (gamma curve) parameter - not needed in libcamera
- Replaced `-ifx colourbalance` with AWB-based color balance
- Replaced `-ifx denoise` with `--denoise cdn_off`
- Changed `-awb` to `--awb` (long-form option)
- Changed `-ex` to `--metering` for exposure control
- Converted `-ISO` to `--gain` with formula: gain = ISO / 100
- Changed `-vf` to `--vflip` (long-form option)

### 2. mainwindow.cpp
**Functions Updated**:

#### genRemoteVideoCommand()
- Changed base command from `raspivid` to `libcamera-vid`
- Updated all argument formatting (see rasphypcam.cpp changes)

#### genTimelapseCommand()
- Changed base command from `raspistill` to `libcamera-still`
- Removed `-gc` parameter
- Updated argument formatting for libcamera compatibility

#### genSubareaRaspistillCommand()
- Changed base command from `raspistill` to `libcamera-still`
- Removed `-gc` parameter
- Updated all argument formatting

### 3. __common.cpp
**Function**: `funcExecuteCommand()`
- Updated comment to reflect support for both legacy and libcamera commands

## Key Command Argument Changes

| Category | Legacy | New libcamera | Notes |
|----------|--------|---------------|-------|
| Still capture | `raspistill` | `libcamera-still` | Drop-in replacement |
| Video capture | `raspivid` | `libcamera-vid` | Drop-in replacement |
| Gamma curve | `-gc` | *(removed)* | Handled automatically |
| Color effects | `-ifx colourbalance` | *(removed)* | Use AWB instead |
| Denoise | `-ifx denoise` | `--denoise cdn_off` | New denoise system |
| White balance | `-awb <mode>` | `--awb <mode>` | Long-form option |
| Exposure | `-ex <mode>` | `--metering <mode>` | Different parameter |
| ISO | `-ISO 400` | `--gain 4.0` | Converted to analog gain |
| Vertical flip | `-vf` | `--vflip` | Long-form option |

## Testing Recommendations

### On Raspberry Pi 5:

1. **Verify libcamera installation:**
   ```bash
   libcamera-still --version
   libcamera-vid --version
   ```

2. **Test basic capture:**
   ```bash
   libcamera-still -o test.jpg -n -q 100
   ```

3. **Test with settings:**
   ```bash
   libcamera-still -o test.jpg -n -q 100 --awb auto --gain 2.0 -ss 10000
   ```

4. **List available cameras:**
   ```bash
   libcamera-hello --list-cameras
   ```

### In QtHypCam:

1. Connect to Raspberry Pi 5 via network
2. Test single image capture
3. Test video recording
4. Test timelapse functionality
5. Verify different camera settings (AWB, gain, shutter speed)
6. Test ROI (Region of Interest) capture

## Backward Compatibility

⚠️ **Important**: These changes are NOT backward compatible with:
- Raspberry Pi 3/4 using legacy camera stack
- Systems with `raspistill`/`raspivid` installed

For mixed environments, consider:
- Maintaining separate builds
- Detecting available commands at runtime
- Providing configuration options

## Benefits of Migration

1. **Future-proof**: Works with current and future Raspberry Pi hardware
2. **Better image quality**: Modern ISP with improved algorithms
3. **Active support**: libcamera is actively maintained
4. **More features**: Access to advanced camera capabilities

## Known Limitations

1. Some legacy image effects (`-ifx`) are no longer available
2. Command-line syntax differences may require script updates
3. Slightly higher latency compared to legacy stack
4. Cannot run both stacks simultaneously

## Documentation

See `RASPBERRY_PI5_LIBCAMERA_MIGRATION.md` for:
- Detailed migration guide
- Setup instructions
- Troubleshooting tips
- Performance notes
- Compatibility information

## Build Instructions

No changes required to `HypCam.pro` - libcamera tools are system utilities called via shell commands, not linked libraries.

Standard build process:
```bash
qmake HypCam.pro
make
```

## Next Steps

1. Test on actual Raspberry Pi 5 hardware
2. Verify all camera modes and settings work correctly
3. Update user documentation
4. Consider adding runtime detection for legacy vs. libcamera support
5. Test networked camera communication thoroughly

## Contact

For issues or questions about this migration, please file an issue in the project repository.
