//Reads input a word at a time until a 'q' is entered. Then reports number
//of words that begin with vowels, consonants and neither. Use isalpha()
//to discriminate between words beginning with letters and those that don't.
//Use if or switch statement to further identify those passing isalpha()
//test that begin with vowels and consonants.

#include <iostream>
#include <string> 

using std::cin;
using std::cout;
using std::string;

int main()
{
    char input;
    int size = 0;
    int count = 0;
    //set pointer for the char array (to exact input size) to hold input. 
    //use dynamic binding.


    cout << "Enter your last words muthafuckaaa ('q' to end): \n";
    cin.get(input);
    int * letters = new int [size];
    while (input != 'q')
    {
        for(int i = 0; i < size; i++)
        {
            letters[i] = input; //places entire input in letters[] 
            cin.get(input);
            //now we need to locate the first letter of each word. 
            count++;//problem that for loop is not working. Probably because
            //[size] is not being properly defined and so it remains at 0.
        }

        cout << count;
        break;
        
        //cout << letters;

        /*for(int k = 0; k < size; k++)
        {
            cout << input[k];
        }
        //while(input != ' ')
        */
    }
    delete [] letters; 
    return 0;
}
