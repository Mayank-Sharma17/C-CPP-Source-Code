#include<iostream>
using namespace std;

class student {
    protected:
        int roll;
    public:
        void get_roll(int);
        void put_roll(void);
};
void student::get_roll(int r) {
    roll = r;
}
void student::put_roll() {
    cout<<"Roll no = "<<roll<<endl;
}

class Test : public student {
    protected:
        float sub1, sub2;
    public:
        void get_marks(float, float);
        void put_marks(void);
};
void Test::get_marks(float a, float b) {
    sub1 = a;
    sub2 = b;
}
void Test::put_marks() {
    cout<<"Marks in sub1 = "<<sub1<<endl;
    cout<<"Marks in sub2 = "<<sub2<<endl;
}

class Result : public Test {
    float total;
    public:
        void display(void);
};
void Result::display() {
    total = sub1 + sub2;
    put_roll(); 
    put_marks();
    cout<<"Total = "<<total<<endl;
}

int main() {
    Result obj;
    obj.get_roll(39);
    obj.get_marks(50.0, 59.0);
    obj.display();
}