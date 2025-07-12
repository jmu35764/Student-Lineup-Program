// Student Lineup Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{   
    int counts = 0;
    string filename = "LineUp.txt";
    ifstream inFile(filename); // Open file for reading
    if (!inFile) 
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    string name;

    string first = "z"; // The value of first kept coming out as nothing, so it was set to a character with a large value
    string last = name;


    while (getline(inFile, name)) 
    { // Read line by line
        cout << name << endl;
        
        if (name > last)
        {
            last = name;
        }

        if (name < first)
        {
            first = name;
        }          

        counts++; // Counts each iteration of the loop
    }

    cout << " " << endl << "The are " << counts << " students in this line" << endl;
    cout << first << " should be at the front of the line" << endl;
    cout << last << " should be at the back of the line" << endl;





    inFile.close();
    return 0;

}


