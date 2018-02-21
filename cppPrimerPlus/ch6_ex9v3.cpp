//Tracks monetary contributions from list of people. Data should be read
//from a file and stored in a dynamically allocated array of structures.
//Each structure should have a string object for the name and a double
//member to hold the amounts donated. Then display all donations and
//names of those who contributed more than or equal to $10,000, under the
//heading "Grand Patrons". Then display a list of the remaining donors
//under the heading "Patrons". If no donors in one of the categories then
//program should display word "none". No sorting needs to be done.

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::ifstream;

struct donations
{
    string name;
    double amount;
};

int main()
{
    int size;
    ifstream inFile;//prototypes must be within main.
    string fileName;
    int gPcount = 0; 
    int pCount = 0;

    cout << "Enter filename of donor's list: ";
    cin >> fileName;

    inFile.open(fileName);
    
    while(!inFile.is_open())
    {
        cout << "The file failed to open. Enter new filename: ";
        cin >> fileName;
        inFile.open(fileName);
    }

    inFile >> size;
    inFile.get();
    donations * donorList = new donations [size];//dynamic allocation

    cout << "\n-Grand Patrons-\n";
    for(int i = 0; i <= (size-1); i++)
    {
        getline(inFile, donorList[i].name);
        inFile >> donorList[i].amount;
        inFile.get();
        if(donorList[i].amount >= 10000)
        {
            cout << donorList[i].name << ", $" << donorList[i].amount << '\n';
            gPcount = 1;
        }   
    }
    if(!gPcount)
            cout << "none";

    cout << "\n-Patrons-\n";
    for(int k = 0; k <= (size-1); k++)
    {
        if(donorList[k].amount < 10000)
        {
            cout << donorList[k].name << '\n';
            pCount = 1;
        }   
    }
    if(!pCount)
            cout << "none";

    delete[] donorList;
    inFile.close();
    return 0;
}
