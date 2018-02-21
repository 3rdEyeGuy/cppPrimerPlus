//testing string type input via input buffer.

#include <iostream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::string;

string str1;
string str2;
string str3;
string str4;

int main()
{
    cout << "Enter for str1: ";
    cin >> str1;
    cin.get();

    cout << "Enter for str2: ";
    getline(cin, str2);

    cout << "str1: " << str1;
    cout << "\nstr2: " << str2 << '\n'; 
    /* a "\n" represents a string literal, meaning the double quotes adds the 
     * null character. So in reality there are two characters the \n and the \0. 
     * Best to use '\n' as this represents only one character.*/
    
    //Use the getline(cin, str3) format for "standard input" into a string type.
    //This avoids errors involving lines of strings.
    cout << "Enter for str3: ";
    getline(cin, str3);

    cout << "str3: " << str3 << '\n';
    //
    //

    cout << "Enter for str4: ";
    cin >> str4;
    cin.get();
    
    cout << "str4: " << str4 << '\n';
}
