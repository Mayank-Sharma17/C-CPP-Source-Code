#include<iostream>
#include<fstream>
using namespace std;

void writing() {
    ofstream fout;
    fout.open("file1.txt", ios::out); // if file doesn't exist it will create
    char str[] = "Mayank Shamrma";
    fout<<str;
    fout.close();
}
void reading() {
    ifstream fin;
    char ch;
    fin.open("file1.txt", ios::in); // error if file doesn't exist
    if(!fin) {
        cout<<"File not found";
    } else {
        fin.seekg(13);
        ch = fin.get();
        while(!fin.eof()) {
            cout<<ch<<fin.tellg()<<endl;
            ch = fin.get();
        }
    }
    fin.close();
}
void append(char data[]) {
    ofstream fout;
    fout.open("file1.txt", ios::app);
    fout<<data;
    fout.close();
}

int main() {
    // How to write data in a file
    // writing();
    // reading();

    char str[] = "learning file handling in cpp";
    append(str);
    cout<<endl;
    reading();
    return 0;
}