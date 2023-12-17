#include <iostream>

using namespace std;

class First {
   private:
    int f_int;

   protected:
    string f_str;

   public:
    First(int f_int, string f_str) {
        this->f_int = f_int;
        this->f_str = f_str;
    };
    void print() {
        cout << "first:" << endl;
        cout << "\t" << f_int << endl;
        cout << "\t" << f_str;
    };
};

class Second : public First {
   private:
    int s_int;

   protected:
    string s_str;

   public:
    Second(int f_int, string f_str, int s_int, string s_str)
        : First(f_int, f_str) {
        this->s_int = s_int;
        this->s_str = s_str;
    };
    void print() {
        cout << "second:" << endl;
        cout << "\t" << s_int << endl;
        cout << "\t" << s_str;
    };
};

class Third : public Second {
   private:
    int t_int;

   protected:
    string t_str;

   public:
    Third(int f_int, string f_str, int s_int, string s_str, int t_int,
          string t_str)
        : Second(f_int, f_str, s_int, s_str) {
        this->t_int = t_int;
        this->t_str = t_str;
    };
    void print() {
        cout << "third:" << endl;
        cout << "\t" << t_int << endl;
        cout << "\t" << t_str;
    };
};

int main(int argc, char const *argv[]) {
    First f(23, "qwer");
    Second s(2, "wer", 4, "asdf");
    Third t(1, "ryj", 7, "hoe", 3, "zxc");

    f.print();
    cout << endl;
    s.print();
    cout << endl;
    t.print();
    getchar();
}
