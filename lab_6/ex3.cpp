#include <iostream>

using namespace std;

template <class T>
class myklass {
    T *data;
    int size;

   public:
    myklass(int n) {
        data = new T[n];
        size = n;
    };
    ~myklass() { delete[] data; };

    T &operator[](int i) { return data[i]; }
};

int main() {
    srand(time(NULL));
    myklass<string> mass(25);
    for (int i = 0; i < 25; i++) {
        mass[i] = (char)(97 + rand() % 25);
    }
    for (int i = 0; i < 25; i++) cout << mass[i] << " ";

    getchar();
    string str;
    cin >> str;
}
