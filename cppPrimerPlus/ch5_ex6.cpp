//Allows user to enter a year's worth of monthly sales in number of books.
//A loop should prompt you by month,
//using an array of string objects to initialize the months 
//to their respective names. Stores the input data in a two 
//dimensional array of int with 3 years of 12 months each. Then find sum of array contents and 
//report total sales for each year and for the combined years.

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int years = 3;
    int months = 12;
    int Months = 12;
    int totalSum = 0;
    int yearlySum[years];
    int bookSales[years][months]; 
    string monthsStr[Months] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug" , "Sep", "Oct", "Nov", "Dec"};

    for(years = 0 ; years < 3 ; years++)
    {
        cout << "Enter the book sales for each month of year " << years + 1 
        << ":\n";

        for(months = 0 ; months < Months; months++)
        {
            cout << monthsStr[months] << ": ";
            cin >> bookSales[years][months];
            totalSum = totalSum + bookSales[years][months];
        }
        yearlySum[years] = totalSum;    
        totalSum = 0;
    }
   
    for(years = 0; years < 3; years++)
    {
        cout << "Total book sales for year " << years + 1 << ": " << yearlySum[years]
        << '\n'; 
        totalSum = totalSum + yearlySum[years];
    }

    cout << "The total book sales for all " << years << " years are: " << totalSum
    << '\n';

    return 0;
}
