#include<iostream>
using namespace std;

class Complex {
    private:
        int a, b; 
        const int k;
    public:
        void setData(int x, int y) 
        {
            a = x;
            b = y;
        }
        
        Complex():a(0),b(0),k(1)
        {}
        // Complex(){ a=0; b=0; }
        Complex(int x):a(x),b(0),k(2)
        {}
        // Complex(int x) { a=x; b=0; } 
        Complex(int x, int y, int k):a(x), b(y), k(k)
        {}
        // Complex(int x, int y) { a=x; b=y; } 
        Complex (Complex &C):k(2) // copy constructor
        {           
            a=C.a;
            b=C.b;
        }
        ~Complex() {} // DESTRUCTOR
        void showData(); 
        Complex add(Complex);
};
void Complex::showData() 
{
    cout<<"\na = "<<a<<" b = "<<b;
}
Complex Complex::add(Complex C) {
    Complex temp(0,0,0);
    temp.a = a+C.a; 
    temp.b = b+C.b;
    return temp;
}

int main() {
    Complex c1(1,2,0), c2(3,4,0), c3; 
    Complex c4 = c1; 
    // c1.setData(3, 4);
    // c2.setData(5, 6);
    // c3 = c1.add(c2); 
    c1.showData();
    c1.showData();
    c3.showData();
    cout<<endl;
}