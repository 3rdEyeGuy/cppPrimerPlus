//Determines miles per gallon of your car.

#include <iostream>

using std::cin;
using std::cout;
//using std::

int main()
{
    float miles;
    float gals;
    float mpg;

    cout << "Enter the miles driven: ";
    cin >> miles;
    cout << "Enter gallons of gasoline used: ";
    cin >> gals;

    mpg = miles / gals;
    cout << "Your vehicle will travel " << mpg << " mpg.\n";

}
