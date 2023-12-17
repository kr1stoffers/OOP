#include <iostream>

using namespace std;

class MyClass {
    friend float f1(MyClass &);
    friend float f2(MyClass &);

   private:
    float a, b, c;

   protected:
    int x, y;

   public:
    float s1, s2;
    MyClass(int x, int y, float a, float b, float c) {
        this->x = x;
        this->y = y;
        this->a = a;
        this->b = b;
        this->c = c;
    };

    void first_sum() { s1 = x + y; }
    void second_sum() { s2 = a + b + c; }
};

float f1(MyClass &c) { return (c.x + c.y); }
float f2(MyClass &c) { return (c.a + c.b + c.c); }

int main(int argc, char const *argv[]) {
    /* code */
    return 0;
}
