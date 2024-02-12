#include <iostream>
#include "raylib.h"

static float gravity = 0.5;
static float friction = 0.2;
class Object {
public:


protected:
    float x;
    float y;


};


class Ball : public Object {
public:
    Ball(int _x, int _y, const Color& _color, int _radius) : x(_x), y(_y), color(_color), radius(_radius) {
        y_velocity = 0;
        x_velocity = 10;
    }
    void loop() {
        calcfiz();
        print();
    }
    void calcfiz() {

        if (y + radius >= 600 || y - radius <= 0)
        {
            if (abs(y_velocity) < 1) {
                y_velocity = 0;
            }
            else if (y_velocity > 0) {
                y_velocity = -(y_velocity - friction);
            }

            else {
                y_velocity = -y_velocity;
            }
        }
        else if (y + radius < 600) {
            y_velocity += gravity;
        }

        if (x + radius > 800 || x - radius < 0) {
            x_velocity = -x_velocity;
        }
        std::cout << x << " , " << y << std::endl;
        x += x_velocity;
        y += y_velocity;

    }

    void print() {
        DrawCircle(x, y, radius, color);
    }

private:
    
    float x_velocity;
    float y_velocity;
    float radius;
    Color color;
};