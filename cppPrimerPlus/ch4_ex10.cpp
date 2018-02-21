//Requests user to enter 3 times for the 40-yd dash,
//displays them and their average. Data is held by an array object.
//must compile with "-std=c++11" to use array object.

#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::array;

int main()
{
    array<float, 3> time; 
    cout << "Enter three times for the 40-yd dash:\n";
    cin >> time[0];
    cin >> time[1];
    cin >> time[2];

    cout << "Your times were as follows: \n" << time[0] << '\n' 
    << time[1] << '\n'  << time[2]  << '\n';
    cout << "Your average time: " << (time[1]+time[2]+time[0])/3 << '\n';
    return 0;
}
