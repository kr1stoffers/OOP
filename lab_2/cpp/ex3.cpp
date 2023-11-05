#include <iostream>

using namespace std;

class Third {
   public:
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
    float s, m;
    void sum(First &first, Second &second) {
        s = first.a + first.b + first.c + second.x + second.y;
        cout << s << endl;
    };
    void mult(First &first, Second &second) {
        m = first.a * first.b * first.c * second.x * second.y;
        cout << m << endl;
    };
};

int main(int argc, char const *argv[]) {
    Third::First f;
    f.vvod1();

    Third::Second s;
    s.vvod2();

    Third tmp;
    tmp.sum(f, s);
    tmp.mult(f, s);
}
