#include<iostream>
using namespace std;

class alpha {
    int a;
    public:
        alpha(int x) {
            a = x;
            cout<<"alpha initialized"<<endl;
        }
        void show_a() {
            cout<<"A = "<<a<<endl;
        }
};
class beta {
    int b;
    public:
        beta(float y) {
            b = y;
            cout<<"beta initialized"<<endl;
        }
        void show_b() {
            cout<<"B = "<<b<<endl;
        }
};
class gamma : public beta, public alpha {
    int m;
    int n;
    public:
        gamma(int p, float q, int c, int d) : alpha(p), beta(q) {
            m = c;
            n = d;  
            cout<<"gamma initialized"<<endl;
        }
        void show_mn() {
            cout<<"m = "<<m<<" n = "<<n<<endl;
        }
};

int main() {
    gamma g(5, 10.5, 20, 30);
    g.show_a();
    g.show_b();
    g.show_mn();
    return 0;
}