#include <iostream>
#include <list>
using namespace std;

class MyClass {
    friend float kvur(MyClass &);
    friend float sum(MyClass &);

   private:
    int a, b, c;

   protected:
    float x, y, z;

   public:
    MyClass(int a, int b, int c, float x, float y, float z) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->x = x;
        this->y = y;
        this->z = z;
    };
};

float kvur(MyClass &c) { return (c.a * c.x * c.x + c.b * c.x + c.c); }
float sum(MyClass &c) { return (c.x + c.y + c.z); }

int main(int argc, char const *argv[]) {
    MyClass tmp(4, 6, 1, 5.4, 2.8, 7.1);

    cout << kvur(tmp) << endl;
    cout << sum(tmp) << endl;

    list<int> mList{5, 2, 67, 1};
    cout << mList.front() << endl;
    mList.pop_front();
    cout << mList.front() << endl;
    mList.push_front(7);
    cout << mList.front() << endl;

    getchar();
}
