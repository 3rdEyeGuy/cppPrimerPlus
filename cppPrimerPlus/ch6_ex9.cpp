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
    string names;
    double donation;
};



int main()
{
    int size;
    ifstream inFile;//prototypes must be within main.
    string fileName;

    
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
    cout << size;
    //Dynamically allocate the size for # of structures. 1st line is 
    //#donors
    donations * donorList = new int [size];//creates array of #donors. 

    //inFile.get(ch);//To relieve input buffer of number of donors digit.
    
    /*donations donorList[ch]
    {
        
    }
    */
    /*while(!inFile.fail())
    {
        //if(isalpha(ch) || isspace(ch))
        //{
            for(int i = 0; i <= size-1; i++)
            {
                donations donorList[i]
                {
                    inFile.getline(names);
                    inFile >> donation;
                };
            }
          */ 
            /*for(int k = 0; k <= size-1; k++)
            {
                if(donorList[k].donation >= 10000)
                {
                    donations grandPatron[i]
                    {
                        names = donorList[k].names;
                        donations = donorList[k].donation;
                    }
                }
            }
            */
           //Access structure that holds donation and sort it. 

            /*donorList[1] = ch;
        else if(isdigit(ch))
            donorList[2] = ch;
            */
    }

    cout << "Grand Patrons\n";
    for(int i = 0; i < size-1; i++)
    {
        cout << donorList[i];
    }

    delete donorList [];
    inFile.close();
    return 0;
}

