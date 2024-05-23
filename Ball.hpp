#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    void setRadius(const double r);
    double getRadius() const;
    double getMass() const;
    void setColor(Color& color);
private:
    Velocity _velocity;
    Point _center;
    double _radius;
    double _mass;
    Color _color;
};
