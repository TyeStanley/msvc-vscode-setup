# MSVC VSCode Setup

A minimal template for C++ development in Visual Studio Code using the MSVC compiler.

## Prerequisites

- [Visual Studio 2022](https://visualstudio.microsoft.com/vs/) with:
  - "Desktop development with C++" workload
  - Windows 10/11 SDK
- [Visual Studio Code](https://code.microsoft.com/download)
  - [C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

## Features

- MSVC compiler configuration
- Debugger setup
- IntelliSense support
- Build tasks (Ctrl+Shift+B)
- Clean project structure

## Project Structure

```plaintext
project-root/
├── .vscode/ # VS Code configuration
│ ├── tasks.json # Build tasks
│ ├── launch.json # Debugger config
│ └── c_cpp_properties.json # IntelliSense config
├── src/ # Source files
│ └── main.cpp # Entry point
├── build/ # Build output
│ └── debug/ # Debug build files
└── msvc-vscode-setup.bat # MSVC environment setup
```

## Usage

1. Clone this repository
2. Open in VS Code
3. Press Ctrl+Shift+B to build
4. Press F5 to debug
