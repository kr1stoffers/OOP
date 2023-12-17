#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class MyClass {
   public:
    void virtual figure() = 0;
};

class First : public MyClass {
   private:
    int x1, y1, x2, y2;

   public:
    First(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    };
    ~First(){};

    void figure() {
        sf::RenderWindow window(sf::VideoMode(600, 600), "Rectangle");
        sf::RectangleShape shape(sf::Vector2f(x2 - x1, y2 - y1));
        shape.setPosition(x1, y1);
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    }
};

class Second : public MyClass {
   private:
    float x, y, r;

   public:
    Second(float x, float y, float r) {
        this->x = x;
        this->y = y;
        this->r = r;
    };
    ~Second(){};

    void figure() {
        sf::RenderWindow window(sf::VideoMode(600, 600), "Circle");
        sf::CircleShape shape(r);
        shape.setPosition(x, y);
        shape.setFillColor(sf::Color::Magenta);

        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    }
};

int main() {
    MyClass* array[4];
    array[0] = new First(50, 100, 400, 250);
    array[1] = new Second(200, 200, 100);
    array[2] = new First(100, 150, 400, 250);
    array[3] = new Second(50, 100, 200);

    for (int i = 0; i < sizeof(array); i++) {
        array[i]->figure();
    }
}
