#include<iostream>
using namespace std;

template <class T>
void nswap(T &x, T &y) {   // pass by reference
    T temp = x;
    x = y;
    y = temp;
}

void fun(int &m, int &n, float &a, float &b) {  // pass by reference
    nswap(m, n);
    nswap(a, b);
}

int main() {
    int x = 100, y = 200;
    float p = 11.5, q = 22.5;

    fun(x, y, p, q);

    cout << x << " " << y << endl;
    cout << p << " " << q << endl;

    return 0;
}