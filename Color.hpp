#pragma once
#include <istream>

class Color {
  public:
    Color();
    Color(double red, double green, double blue);
    double red() const;
    double green() const;
    double blue() const;
    friend std::istream& operator>>(std::istream& stream, Color& color){
        stream >> color.r >> color.g >> color.b;
        return stream;
    };

  private:
    double r{};
    double g{};
    double b{};
};
