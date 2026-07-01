## CMake Project Example

This repository contains the example project used in my YouTube course on
**Modern CMake**.

The goal of this repo is to show how a real C++ project can be structured using
CMake, with a library-style project and a separate game/application project that
consumes it.

Watch the full playlist here:

https://youtube.com/playlist?list=PLT3_V-u3v5xc&si=kNVKLSD9XcdhNS0n

______________________________________________________________________

## Project Structure

```txt
.
├── Coffee/              # Main C++ library/project
│   ├── include/         # Public headers
│   ├── src/             # Source files
│   ├── cmake/           # CMake package/config files
│   ├── tools/           # Project-specific scripts
│   ├── CMakeLists.txt
│   └── CMakePresets.json
│
├── GameApp/             # Example app/game using Coffee
│   ├── game.cpp
│   ├── cmake/
│   ├── tools/
│   ├── CMakeLists.txt
│   └── CMakePresets.json
│
├── third-party/         # Git submodules / external dependencies
├── tools/               # Root helper scripts
│   ├── setup.sh
│   └── build.sh
│
├── .gitmodules
├── .gitignore
├── LICENSE
└── README.md
```

______________________________________________________________________

## Requirements

You need:

- A C++ compiler
- CMake
- Git

On Ubuntu/Debian, you can install the basic tools with:

```bash
sudo apt update
sudo apt install build-essential cmake git
```

______________________________________________________________________

## Cloning the Repository

Clone the repo normally:

```bash
git clone https://github.com/gameenginedude/cmake-game-engine.git
cd Coffee
```

Then initialize the submodules:

```bash
./tools/setup.sh
```

The setup script runs:

```bash
git submodule sync
git submodule update --init --recursive
```

This downloads the dependencies inside the `third-party/` folder.

______________________________________________________________________

## Building

From the root of the repository, run:

```bash
./tools/build.sh
```

This script builds both:

- `Coffee`
- `GameApp`

The root `tools/build.sh` script is just a convenience script. The actual build
logic can stay inside each project’s own `tools/` folder.

______________________________________________________________________

## Manual Build

You can also build the projects manually.

### Build Coffee

```bash
cd Coffee
cmake -S . -B build
cmake --build build
cmake --install build --prefix ../install
```

### Build GameApp

```bash
cd ../GameApp
cmake -S . -B build
cmake --build build
```

______________________________________________________________________

## What This Repo Demonstrates

This project demonstrates practical CMake concepts such as:

- Organizing a C++ project with CMake
- Separating a library project from an application project
- Writing `CMakeLists.txt` files
- Using `CMakePresets.json`
- Installing a CMake project
- Consuming an installed CMake package
- Using Git submodules for third-party dependencies
- Keeping setup/build scripts simple

______________________________________________________________________

## Course

This repo goes along with my YouTube playlist:

**Modern CMake Course**

https://youtube.com/playlist?list=PLT3_V-u3v5xc&si=kNVKLSD9XcdhNS0n

The course walks through the project step by step and explains the CMake
concepts used in this repository.

______________________________________________________________________

## Scripts

### Setup

```bash
./tools/setup.sh
```

Initializes and updates Git submodules.

### Build

```bash
./tools/build.sh
```

Builds the example project.

Make sure the scripts are executable:

```bash
chmod +x ./tools/setup.sh
chmod +x ./tools/build.sh
```

______________________________________________________________________

## Notes

This repository is mainly for learning and demonstration purposes.

The structure is intentionally simple so that the CMake workflow is easier to
understand. Example CMake Project - Game Engine Project Setup
