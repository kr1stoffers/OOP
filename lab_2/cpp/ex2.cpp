#include <iostream>

using namespace std;

class First {
   public:
    int a, b, c;
    void vvod1() {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
    }
};

class Second {
   public:
    float x, y;
    void vvod2() {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
    }
};

class Third : public First, public Second {
   public:
    float s, m;
    void sum() {
        s = a + b + c + x + y;
        cout << s << endl;
    };
    void mult() {
        m = a * b * c * x * y;
        cout << m << endl;
    };
};

int main(int argc, char const *argv[]) {
    Third tmp;
    tmp.vvod1();
    tmp.vvod2();
    tmp.sum();
    tmp.mult();

    getchar();
}
