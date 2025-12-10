#include "colorpp.hpp"
#include <iostream>

int main() {
    // Regular colors
    std::cout << colors::black("Hello World (black)\n");
    std::cout << colors::red("Hello World (red)\n");
    std::cout << colors::green("Hello World (green)\n");
    std::cout << colors::yellow("Hello World (yellow)\n");
    std::cout << colors::blue("Hello World (blue)\n");
    std::cout << colors::magenta("Hello World (magenta)\n");
    std::cout << colors::cyan("Hello World (cyan)\n");
    std::cout << colors::white("Hello World (white)\n");

    // Bright colors
    std::cout << colors::bright_black("Hello World (bright_black)\n");
    std::cout << colors::bright_red("Hello World (bright_red)\n");
    std::cout << colors::bright_green("Hello World (bright_green)\n");
    std::cout << colors::bright_yellow("Hello World (bright_yellow)\n");
    std::cout << colors::bright_blue("Hello World (bright_blue)\n");
    std::cout << colors::bright_magenta("Hello World (bright_magenta)\n");
    std::cout << colors::bright_cyan("Hello World (bright_cyan)\n");
    std::cout << colors::bright_white("Hello World (bright_white)\n");

    // Background colors
    std::cout << colors::bg_black("Hello World (bg_black)\n");
    std::cout << colors::bg_red("Hello World (bg_red)\n");
    std::cout << colors::bg_green("Hello World (bg_green)\n");
    std::cout << colors::bg_yellow("Hello World (bg_yellow)\n");
    std::cout << colors::bg_blue("Hello World (bg_blue)\n");
    std::cout << colors::bg_magenta("Hello World (bg_magenta)\n");
    std::cout << colors::bg_cyan("Hello World (bg_cyan)\n");
    std::cout << colors::bg_white("Hello World (bg_white)\n");

    // Bright background colors
    std::cout << colors::bg_bright_black("Hello World (bg_bright_black)\n");
    std::cout << colors::bg_bright_red("Hello World (bg_bright_red)\n");
    std::cout << colors::bg_bright_green("Hello World (bg_bright_green)\n");
    std::cout << colors::bg_bright_yellow("Hello World (bg_bright_yellow)\n");
    std::cout << colors::bg_bright_blue("Hello World (bg_bright_blue)\n");
    std::cout << colors::bg_bright_magenta("Hello World (bg_bright_magenta)\n");
    std::cout << colors::bg_bright_cyan("Hello World (bg_bright_cyan)\n");
    std::cout << colors::bg_bright_white("Hello World (bg_bright_white)\n");

    // Text styles
    std::cout << colors::bold("Hello World (bold)\n");
    std::cout << colors::dim("Hello World (dim)\n");
    std::cout << colors::italic("Hello World (italic)\n");
    std::cout << colors::underline("Hello World (underline)\n");
    std::cout << colors::blink("Hello World (blink)\n");
    std::cout << colors::reverse("Hello World (reverse)\n");
    std::cout << colors::hidden("Hello World (hidden)\n");
    std::cout << colors::strikethrough("Hello World (strikethrough)\n");

    colors::disable_colors();
    std::cout << colors::red("Hello World (red but disabled)\n");
    colors::enable_colors();
    std::cout << colors::red("Hello World (red and enabled again)\n");

    return 0;
}