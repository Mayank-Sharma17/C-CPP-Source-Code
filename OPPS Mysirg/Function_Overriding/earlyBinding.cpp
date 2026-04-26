#include<iostream>
using namespace std;

class A {
    public:
        void f1() {
            cout<<"f1 of A";
        }
};
class B : public A {
    public:
        void f2() {
            cout<<"f2 of B";
        }
};

int main() {       
    A *p;
    B o2;
    p = &o2; // ye to runtime pr he pata chalega ke pointer mae kiska address aaya

    // o2.f1(); // A due to early binding
    // o2.f2(); // B due to early binding

    p->f1(); // here early binding hoge on the basis of the type of the pointer p which is pointing to the class A 
    p->f2(); // toh A mae f2 nahe milega to use parent class nahe hai jisme vo check kre toh error aega 

    cout<<endl;
    return 0;
}