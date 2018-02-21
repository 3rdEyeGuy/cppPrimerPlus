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
    string name;
    string amount;
};



int main()
{
    int size;
    ifstream inFile;//prototypes must be within main.
    string fileName;
    string nameStr;
    string amountStr;
    double amountDub;
    
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
    inFile.get();
    //Dynamically allocate the size for # of structures. 1st line is 
    //#donors
    donations * donorList = new donations [size];
    
    /*
    while(!inFile.eof())
    {
         
        //inFile >> nameStr;
        //while(isalpha(inFile.get()) || isspace(inFile.get()))
        //nameStr= inFile.get();
        //getline(inFile, nameStr);
    */
       
        for(int i = 0; i <= 3 ; i++)
        {
            getline(inFile, nameStr);
            //inFile.get();//Clear '\n' character at end of line.
            getline(inFile, amountStr);
            //inFile.get();//Clear '\n' character at end of line.
            donorList[i].name = nameStr; 
            donorList[i].amount = amountStr;
            //Output of nameStr and amountDub is 0. Why??
            //cout << donorList[i].name << '\n';
            cout << donorList[i].amount << '\n';
        }
    //}
    //cout << donorList[0].name;
    //cout << donorList;
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
                    inFile >> amount;
                };
            }
          */ 
            /*for(int k = 0; k <= size-1; k++)
            {
                if(donorList[k].amount >= 10000)
                {
                    donations grandPatron[i]
                    {
                        names = donorList[k].names;
                        donations = donorList[k].amount;
                    }
                }
            }
            */
           //Access structure that holds amount and sort it. 

            /*donorList[1] = ch;
        else if(isdigit(ch))
            donorList[2] = ch;
            */
    
    /*
    cout << "Grand Patrons\n";
    for(int i = 0; i < size-1; i++)
    {
        cout << donorList[i];
    }
    
    delete donorList [];
    */
    inFile.close();
    return 0;
}

