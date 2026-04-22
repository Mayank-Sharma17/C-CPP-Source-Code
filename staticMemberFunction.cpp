#include<iostream>
using namespace std;

class Test {
    int code;
    static int count;
    public:
        void setcode(void) {
            code = ++count;
        }
        void showcode(void) {
            cout<<"Object no : "<<code<<endl;
        }
        static void showcount(void) { // static member function
            cout<<"Count : "<<count<<endl;
        }
};
int Test::count; // necessary to initialize it 
int main() {
    Test t1, t2, t3;
    t1.setcode();
    t2.setcode();
    Test::showcount();
    t3.setcode();
    Test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}