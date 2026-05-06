#include<iostream>
using namespace std;

class exam {
    int x, y, z;
    public:
        exam() {}
        exam(int a, int b, int c) {
            x = a;
            y = b;
            z = c;
        }
        void display() {
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<"z = "<<z<<endl;
        }
        void operator- ();
        friend void operator+ (exam &e);
};
void exam:: operator- () {
    x = -x;
    y = -y;
    z = -z;
}

void operator+ (exam &e) {
    e.x = -e.x;
    e.y = -e.y;
    e.z = -e.z;
}

int main() {
    exam e(1, 2, 3);
    e.display();
    // -e;
    // e.display();

    cout<<endl;

    operator+(e); // +e;
    e.display();
    
    return 0;
}