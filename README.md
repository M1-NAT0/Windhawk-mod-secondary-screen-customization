# Windhawk Mod: Secondary Screen Customization

A modular Windows 11 mod for [Windhawk](https://windhawk.net/) designed to enhance secondary monitor desktop workflows, display positioning, and taskbar customization.

## Key Features
- **Multi-Monitor Hooking:** Detects secondary and tertiary displays dynamically on display topology changes (WM_DISPLAYCHANGE).
- **Per-Monitor DPI Awareness:** Adjusts styling and overlays accurately across mixed high-DPI displays.
- **Zero Heavy Dependencies:** Lightweight Win32 hook integration with minimal CPU overhead.

## Architecture & Integration
The mod hooks into Windows desktop shell components via the official Windhawk engine, monitoring monitor attachment states and applying user-defined layout presets.

## Building & Installation
1. Install [Windhawk](https://windhawk.net/).
2. Open Windhawk -> **Developer Channel** -> **Create Mod**.
3. Load `secondary_screen_styler.wh.cpp` and compile.

## License
MIT License