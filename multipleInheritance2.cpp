#include <iostream>
using namespace std;
class base {
    int arr[10];
};
class b1 : public base {};
class b2 : public base {};
class derived: public b1, public b2 {};
int main() {
    cout<<sizeof(derived);
    return 0;
}

// This is a classic multiple inheritance example in C++. Let’s break down what’s happening.

// 1️⃣ Class Structure
// class base {
//     int arr[10];
// };

// base contains an array of 10 integers.

// Each int is typically 4 bytes.

// So arr[10] = 10 × 4 = 40 bytes.

// So:

// sizeof(base) = 40 bytes
// class b1 : public base {};
// class b2 : public base {};

// b1 inherits from base

// b2 also inherits from base

// Since there are no extra members:

// sizeof(b1) = 40
// sizeof(b2) = 40
// class derived: public b1, public b2 {};

// Now this is multiple inheritance.

// derived contains:

// One base subobject through b1

// Another separate base subobject through b2

// So memory layout looks like:

// derived
//  ├── b1
//  │    └── base (40 bytes)
//  └── b2
//       └── base (40 bytes)

// So total:

// 40 + 40 = 80 bytes
// ✅ Output
// cout << sizeof(derived);

// Will most likely print:

// 80
// 🔥 Why 80? (Important Concept)

// Because two copies of base exist inside derived.

// This is called the Diamond Problem in C++.

// If you drew the inheritance diagram:

//       base
//      /    \
//     b1     b2
//      \    /
//      derived

// Without virtual inheritance, derived gets two separate base objects.

// 💡 How To Avoid This?

// Use virtual inheritance:

// class b1 : virtual public base {};
// class b2 : virtual public base {};

// Now derived will contain only one shared base object.

// Then:

// sizeof(derived) = 40 (roughly, plus possible padding)
// 🚀 Key Takeaway

// Normal multiple inheritance → duplicate base objects.

// Virtual inheritance → single shared base object.

// Your program prints 80 because derived contains two base subobjects.