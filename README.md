# Stunt Car HD

This is a port of *Stunt Car Racer Remake* with reworked physics for uncapped frame rate.

Play: https://binaryfoundry.github.io/stuntcarhd/

## Current Project Layout

- `src/` - game and platform source code
- `data/` - runtime assets (tracks, sounds, bitmaps, font)
- `build/` - out-of-source native build directory
- `build-web/` - out-of-source Emscripten build directory (recommended)

## Build System

The project is CMake-only now (no checked-in Visual Studio project files).

Desktop/native rendering and audio use SDL2 + OpenGL + SDL_ttf.
Web builds use Emscripten SDL ports.

## Native Build (Windows/Linux/macOS)

```bash
cmake -S . -B build
cmake --build build
```

Windows Release:

```powershell
cmake -S . -B build
cmake --build build --config Release
```

### Native Dependencies

By default (`STUNT_FETCH_NATIVE_DEPS=ON`), CMake fetches and builds:

- SDL2
- SDL2_ttf
- glm

This avoids manual binary linking.

## Runtime Assets (`data/`)

All runtime assets are expected under `data/`.

For native builds, CMake copies `data/` automatically:

- to `build/data`
- and next to the executable (for example `build/Release/data`)

So running from the build tree works without manual copying.

## Web Build (Emscripten)

```bash
emcmake cmake -S . -B build-web
cmake --build build-web
```

Web builds:

- use `-s USE_SDL=2 -s USE_SDL_TTF=2`
- do not FetchContent SDL dependencies from source
- preload `data/Tracks`, `data/Sounds`, and `data/Bitmap`
- embed `data/DejaVuSans-Bold.ttf`

## Controls

Linux/Windows:

- Arrow keys: steer / accelerate / brake
- Space: boost

## Notes

- Original project: http://sourceforge.net/projects/stuntcarremake/
- Forked from: https://github.com/ptitSeb/stuntcarremake
- Some original sound-loading code came from Forsaken/ProjectX port work by chino.
