#include<iostream>
#include<string.h>
using namespace std;

class Person {
    private:
        int age=22;
        char name[20] = "Mayank";
    protected:
        void SetAge(int a) { age = a; }
        void SetName(char n[]) { strcpy(name, n); }
    public:
        int getAge() { return age; }
        char* getName() { return name; }
};

class Employee:public Person {
    // user2
    private:
        float salary;
    public:
        void setEmployee(int a, char n[], float s) {
            SetAge(a);
            SetName(n);
            salary=s;
        }
};

int main() {
    // Person p1; // user1, can only access getAge and getName
    // cout<<p1.getAge()<<endl;
    // cout<<p1.getName();

    Employee e1; // user 1
    e1.setEmployee(23, "manu", 50000.0);
    cout<<e1.getAge()<<endl<<e1.getName();
    return 0;
}