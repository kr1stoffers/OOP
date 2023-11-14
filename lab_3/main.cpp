#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Friendship {
    friend float sum(Friendship &);
    friend float sub(Friendship &);

   private:
    int x1, y1, x2, y2;

   public:
    float z, r;
    Friendship(int x1, int y1, int x2, int y2, float z, float r) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        this->z = z;
        this->r = r;
    }

    void print() {
        cout << "\nValues: ";
        cout << x1 << endl;
        cout << "\t" << y1 << endl;
        cout << "\t" << x2 << endl;
        cout << "\t" << y2 << endl;
        cout << "\t" << z << endl;
        cout << "\t" << r << endl;
    }
};

float sum(Friendship &f) { return (f.x1 + f.y1 + f.x2 + f.y2 + f.z + f.r); }
float sub(Friendship &f) { return ((f.x1 + f.x2) - (f.y1 + f.y2)); }

int main(int argc, char const *argv[]) {
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(1);
    cout << "First elem. of queue: " << q.front() << endl;
    q.pop();
    cout << "Firts elem. of queue: " << q.front() << endl;

    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout << "Top of stack: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;
    s.pop();
    cout << "Top of stack: " << s.top() << endl;

    Friendship first(4, 3, 2, 5, 1, 1);
    first.print();
    cout << "Sum: " << sum(first) << endl;
    cout << "Sub: " << sub(first);

    Friendship second(1, 1, 1, 1, 1, 1);
    second.print();
    cout << "Sum: " << sum(second) << endl;
    cout << "Sub: " << sub(second);
}
