# Build Fix for Multiple Definition Errors

## Problem
The build is failing with "multiple definition" errors because there are stale object files from a previous build.

## Solution

On your Raspberry Pi, run these commands in the QtHypCam directory:

```bash
# Clean all build artifacts
make clean

# Remove all object files and build files
rm -f *.o
rm -f moc_*.cpp
rm -f moc_*.o
rm -f ui_*.h
rm -f Makefile
rm -f HypCam

# Regenerate Makefile
qmake HypCam.pro

# Rebuild everything
make -j4
```

## If that doesn't work

Try a more thorough clean:

```bash
# Remove everything that's not source code
git clean -fdx

# Then rebuild
qmake HypCam.pro
make -j4
```

## Alternative: Out-of-source build

To avoid these issues in the future, use an out-of-source build:

```bash
# Create a build directory
mkdir -p build
cd build

# Build from there
qmake ../HypCam.pro
make -j4

# The executable will be in the build directory
./HypCam
```

## Expected Result

After a clean build, you should see:
```
g++ ... -o HypCam ...
```

And the executable should be created successfully.

## Quick Test

After successful build:
```bash
# Test the executable exists
ls -lh HypCam

# Try running it (requires X display)
./HypCam
```
