#include<iostream>
using namespace std;
class m {
    protected:
    int m;
    public:
        void get_m(int);
};
void m::get_m(int a) {
    m = a;
}

class n {
    protected:
    int n;
    public:
        void get_n(int);
};
void n::get_n(int b) {
    n = b;
}

class mn : public m, public n {
    public:
        void display(void);
};
void mn::display(void) {
    cout<<"m = "<<m<<endl;
    cout<<"m = "<<n<<endl;
    cout<<"m*n = "<<m*n<<endl;
}
int main() {
    mn obj;
    obj.get_m(5);
    obj.get_n(2);
    obj.display();
    return 0;
}