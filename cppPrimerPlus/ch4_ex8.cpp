//Structure holding pizza data efficiently. Use cin and cout to input and display info. Used 'new' to create a structure pointer.

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
    string pzName;
    
    pizza * pzPt = new pizza;

    cout << "\nEnter the diameter of the pizza in inches: ";
    cin >> pzPt->diamIn;
    cin.get();

    cout << "Enter the name of the pizza company: ";
    getline(cin, pzName);
    pzPt->name = pzName;

    cout << "Enter the weight of the pizza in ounces: ";
    cin >> pzPt->weightOz;
    cout << '\n';  
    cout << "Name of pizza company: " << pzPt->name << '\n'; 
    cout << "Diameter (inches) of the pizza: " << pzPt->diamIn << '\n';
    cout << "Weight (ounces) of the pizza: " << pzPt->weightOz << "\n\n";
    return 0;
}
