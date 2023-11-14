#include <iostream>

using namespace std;

template <typename T>
T minmin(T a, T b, T c) {
    if ((a < b && (a < c))) {
        return a;
    }
    if ((a > b) && (c > b)) {
        return b;
    }
    return c;
}

template <typename T>
class Arr {
   private:
   public:
    Arr() {}
};

template <class T>
class myklass {
    T *data;
    int size;
    int n;

   public:
    myklass(int);
    T &operator[](int i) { return data[i]; }
};
template <class T>
myklass<T>::myklass(int) {
    data = new T(n);
    size = n;
};

int main(int argc, char const *argv[]) {
    cout << "int: " << minmin(3, 2, 1) << endl;
    cout << "float: " << minmin(1.1, 1.2, 1.3) << endl;
    cout << "char: " << minmin('a', 'b', 'c');
}
