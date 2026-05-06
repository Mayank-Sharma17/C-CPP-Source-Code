#include<iostream>
using namespace std;

class Test {
    int a, b;

    public:
        Test(int x, int y) {
            a = x;
            b = y;
        }

    friend int sum(Test t);   // friend function declaration
    friend class Test2; // now test 2 is the friend of the class Test
};
class Test2 {
    public:
        void fun(Test &t) { // can acess private member var of class Test
            cout<<t.a<<endl;
            cout<<t.b<<endl;
        }
};

int sum(Test t) {             // not a member of class
    return t.a + t.b;         // accessing private members
}

int main() {
    Test obj(5, 7);
    cout << "Sum = " << sum(obj)<<endl;

    Test2 t;
    t.fun(obj);
}