#include<iostream>
using namespace std;

class A {
    public:
        virtual void f1() { // now f1 of B is printed, because of late binding, virutal function is the solution
            cout<<"f1 of A";
        }
};
class B : public A {
    public:
        void f1() {
            cout<<"f1 of B";
        }
        void f2() {
            cout<<"f2 of B";
        }
};

int main() {       
    A *p = new B; // using new keyword
    // B o2;
    // p = &o2; 

    p->f1(); // A ka chalega because of early binding, problem in overriding -> B ka obj bane to B ka f1 chalna chea tha, ye problem direct object banakar obj.f2() se call krke nahe aate ye base pointer ke through he aare hai 
    
    cout<<endl;
    return 0;
}