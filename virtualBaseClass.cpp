#include<iostream>
using namespace std;

class base {
    public:
        virtual void display() {
            cout<<"display base"<<endl;
        }
        virtual void show() {
            cout<<"show base"<<endl;
        }
};

class derived : public base {
    public:
        void display() {
            cout<<"display derived"<<endl;
        }
        void show() {
            cout<<"show derived"<<endl;
        }
};

int main() {
    base B;
    derived D;

    base *bptr;

    // Due to virtual keyword binding in done on runtime on the basis of the type of the object created not on the basis of the type of the pointer 

    bptr = &B;
    bptr->display();
    bptr->show();

    bptr = &D;
    bptr->display();
    bptr->show();

    return 0;
}