#include<iostream>
using namespace std;

class Item
{
    private:
        int a, b;

    public:
    // ye dono setData and showData ke ander this pointer hai !
        void setData(int a, int b) {
            // a=x; b=y;
            this->a = a; // this is pointing to the caller obj, and this -> a(ye wala a instance member variable hai)
            this->b = b;
        }
        void showData() {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        Item greater(Item obj) {
            if(a+b > obj.a+obj.b) {
                return *this; // because this is pointer and we have to return the obj so *this
            } else {
                return obj;
            }
        }
};
int main() {
    Item i1, i2, i3;
    i1.setData(10, 20);
    i2.setData(8, 20);
    i3 = i1.greater(i2);
    i3.showData();
    cout<<endl;
    return 0;
}
