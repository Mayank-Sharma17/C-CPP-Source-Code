#include<iostream>
using namespace std;

class Complex {
    private:
        int a, b; 
    public:
        void setData(int x, int y) 
        {
            a = x;
            b = y;
        }
        
        Complex(){ a=0; b=0; }
        Complex(int x) { a=x; b=0; } 
        Complex(int x, int y) { a=x; b=y; } 
        Complex (Complex &C) // copy constructor
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
    Complex temp(0,0);
    temp.a = a+C.a; 
    temp.b = b+C.b;
    return temp;
}

int main() {
    Complex c1(1,2), c2(3,4), c3; 
    Complex c4 = c1; 
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1.add(c2); 
    c3.showData();
    cout<<endl;
}