// Creates and initializes an array of three structures then displays the contents of each structure.

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

struct CandyBar
{
    string brandName;
    float weight;
    int calories;
};

int main()
{
    CandyBar * ptCandy = new CandyBar [3];    
    ptCandy[0].brandName = "Choco Cholos";
    ptCandy[0].weight = 12.34;
    ptCandy[0].calories = 1200;

    ptCandy[1].brandName = "Choco Ardilla";
    ptCandy[1].weight = 6.05;
    ptCandy[1].calories = 666;

    ptCandy[2].brandName = "Master Extraterrestre";
    ptCandy[2].weight = 0.004;
    ptCandy[2].calories = 69;

    cout << "\nCandy Bar: " << ptCandy[0].brandName << '\n';
    cout << "Weight: " << ptCandy[0].weight << " oz\n";
    cout << "Calories: " << ptCandy[0].calories << '\n';

    cout << "\nCandy Bar: " << ptCandy[1].brandName << '\n';
    cout << "Weight: " << ptCandy[1].weight << " oz\n";
    cout << "Calories: " << ptCandy[1].calories << '\n';

    cout << "\nCandy Bar: " << ptCandy[2].brandName << '\n';
    cout << "Weight: " << ptCandy[2].weight << " oz\n";
    cout << "Calories: " << ptCandy[2].calories << '\n';

    delete [] ptCandy;
}   

