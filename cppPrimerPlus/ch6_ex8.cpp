//Opens text file and reads it character-by-character until the EOF.
//Reports total number of characters.

#include <iostream>
#include <fstream>
#include <cstdlib>

using std::ifstream;
using std::string;
using std::cin;
using std::cout;

int main()
{
    string fileName;
    ifstream inFile;//ifstream allows us to create a file input object.
    char ch;
    int count = 0;

    cout << "Enter file name: ";
    cin >> fileName;
   
    inFile.open(fileName);
    while(!inFile.is_open())
    {
        cout << "File failed to open. Reenter filename: ";
        inFile.get(ch);
        inFile.open(fileName);
    }
    while(inFile.get(ch))
        count++;
    inFile.close();
    cout << count-1 << " total characters in file.\n";//count-1 for EOF.
    return 0;
}
