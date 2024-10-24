#include "Color.hpp"

namespace prog {
    rgb_value r;
    rgb_value g;
    rgb_value b;

    // Default constructor.
    Color::Color() {
        r = 0;
        g = 0;
        b = 0;
    }

    // Copy constructor.
    Color::Color(const Color& other) {
        r = other.red();
        g = other.green();
        b = other.blue();
    }

    // Constructor using supplied (r, g, b) values.
    Color::Color(rgb_value red, rgb_value green, rgb_value blue) {
        r = red;
        g = green;
        b = blue;
    }

    // Get values for RGB red
    rgb_value Color::red() const {
        return r;
    }

    // Get values for RGB green
    rgb_value Color::green() const {
        return g;
    }

    // Get values for RGB blue
    rgb_value Color::blue() const {
        return b;
    }

    // Get references for RGB red
    rgb_value& Color::red()  {
        return r;
    }

    // Get references for RGB green
    rgb_value& Color::green()  {
        return g;
    }

    // Get references for RGB blue
    rgb_value& Color::blue()  {
        return b;
    }

}
