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
};

int sum(Test t) {             // not a member of class
    return t.a + t.b;         // accessing private members
}

int main() {
    Test obj(5, 7);
    cout << "Sum = " << sum(obj);
}