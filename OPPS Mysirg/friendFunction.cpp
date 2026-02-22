#include<iostream>
// friend function is a non member function of a class, and it can access all the members of the class (private, protected or public)
using namespace std;

class Item
{
    private:
        int a, b;

    public:
        void setData(int x, int y) {a=x; b=y;}
        void showData() {cout<<"a="<<a<<" b="<<b<<endl;}
        friend Item operator+(int, Item);
        friend Item operator-(Item);

        friend Item operator+(Item, Item);
        friend void f1(Item); // declare FRIEND FUNCTION inside the class 

        // Overloading of insertion and extraction operator
        friend istream& operator>>(istream&, Item&); // because taking input, that's why taking reference of item obj
        friend ostream& operator<<(ostream&, Item); // just want to print values of Item type obj
};

Item operator+(int k, Item i) {
    Item temp;
    temp.a = i.a+k;
    temp.b = i.b+k;
    return temp;
}

Item operator-(Item i) {
    Item temp;
    temp.a = -i.a;
    temp.b = -i.b;
    return temp;
}

Item operator+(Item X, Item Y) {
    Item temp;
    temp.a = X.a+Y.a;
    temp.b = Y.b+Y.b;
    return temp;
}

// now define the function ourside the class without membership label, as it is not a member of the Item class, but it can be a member of another class.
void f1(Item i) { // we need to pass the object to access the properties of the class, can't do it directly
    int c = i.a+i.b;
    cout<<"Sum is "<<c;
}

istream& operator>>(istream &din, Item &i){
    din>>i.a>>i.b;
    return din;
}

ostream& operator<<(ostream &dout, Item i) {
    dout<<"a="<<i.a<<" b="<<i.b<<endl;
    return dout;
}

int main() {
    Item i1, i2, i3;
    cout<<"Enter an item : ";
    cin>>i1; // not possible because there is not a member function in istream class that takes the refernce of type Item, so overload extraction >> operator by making it friend to class Item
    cout<<i1;
    // i1.setData(3, 4);
    i2.setData(1, 2);
    // i3 = i1+i2; // to do this overload plus operator, i3 = operator+(i1, i2)
    i3 = 5+i1; // left side is not caller object so make the function friend
    i3.showData();
    f1(i1);
    cout<<endl;
    return 0;
}
