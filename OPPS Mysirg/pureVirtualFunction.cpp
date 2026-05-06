#include<iostream>
using namespace std;

class Test {
    private:
        int a, b;
    public:
        virtual void f1() = 0; // pure virtual function -> there is no definition of pure virtual function
        void f2() {
            cout<<"f2"<<endl;
        }
};
class DummyTest : public Test { // User 2 of class Test
    public:
        void f1() { // you have to define PVF in the child class of abstract class
            cout<<"Overridden Function"<<endl;
        }
        // void f2() {
        //     cout<<"f2 dummy"; // isee chalne ke lea upart base class ke f2 ko virtual bana do
        // }
};

int main() {
    //Test obj; //(User 1 of class Test) Can't do that because there is a PVF in the test class -> abstact class (can't make object of abstract class)

    // DummyTest obj;
    // obj.f1();

    // you can create pointer of an abstract class 41:00
    Test *p = new DummyTest; // parent pointer can point to child object
    p->f1(); // due to virtual keyword -> late binding the slection of the function is decided on the basis to which the p points not the type of pointer p, so here it points to the dummyTest and inside it vptr se vtable tak jaega or usme jo entry hoge f1 ke unko bind krega 
    // p->f2();

    return 0;
}

// parent child pointer can point to the child pointer