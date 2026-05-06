#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file("file2.txt", ios::in | ios::out);

    file.seekg(1, ios::beg);
    char c;
    file.get(c);
    cout<<c<<endl;
    cout<<file.tellg()<<endl;
    // cout<<file.tellg()
    // if(!file) {
    //     cout<<"Error opening file"<<endl;
    //     return 0;
    // }

    // cout<<"Enter name"<<endl;
    // char name[30];
    // cin>>name;

    // file<<name<<endl;
    
    // cout<<"Enter cost"<<endl;
    // float cost;
    // cin>>cost;

    // file<<cost<<endl;

    // file.seekg(0); // go to beginning

    // file>>name;
    // file>>cost;

    // cout<<"Item name : "<<name<<endl;
    // cout<<"Item cost : "<<cost<<endl;

    file.close();
    return 0;
}