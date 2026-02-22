#include<iostream>
using namespace std;

// commplex class
class Complex {
    private:
        int a, b; // instance(obj) member variable, life of these var = libe of object
    public:
        void setData(int x, int y) // x, y - formal variables / local --> sare formal variables local hote h, memory will be free after the end of the function call
        {
            a = x;
            b = y;
        }
        // void showData()
        // {
        //     cout<<"\na = "<<a<<" b = "<<b;
        // }
        void showData(); 
        Complex add(Complex);
};
void Complex::showData() // this is how you can make it member function outside the class using membership label Complex::
{
    cout<<"\na = "<<a<<" b = "<<b;
}
Complex Complex::add(Complex C) {
    Complex temp;
    temp.a = a+C.a; // directly caller object c1 ke member var koe he access krskte hai 
    temp.b = b+C.b;
    return temp;
}

int main() {
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1.add(c2); // c1 caller object hai, jisne apne add method ko call kiya c2 usme as an argument pass kiya, add function ne jo return kiya vo c3 mae assign hua
    c3.showData();
    cout<<endl;
}