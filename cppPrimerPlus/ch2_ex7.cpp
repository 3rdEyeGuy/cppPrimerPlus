// Asks for user input to tell time.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void timeDisp(int,int);

int main()
{
    int hours;
    int min;

    cout << "Enter the number of hours: "; 
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> min;
    timeDisp(hours,min);
    return 0;
}

void timeDisp(int hours,int min)
{
    cout << "Time: " << hours << ":" << min << endl;
}
