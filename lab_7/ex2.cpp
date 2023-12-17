#include <iostream>

using namespace std;

class First {
    friend float f1(First &);
    friend class Second;

   protected:
    int x, y;

   public:
    float s1;
    First(int x, int y) {
        this->x = x;
        this->y = y;
    };
};

class Second {
    friend float f2(Second &);

   private:
    float a, b, c;

   public:
    float s2;
    Second(float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
    };
    int first_sum(First &c) { return (c.s1 = c.x + c.y); }
    float second_sum() { return (s2 = a + b + c); }
};

float f1(First &c) { return (c.x + c.y); }
float f2(Second &c) { return (c.a + c.b + c.c); }

int main(int argc, char const *argv[]) {
    First f(4, 6);
    Second s(5.3, 2.1, 7.45);

    cout << s.first_sum(f) << endl;
    cout << s.second_sum();

    getchar();
}
