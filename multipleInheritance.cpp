#include <iostream>
using namespace std;
class Base1 {
    public:
        ~Base1() { cout<<"Base 1's destructor"<<endl; }
};
class Base2 {
    public:
        ~Base2() { cout<<"Base 2's destructor"<<endl; }
};
class Derived : public Base1, public Base2 {
    public:
        ~Derived() { cout<<"Derived's destructor"<<endl; }
};

int main() {
    Derived d;
    return 0;
}

// 🔷 What Happens in main()?
// Derived d;

// When object d is created:

// ✅ Constructor order (not shown here, but important):

// Base1 constructor

// Base2 constructor

// Derived constructor

// When main() ends:

// return 0;

// Object d goes out of scope.

// So destructors are called.

// 🔥 Destructor Order Rule

// Destructors run in reverse order of inheritance.

// Since inheritance is:

// class Derived : public Base1, public Base2

// Destruction order will be:

// Derived destructor

// Base2 destructor

// Base1 destructor

// 🔷 Final Output
// Derived's destructor
// Base 2's destructor
// Base 1's destructor