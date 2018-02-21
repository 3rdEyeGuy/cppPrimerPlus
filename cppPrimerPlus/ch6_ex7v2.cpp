//Reads input a word at a time until a 'q' is entered. Then reports number
//of words that begin with vowels, consonants and neither. Use isalpha()
//to discriminate between words beginning with letters and those that dont.
//Use if or switch statement to further identify those passing isalpha()
//test that begin with vowels and consonants.

#include <iostream>
#include <string> 
#include <cctype>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string word;
    int neither, vowel, consonant;
    neither = vowel = consonant = 0;

    cout << "Enter your last words muthafuckaaa (q to end): \n";
    cin >> word;
    
    while (word != "q")
    {
        if(isalpha(word[0]))
        { 
            char letter = tolower(word[0]); 
            if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter==                 'u')
                vowel++;
            else 
                consonant++;
        }
        else
            neither++;
        cin >> word;
    }
    cout << vowel << " words began with a vowel.\n";
    cout << consonant << " words began with a consonant.\n";
    cout << neither << " words began with neither.\n";
    return 0;
}
