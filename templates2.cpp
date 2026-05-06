#include<iostream>
using namespace std;
#define MAX 5

template <class T>
T find_min(T ARR[]) {
    T MIN = ARR[0];
    for(int i=1; i<MAX; i++) {
        if(ARR[i] < MIN) {
            MIN = ARR[i];
        }
    }
    return MIN;
}

// Class template
template <class C>
class Example {
    C value;
public:
    void set(C c) { value = c; }
    C get() { return value; }
};

int main() {    
    int I_MIN;
    float F_MIN;
    char C_MIN;

    int I[5] = {1, 2, 3, 4, 5};
    float F[5] = {1.5, 2.7, 3.5, 4.6, 5.9};
    char C[5] = {'9', 'a', '/', '+', 'v'};

    I_MIN = find_min(I);
    F_MIN = find_min(F);
    C_MIN = find_min(C);

    cout<<"Int min = "<<I_MIN<<endl;
    cout<<"float min = "<<F_MIN<<endl;
    cout<<"char min = "<<C_MIN<<endl;

    Example<int> obj1;
    Example<float> obj2;
    Example<char> obj3;
    obj1.set(5);
    obj2.set(5.5);
    obj3.set('A');
    cout<<obj1.get()<<endl;
    cout<<obj2.get()<<endl;
    cout<<obj3.get()<<endl;
    return 0;
}