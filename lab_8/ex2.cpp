#include <iostream>

using namespace std;

class First {
   private:
    int f_int;

   public:
    string f_str;

    First(int f_int) { this->f_int = f_int; };

    virtual void enter() {
        cout << "Enter string: ";
        cin >> f_str;
    }
    virtual void print() {
        cout << "first:" << endl;
        cout << "\t" << f_int << endl;
        cout << "\t" << f_str;
    };
};

class Second : public First {
   private:
    int s_int;

   public:
    string s_str;

    Second(int f_int, int s_int) : First(f_int) { this->s_int = s_int; };

    void enter() {
        cout << "Enter string: ";
        cin >> s_str;
    }
    void print() {
        cout << "second:" << endl;
        cout << "\t" << s_int << endl;
        cout << "\t" << s_str;
    };
};

class Third : public Second {
   private:
    int t_int;

   public:
    string t_str;

    Third(int f_int, int s_int, int t_int) : Second(f_int, s_int) {
        this->t_int = t_int;
    };

    void enter() {
        cout << "Enter string: ";
        cin >> t_str;
    }
    void print() {
        cout << "third:" << endl;
        cout << "\t" << t_int << endl;
        cout << "\t" << t_str;
    };
};

int main(int argc, char const* argv[]) {
    First f(23);
    First* f_it = &f;

    f_it->enter();
    f_it->print();
    cout << endl;

    Second s(2, 4);
    f_it = &s;
    f_it->enter();
    f_it->print();
    cout << endl;

    Third t(1, 7, 3);
    t.enter();
    t.print();

    getchar();
}
