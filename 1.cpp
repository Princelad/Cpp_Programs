#include <iostream>
#include <iomanip>

using namespace std;
string grade(int);
int point(int);

int main()
{
    string ID, Name;
    int Sem, CP_T, BE_T, PC_T, CP_P, BE_P, PC_P, SGPA;

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

    cout << "\n\n\n\n====================================Result====================================\n";

    cout << "StudentID\t"
         << ":" << ID << endl;
    cout << "Name\t\t"
         << ":" << Name << endl;
    cout << "Semester\t"
         << ":" << Sem << endl;
    cout << setw(47) << "Theory\tPractical" << endl;
    cout << "Computer Programming\t\t" << grade(CP_T) << "\t" << grade(CP_P) << endl;
    cout << "Basics of Electronics\t\t" << grade(BE_T) << "\t" << grade(BE_P) << endl;
    cout << "Professional Communication\t" << grade(PC_T) << "\t" << grade(PC_P) << endl;

    SGPA = ((2 * point(CP_T)) + (2 * point(BE_T)) + (1 * point(PC_T))) / 5;

    cout << "\nSGPA:" << SGPA << endl; 

    return 0;
}

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