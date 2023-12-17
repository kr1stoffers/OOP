#include <iostream>

using namespace std;

class MyClass {
   public:
    void virtual print() = 0;
};

class First : public MyClass {
   private:
    int a, b, c;

   public:
    First(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    };
    ~First(){};
    void print() {
        cout << "First";
        cout << "\t" << a << endl;
        cout << "\t" << b << endl;
        cout << "\t" << c << endl;
    }
};

class Second : public MyClass {
   private:
    float x, y, z;

   public:
    Second(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    };
    ~Second(){};
    void print() {
        cout << "Second";
        cout << "\t" << x << endl;
        cout << "\t" << y << endl;
        cout << "\t" << z << endl;
    }
};

int main() {
    First f(3, 6, 2);
    Second s(4.1, 8.45, 3.21);

    MyClass* ptr = &f;
    MyClass* new_ptr = &s;

    ptr->print();

    new_ptr->print();

    getchar();
}
