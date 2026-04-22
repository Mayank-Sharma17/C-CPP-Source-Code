#include<bits/stdc++.h>
using namespace std;
class person {
    char name[20];
    float age;
    
    public:
        person(char *s, float a) {
            strcpy(name, s);
            age = a;
        }

        person greater(person &x) {
            if(x.age >= age) {
                return x;
            } else {
                return *this; // deferencing calling object, return the calling object
            }
        }
        void display() {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};
int main() {
    person p1("John", 37);
    person p2("Heb", 29);
    person p3("Ram", 40);

    person p = p1.greater(p3);
    p.display();

    p = p1.greater(p2);
    p.display();
    return 0;
}