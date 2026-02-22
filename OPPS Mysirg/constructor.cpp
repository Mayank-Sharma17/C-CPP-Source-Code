#include<iostream>
using namespace std;

// commplex class
class Complex {
    private:
        int a, b; 
    public:
        void setData(int x, int y) 
        {
            a = x;
            b = y;
        }
        Complex() // CONSTRUCTOR, name is same as class, no return type
        {
            cout<<"Hello";
        }
        void showData(); 
        Complex add(Complex);
};
void Complex::showData() 
{
    cout<<"\na = "<<a<<" b = "<<b;
}
Complex Complex::add(Complex C) {
    Complex temp;
    temp.a = a+C.a; 
    temp.b = b+C.b;
    return temp;
}

int main() {
    Complex c1, c2, c3; // automatically constructor invoked 3 times at object creation
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1.add(c2); // here one more time constructor will invoke as temp obj is created inside the add method
    c3.showData();
    cout<<endl;
}

// output of this code -> it will print 4 times hello
// then print the addition of 2 complex numbers