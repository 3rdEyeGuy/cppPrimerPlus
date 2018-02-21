//Prompt user for number of rows of stars and print that as an output consisting of increasing stars per row and
//decreasing periods per row. The number of stars and periods in each row should equal the user input. 
//Using nested loops.

#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int rows;

    cout << "Enter number of rows of stars: ";
    cin >> rows;
    
    for(int r = 1; r <= rows; r++)
    {
        for(int p = 1; p <= rows-r; p++)
        {
            cout << '.';
        }

        for(int stars = rows-r; stars < rows ; stars++)
        {
            cout << '*';
        }

        cout << '\n';
    }
    return 0;
}
