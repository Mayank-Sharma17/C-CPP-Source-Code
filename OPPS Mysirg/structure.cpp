#include<iostream>
#include<string.h>
using namespace std;

struct Book
{
    int bookid;
    char title[20];
    float price;
};

struct Book inputBook();
void displayBook(struct Book);
int main() {
    struct Book b1 = {1, "Drilling C", 345.0}, b2, b3;
    b2.bookid = 2;
    strcpy(b2.title, "programming");
    b2.price = 275.0;
    b3 = inputBook();

    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
}

void displayBook(struct Book b) {
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
}

struct Book inputBook() {
    struct Book b;
    cout<<"Enter bookid, title and price : ";
    cin>>b.bookid;
    // fflush(stdin); // in c lang
    // fgets(b.title, 20, stdin);
    cin.ignore();
    cin.getline(b.title, 20);
    cin>>b.price;
    return b;
}
