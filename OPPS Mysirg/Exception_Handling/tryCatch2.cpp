#include<iostream>
using namespace std;

void f1() {
    int age, vote;
    try
    {
        cout<<"Enter your age : ";
        cin>>age;
        if(age < 18)
            throw 1;
        cout<<"\nVote for your favorite actor :-";
        cout<<"\n1. Akshay";
        cout<<"\n2. Prabhas";
        cout<<"\n3. ramraj"<<endl;
        cin>>vote;
        cout<<"\nThanks for your vote";
    }
    catch(int e)
    {   
        cout<<"Your are not eligible to cast your vote";
    }
}

int main() {
    f1();
    return 0;
}