#include<iostream>
using namespace std;
class B {
    int a;
    public:
        int b;
        void set();
        int get();
        void show();
};
class D : public B {
    int c;
    public:
        void mul();
        void display();
};

void B::set() {
    a = 5, b = 10;
}
int B:: get() {
    return a;
}
void B::show() {
    cout<<a<<endl;
}

void D::mul() {
    c = b * get();
}
void D::display() {
    cout<<"a = "<<get()<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}

int main() {
    D d;
    d.set();
    d.mul();
    d.show();
    d.display();

    d.b = 20;
    d.mul();
    d.display();
    return 0;
}