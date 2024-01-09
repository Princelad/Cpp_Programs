/*This program is created by 23CS037 Prince Lad*/

/*
WAP to print the result of the students,
INPUTS:Student ID (alphanumeric of length 6 to 7), Student name (string without space), Semester (number
between 1 to 8), 3 Subject names (string with space), Theory and practical marks of all subject
(number between 0 to 100)
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Initaizing functions.
string grade(int);
int point(int);

int main()
{
    // Creating requried variables.
    string ID, Name;
    int Sem, CP_T, BE_T, PC_T, CP_P, BE_P, PC_P, SGPA;

    // Getting user's input.
    cout << "Enter StudentID:";
    cin >> ID;
    cout << "Enter your Name:";
    cin >> Name;
    cout << "Enter the Semester:";
    cin >> Sem;
    cout << "Enter marks of Computer Programming(Theory):";
    cin >> CP_T;
    cout << "Enter marks of Computer Programming(Practical):";
    cin >> CP_P;
    cout << "Enter marks of Basics of Electronics(Theory):";
    cin >> BE_T;
    cout << "Enter marks of Basics of Electronics(Practical):";
    cin >> BE_P;
    cout << "Enter marks of Professional Communication(Theory):";
    cin >> PC_T;
    cout << "Enter marks of Professional Communication(Practical):";
    cin >> PC_P;

    // Printing the result.
    cout << "\n\n\n\n====================================Result====================================\n\n";

    cout << "StudentID\t"
         << ":" << ID << endl;
    cout << "Name\t\t"
         << ":" << Name << endl;
    cout << "Semester\t"
         << ":" << Sem << endl;
    cout << right << setw(50) << "Theory   Practical" << endl;
    cout << left << setw(35) << "Computer Programming" << grade(CP_T) << "\t    " << grade(CP_P) << endl;
    cout << left << setw(35) << "Basics of Electronics" << grade(BE_T) << "\t    " << grade(BE_P) << endl;
    cout << left << setw(35) << "Professional Communication" << grade(PC_T) << "\t    " << grade(PC_P) << endl;

    SGPA = ((2 * point(CP_T)) + (2 * point(BE_T)) + (1 * point(PC_T))) / 5;

    cout << "\nSGPA:" << SGPA << endl; 

    
    cout << "\n\n23CS037 Prince"<< endl; 
    return 0;
}

// Returns the grade in letters.
string grade(int a)
{
    string Grade;
    if (a >= 80)
    {
        Grade = "AA";
    }
    else if (a >= 73)
    {
        Grade = "AB";
    }
    else if (a >= 66)
    {
        Grade = "BB";
    }
    else if (a >= 60)
    {
        Grade = "BC";
    }
    else if (a >= 55)
    {
        Grade = "CC";
    }
    else if (a >= 50)
    {
        Grade = "CD";
    }
    else if (a >= 45)
    {
        Grade = "DD";
    }
    else
    {
        Grade = "FF";
    }

    return Grade;
}

// Returns the grade points.
int point(int a)
{

    if (a >= 80)
    {
        return 10;
    }
    else if (a >= 73)
    {
        return 9;
    }
    else if (a >= 66)
    {
        return 8;
    }
    else if (a >= 60)
    {
        return 7;
    }
    else if (a >= 55)
    {
        return 6;
    }
    else if (a >= 50)
    {
        return 5;
    }
    else if (a >= 45)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}