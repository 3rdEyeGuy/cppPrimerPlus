//Use a string object and a loop to read one word at a time until the word
//done is entered. Use a relational operator to make a comparison test.
//Report the number of words entered (without counting done).

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string finisher = "done";
    int count = 0;
    string word;
    cout << "Tell me a life-changing story (when finished enter \"done\"):\n";
    cin >> word;
    //cin.get(word); //will output an error.
    //getline(cin, word); will count the lines not words.
    //cin.get(char word); uses char not string objects.
    while(word != finisher)    
    {
        cout << word << " "; 
        //need to find out how to output the input with their appropriate spaces.
        count++;    
        cin >> word;
    }
   
    cout << '\b' << "\nYou entered a total of " << count << " words.\n"; 
    return 0; 
}

