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
    T *array;
    int size;

   public:
    Arr(int size) {
        this->size = size;
        array = new T[size];
    }

    void fill() {
        cout << "\nEnter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cout << i + 1 << ". ";
            cin >> array[i];
        }
    }

    void sort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (array[i] > array[j]) {
                    T tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                }
            }
        }
    }

    T getMin() {
        T min = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;
    }

    T getMax() {
        T max = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }
        return max;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main(int argc, char const *argv[]) {
    cout << "int: " << minmin(3, 2, 1) << endl;
    cout << "float: " << minmin(1.1, 1.2, 1.3) << endl;
    cout << "char: " << minmin('a', 'b', 'c');

    Arr<int> array(7);
    array.fill();
    cout << "unsorted: " << endl;
    array.print();
    cout << "sorted: " << endl;
    array.sort();
    array.print();

    cout << "max: " << array.getMax() << endl;
    cout << "min: " << array.getMin() << endl;

    getchar();
}
