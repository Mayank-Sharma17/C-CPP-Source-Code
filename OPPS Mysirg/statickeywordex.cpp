#include<iostream>
using namespace std;

// class Item {
//     public:
//         int a, b; // Instance variables / or Instance member variables
//         static int k; // static member variable (only say) / or class variable because doesn't belong to particular object, it belongs to whole class
// };
class Item {
    private:
        int a, b; // Instance variables / or Instance member variables
        static int k; // static member variable (only say) / or class variable because doesn't belong to particular object, it belongs to whole class
    public:
        void set_a(int x) {a=x;} // Instance method
        void set_b(int y) {b=y;} // Instance method
        int get_a() {return a;} // Instance method   
        int get_b() {return b;} // Instance method   
        static void set_k(int m) {k=m;} // Instance method, here this function is not doing any object specific task, means not using a, b... 
                                 // Its simply asigning the value of local var m in the static member variable k, it can be done without creating any object of the class
                                 // so don't make it instance method, because to call instance method we need the object of the class
                                 // so make it static ! (sirf member functions he static banae jaaskte hai)
                                 // now it is called static method / or static member function
        static int get_k() {return k;} // Instance method....make it also static   
    };
int Item::k; // you need to define the static member variable outside the class, it's a rule, and bydefault value of k = 0; you can change it, k is not getting memory in the objecet, it's gets memory seperately
             // ek class ke saare static member variable ke lea memory alag milte hai
             // static memeber var ko ek he baar memory milege pure class ke lea
int main() {
//    Item i1, i2;
    // i1.a = 5;
//    i1.set_a(5); // this is how you access private instance mem var, using the public methods 
    // cout<<i2.a<<endl; // wihtout obj you can't access it, and this will print garbage value
//    cout<<i2.get_a()<<endl;
    // i1.k=10;
    Item::set_k(10); // i1.set_k(10);
    // cout<<"k="<<i2.k; // k=10, i1.k = i2.k
    cout<<"k="<<Item::get_k(); // cout<<"k="<<i1.get_k();
    cout<<endl;
    return 0;
}  