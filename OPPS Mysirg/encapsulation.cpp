#include<iostream>
#include<string.h>
using namespace std;

// encaupsulate the related function to the srtuct Book in the structure body, and remove the declrations outside it in prev example of book
// you can directly acess member var of a structure via member functions only or any function inside the structure body
// encapsulation is just wraping making of group, to follow oo theory or guidelines

struct Book
{
    int bookid;
    char title[20];
    float price;

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
    Book b1 = {1, "Drilling C", 345.0}, b2, b3;
    b2.bookid = 2;
    strcpy(b2.title, "programming");
    b2.price = 275.0;
    b3.inputBook();
    b3. displayBook();

    b1.displayBook();
    b2.displayBook();
    // displayBook(b3);
}
