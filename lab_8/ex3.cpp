#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

class First {
   public:
    int x1, y1, x2, y2;

    First(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    };

    void rect() {
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

class Second : public First {
   public:
    int r;
    sf::Color color;

    Second(int x1, int y1, int x2, int y2, int r, sf::Color color)
        : First(x1, y1, x2, y2) {
        this->r = r;
        this->color = color;
    };

    void okr() {
        sf::RenderWindow window(sf::VideoMode(600, 600), "Circle");
        sf::CircleShape shape(r);
        shape.setPosition(x1, y1);
        shape.setFillColor(color);

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
    First f(50, 100, 400, 250);
    f.rect();
    Second s(50, 100, 400, 250, 100, sf::Color::Blue);
    s.okr();

    getchar();
}
