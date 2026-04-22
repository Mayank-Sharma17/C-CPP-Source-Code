#include <iostream>
using namespace std;

class time
{
private:
    int hours, minutes, seconds;

public:
    // Constructor initializing to 0
    time()
    {
        hours = minutes = seconds = 0;
    }

    // Constructor with fixed values
    time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to add two time objects
    void add(time t1, time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;

        seconds = seconds % 60;
        minutes = minutes % 60;
    }

    // Display function
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main()
{
    time t1(5, 45, 50);   // initialized object
    time t2(6, 20, 15);   // initialized object
    time t3;              // not initialized

    t3.add(t1, t2);       // add two time objects

    cout << "Resulting Time: ";
    t3.display();         // display result

    return 0;
}