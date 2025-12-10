# colorpp
Yet another color library for C++, I bet there are already thousands of them, and I hate all of them.\
\
**Why does this exist?** Because I needed something that implemented `NO_COLOR`

## Documentation

### Installation
Well... it's one header. You can just drag and drop it.
Or use meson wrap. Or CMake `FetchContent`.

### Usage of the colors
> [!INFO]
> If you have the `NO_COLOR` env var, it will not print colors, regardless if you enable manually or not.
> [!INFO]
> The namespace `colors::ansi` is only used when colors adds to stream, not the function colors.

```cpp
    ...
    enable_colors(); // turn color output on
    disable_colors(); // turn color output off
    is_color_enabled(); // check if color is enabled

    std::cout << colors::ansi::red << 'Hello, World!' << colors::ansi::reset << std::endl; // prints 'Hello, World!' in red and resets
    std::cout << colors::red('Hello, World!') << std::endl; // also prints 'Hello, World!' in red, but this time it's a function.

    RGB col{255, 255, 255}; // creates a rgb struct instance in white
    std::string ansi = col.to_ansi(); // creates a 24-bit ansi color code based on the struct instance
    std::cout << rgb_color('Hello, World!', col) << std::endl; // prints out 'Hello, World!' yet another time, but now it's white and not predefined by a macro.
    ...
```
Pre-Defined Colors:
|-Category-|-name-|
|----------|------|
|Standard Colors | `black`, `red`, `green`, `yellow`, `blue`, `magenta`, `cyan`, `white` |
| Bright Colors | `bright_*` |
| Background Colors | `bg_*` |
| Bright Background | `bg_bright_*` |
| Styles | `bold`, `dim`, `italic`, `underline`, `blink`, `reverse`, `hidden`, `strikethrough`|
| Reset Styles | `reset_*` |

### Create color with macros
> [!WARNING]
> Make sure to not use those macros if you're already inside a namespace, at least if you don't wanna write `your_namespace::colors::...` instead of `colors::...`

**generic color macro** _(in the ANSI color table)_
```cpp
    ...
    ANSI_GEN(black, \e[0;90m);
    ...
```
Reference: `ANSI_GEN(name, code)`

**rgb color macro**
```cpp
    ...
    RGB_ANSI_GEN(white, 255, 255, 255);
    ...
```
Reference: `RGB_ANSI_GEN(name, red, green, blue)`

## License
```
Copyright 2025 calishu

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
```