#include<iostream>
using namespace std;

int main() {

    try
    {
        int a,b;
        cout<<"Enter two numbers ";
        cin>>a>>b;
        if(b == 0) {
            throw 1; // throw primitive or non primitive can throw obj also, in java this throw can be implicit
        }
        int c=a/b;
        cout<<"Result is "<<c;
        cout<<endl;
    }
    catch (int e) // jo throw kiya unsko receive krne ke lea
    {
        cout<<"Runtime error";
    }

    int x,y;
    cout<<"Enter two numbers";
    cin>>x>>y;
    int z = x+y;
    cout<<"Result is "<<z;
    cout<<endl;

    return 0;
}