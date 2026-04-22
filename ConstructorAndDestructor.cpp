#include<iostream>
#include<string>
using namespace std;
class mca {
    int oid;
    string msg;

    public:
        mca(int, string);
        ~mca();
};

mca::mca(int id, string ms) {
    oid = id;
    msg = ms;
    cout<<"oid "<<oid<<" Constructor "<<msg<<endl;
}
mca::~mca() {
    cout<<"oid "<<oid<<" Destructor "<<msg<<endl;
}

void create(void) {
    mca fifth(5, "local auto create");
    static mca sixth(6, "local static create");
    mca seventh(7, "local auto create");
}

mca first(1, "global create");

int main() {
    mca second(2, "local auto main");
    static mca third(3, "local static main");
    create();
    mca fourth(4, "local auto main");
    return 0;
}