// Calculates liters per kilometer and then converts to miles per gallon.

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    float liters;
    float kilometers;
    float miles;
    float gallons;

    cout << "Enter liters consumed by vehicle: ";
    cin >> liters;
    cout << "Enter kilometers driven: ";
    cin >> kilometers;
    cout << "Your car requires " << liters/(kilometers/100) << " liters per 100 kilometers.\n";

    miles = 62.14*(kilometers/100);
    gallons = (1/3.875)*liters;
    cout << "In the U.S., your car travels " << miles/gallons << " miles per gallon.\n"; 

}
