// Student Lineup Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{   
    int counts = 0;
    string filename = "D:\\Computer Classes\\CSC 221\\Module 5\\LineUp.txt";
    ifstream inFile(filename); // Open file for reading
    if (!inFile) 
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    string name;

    string first = "z";
    string last = name;


    while (getline(inFile, name)) 
    { // Read line by line
        cout << name << endl;

        //first = name;
        //last = name;


        
        if (name > last)
        {

            last = name;
           // cout << "Test" << endl;


        }

        if (name < first)
        {
            first = name;
            //cout << "Test" << endl;
        }
        
        



        counts++;
    }

    cout << counts << endl;
    cout << first << endl;
    cout << last << endl;





    inFile.close();
    return 0;

}


