//Structure holding pizza data efficiently. Use cin and cout to input and display info. 

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

struct pizza
{
    string name; 
    float diamIn;
    float weightOz;
};


int main()
{
    pizza pzData;
    string pzName;
    
    cout << "\nWelcome to William Wingate Pizza-Analyzer.\n";
    cout << "Enter the name of the pizza company: ";
    getline(cin, pzName);
    pzData.name = pzName;

    cout << "Enter the diameter of the pizza in inches: ";
    cin >> pzData.diamIn;

    cout << "Enter the weight of the pizza in ounces: ";
    cin >> pzData.weightOz;
    cout << '\n';  

    cout << "Name of pizza company: " << pzData.name << '\n'; 
    cout << "Diameter (inches) of the pizza: " << pzData.diamIn << '\n';
    cout << "Weight (ounces) of the pizza: " << pzData.weightOz << "\n\n";
    return 0;
}
