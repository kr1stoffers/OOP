#include <iostream>

using namespace std;

class First {
   public:
    int a, b, c;
    void vvod1(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    };
};

class Second {
   public:
    float x, y;
    void vvod2(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

class Third : First, Second {
   public:
    float s, m;
    float sum();
    float mult();
};

int main(int argc, char const *argv[]) {
    int d;
    cout << "dfs";
    cin >> d;
}
