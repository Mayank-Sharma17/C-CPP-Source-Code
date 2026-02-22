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
        
        Complex(){ a=0; b=0; } // c3 will call this constructor
        Complex(int x) { a=x; b=0; } 
        Complex(int x, int y) { a=x; b=y; } // PARAMETERIZED CONSTRUCTOR, name is same as class, no return type
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
    Complex c1(1,2), c2(3,4), c3; // you have to pass the arguments
    Complex c4 = c1; // copy constructor will be called here, but if you explicitly provide copy constructor then compiler will create none
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1.add(c2); 
    c3.showData();
    cout<<endl;
}

// if you comment out all the constructor then the c1, c3, c4 will show error, because compiler will create a no argument default constructor 
// so c3 will not show any error, if you create any constructor then compiler will not create any default constructor