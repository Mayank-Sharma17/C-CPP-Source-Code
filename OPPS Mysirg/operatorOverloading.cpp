// #include<iostream>
// using namespace std;

// class Complex {
//     private:
//         int a, b; // instance member variables
//     public:
//         Complex(){ a=0; b=0; }
//         Complex(int x) { a=x; b=0; } 
//         Complex(int x, int y) { a=x; b=y; } 
//         Complex (Complex &C) // copy constructor
//         {           
//             a=C.a;
//             b=C.b;
//         }
//         ~Complex() {} // DESTRUCTOR
//         void setData(int, int);
//         void showData(); 
//         Complex operator+(Complex);
//         Complex operator-(Complex);
//         Complex operator-(); // overloading of unary operator, also used the concept of function overloading here !
// };
// void Complex::setData(int x, int y) {
//     a=x;
//     b=y;
// }
// void Complex::showData() 
// {
//     cout<<"\na = "<<a<<" b = "<<b;
// }
// Complex Complex::operator+(Complex C) { // + is overloaded
//     Complex temp;
//     temp.a = a+C.a; 
//     temp.b = b+C.b;
//     return temp;
// }
// Complex Complex::operator-(Complex C) { // - is overloaded
//     Complex temp;
//     temp.a = a-C.a;
//     temp.b = b-C.b;
//     return temp;
// }
// Complex Complex::operator-() {
//     Complex temp;
//     temp.a = -a;
//     temp.b = -b;
//     return temp;
// }
// int main() {
//     Complex c1(1,2), c2(3,4), c3; 
//     Complex c4 = c1; 
//     c1.setData(3, 4);
//     c2.setData(5, 6);
//     c3 = c1+c2;
//     // c3 = c1.add(c2); 
//     c3.showData();

//     c3 = c1-c2;
//     c3.showData();

//     c3=-c1; // c1 is the caller object --> calling - operator and result is stored in c3
//     c1.showData();
//     c3.showData();
//     cout<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int img, real;
    public:
        Complex()
        {

        }
        Complex(int a,int b)
        {
            real = a;
            img = b;
        }
        void show()
        {
            cout << real << "+" << img << "i" << endl;
        }
        Complex operator-(Complex &);
        friend Complex operator+ (Complex &, Complex &);
};
Complex Complex::operator-(Complex &a)
{
    Complex temp;
    temp.img = this->img - a.img;
    temp.real = this->real - a.real;
    return temp;
}
Complex operator+ (Complex &a,Complex &b)
{
    Complex temp;
    temp.img = a.img + b.img;
    temp.real = a.real + b.real;
    return temp;
}
int main()
{
    Complex obj1(2, 3), obj2(2, 3), addition,subtraction;
    addition = obj1 + obj2;
    subtraction = obj1.operator-(obj2); // same as subtraction = obj1-obj2;

    addition.show();
    subtraction.show();
    
    return 0;
}