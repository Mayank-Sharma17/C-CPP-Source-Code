#include<iostream>
using namespace std;
class fd {
    long int amount;
    int years;
    float rate, r_val;
    public:
        fd() {}
        fd(long int a, int y, float r=0.12) {
            amount = a;
            years = y;
            rate = r;
            r_val = amount;
            for(int i=0; i<y; i++) {
                r_val = r_val*(1.0 + (float)r/100);
            }
        }
        fd(long int a, int y, int r) {
            amount = a;
            years = y;
            rate = r;
            r_val = amount;
            for(int i=0; i<y; i++) {
                r_val = r_val*(1.0 + (float)r/100);
            }
        }

        void display(void) {
            cout<<"principal amount = "<<amount<<endl;
            cout<<"Return = "<<r_val<<endl;
        }
};

int main() {
    fd f1, f2, f3;
    long int p;
    int y;
    float r;
    int R;

    cout<<"Enter amount, time, interest rate"<<endl;
    cin>>p>>y>>r;
    f1 = fd(p, y, r);
    cout<<"Enter amount, time, interest rate"<<endl;
    cin>>p>>y>>r;
    f2 = fd(p, y, r);
    cout<<"Enter amount, time"<<endl;
    cin>>p>>y;
    f3 = fd(p, y);

    cout<<"Deposit 1 "<<endl;
    f1.display();
    cout<<"Deposit 2 "<<endl;
    f2.display();
    cout<<"Deposit 3 "<<endl;
    f3.display();
    return 0;
}