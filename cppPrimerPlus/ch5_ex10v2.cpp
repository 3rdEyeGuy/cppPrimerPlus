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
    int periods = rows-1;
    
    for(int r = rows; r > 0; --r)
    {
        for(int p = periods; p > 0 ; --p)
        {
            cout << '.';
        }

        periods--;
            
        for(int stars = 1; stars+periods != rows; stars++)
        {
            cout << '*';
        }

        cout << '\n';
    }
    return 0;
}
