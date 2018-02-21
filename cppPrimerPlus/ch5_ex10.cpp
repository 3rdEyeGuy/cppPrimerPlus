//Prompt user for number of rows of stars and print that as an output consisting of increasing stars per row and
//decreasing periods per row. The number of stars and periods in each row should equal the user input. 
//Using nested loops.

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int rows;
    int stars;

    cout << "Enter number of rows of stars: ";
    cin >> rows;
    int stars = rows;

    for(int s = rows; s > 0; --s)
        {
            for(int p = rows; p > 0 ; --p)
            {
                cout << '.';
                //cout << ("."*rows-r) << "*"*r << '\n';
                countP++;
            }
            cout << '*' << '\n';
        }
    cout << stars;
    return 0;
}
