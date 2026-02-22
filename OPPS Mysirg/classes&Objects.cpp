#include<iostream>
#include<string.h>
using namespace std;

// encaupsulate the related function to the srtuct Book in the structure body, and remove the declrations outside it in prev example of book
// you can directly acess member var of a structure via member functions only or any function inside the structure body
// encapsulation is just wraping making of group, to follow oo theory or guidelines

// state of an object should be changed through its methods only

// classes and objects -->  2 ways to encapsulate - struct and class
// by default all the members of struct is public, but in class it's private

class Book
{   
    // private: by default don't need to write
        int bookid;
        char title[20];
        float price;

    public:
        void displayBook() {
            cout<<bookid<<" "<<title<<" "<<price<<endl;
        }
        void inputBook() {
            cout<<"Enter bookid, title and price : ";
            cin>>bookid;
            cin.ignore();
            cin.getline(title, 20);
            cin>>price;
        }
};

int main() { 
    Book b1, b2, b3; // now these are the objects of class Book, previously these are called structure variables
    b3.inputBook();
    b3. displayBook();

    b1.displayBook();
    b2.displayBook();
}

