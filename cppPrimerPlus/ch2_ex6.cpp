// converts lightyears to astronomical units.

#include <iostream>

using std::cin;
using std::cout;

void lightToAstro();

int main()
{
    lightToAstro();
    return 0;
}

void lightToAstro()
{
    double dLightY;
    cout << "Enter the number of light years: ";
    cin >> dLightY;
    double dAstroUnit = 63240 * dLightY;
    cout << dLightY << " lightyears = " << dAstroUnit << " astronomical units.\n" ; 
    cout << "Test Ch3" << "$\n";
}
