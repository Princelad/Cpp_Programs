/*This program is created by 23CS037 Prince Lad*/

/*
WAP to print the employee details.
INPUTS:Number of employee (number between 0 to 1000), Employee ID (4 digit number), Employee name
(string with space), Qualification (floating point number), Experience (factional point number), Contact
number (10 digit number).
*/

#include <iostream>
#include <string.h>
#include <iomanip>
#define MAX_EMPLOYEE 1000

using namespace std;

struct employee
{
    int emp_num;
    int emp_contact;
    float emp_exp;
    string emp_name;
    string emp_qual;
};

typedef struct employee info;

int main()
{
    int i = 0;
    info emp[MAX_EMPLOYEE];
    string flag;

add:

    while (true)
    {
        cout << "Enter the employee ID : " << endl;
        cin >> emp[i].emp_num;

        cin.ignore();

        cout << "Enter the employee name : " << endl;
        getline(cin, emp[i].emp_name);

        cout << "Enter the employee qualification : " << endl;
        getline(cin, emp[i].emp_qual);

        cout << "Enter the employee exprience : " << endl;
        cin >> emp[i].emp_exp;

        cout << "Enter the employee contact no. : " << endl;
        cin >> emp[i].emp_contact;

        cout << "Do you want add another employee if yes the press 'Y' else 'N' for no :" << endl;
        cin >> flag;

        if (flag == "N" || flag == "n")
        {
            break;
        }

        i++;

        if(i == MAX_EMPLOYEE)
        {
            cout << "Exiting." << endl;
            break;
        }
    }

    cout << "--------------------------------------------------------------" << endl;

    while (true)
    {
        i = 0;
        int num, flag2;
        string flag1;
        cout << "Enter the ID of the employee : " << endl;
        cin >> num;

        while (emp[i].emp_num != num)
        {
            i++;
            if (i == (MAX_EMPLOYEE))
            {
                flag2 = 1;
                break;
            }
        }

        if (flag2 == 1)
        {
            cout << "--------------------------------------------------------------" << endl;

            cout << "The entered employee ID doesn't exist in the data" << endl;

            cout << "--------------------------------------------------------------" << endl;

            cout << "Do you want to add the Employee ID?,If yes then enter '1' otherwise '0' : " << endl;
            cin >> flag2;

            if (flag2 == 1)
            {
                goto add;
            }
            else
            {
                cout << "Exiting." << endl;
                break;
            }
        }
        else
        {
            cout << "--------------------------------------------------------------" << endl;

            cout << left << setw(30) << "Employee name" << ": " << emp[i].emp_name << endl;
            cout << left << setw(30) << "Qualification" << ": " << emp[i].emp_qual << endl;
            cout << left << setw(30) << "Experience" << ": " << emp[i].emp_exp << " years" << endl;
            cout << left << setw(30) << "Contact number" << ": " << emp[i].emp_contact << endl;

            cout << "Do you want get information of another employee if yes the press 'Y' else 'N' for no :" << endl;
            cin >> flag1;

            if (flag1 == "N" || flag1 == "n")
            {
                cout << "Exiting." << endl;
                break;
            }
        }
    }

    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}