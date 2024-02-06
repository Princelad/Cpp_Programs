/*This program is created by 23CS037 Prince Lad*/

/*
WAP to print the employee details taking informaton the console.
INPUTS:Number of employee (number between 0 to 1000), Employee ID (3 digit number), Employee name
(string with space), Qualification (floating point number), Experience (factional point number), Contact
number (10 digit number).
*/

#include <iostream>
#include <string>
#include <iomanip>
#define MAX_EMPLOYEE 1000

using namespace std;

struct employee
{
private:
    int emp_contact;
    float emp_exp;
    string emp_name;
    string emp_qual;

public:
    int emp_num;
    void input ()
    {
        // asking the new ID
        cout << "Enter the employee ID : " << endl;
        cin >> emp_num;

        cin.ignore();
        
        // Asking for other information.
        cout << "Enter the employee name : " << endl;
        getline(cin, emp_name);
        cout << "Enter the employee qualification : " << endl;
        getline(cin, emp_qual);
        cout << "Enter the employee exprience : " << endl;
        cin >> emp_exp;
        cout << "Enter the employee contact no. : " << endl;
        cin >> emp_contact;
        
    }

    void output ()
    {
        // Printing the data.
        cout << left << setw(30) << "Employee name" << ": " << emp_name << endl;
        cout << left << setw(30) << "Qualification" << ": " << emp_qual << endl;
        cout << left << setw(30) << "Experience" << ": " << emp_exp << " years" << endl;
        cout << left << setw(30) << "Contact number" << ": " << emp_contact << endl;
    }
};

typedef struct employee Info;

int main ()
{
    Info emp[MAX_EMPLOYEE];
    int i = 0;
    char flag;

    while (true)
    {
        emp[i].input ();

        for (int j = 0; j < i; j++)
        {
            if (emp[j].emp_num == emp[i].emp_num)
            {
                cout << "--------------------------------------------------------------" << endl;
                
                cout << "Entered employee ID already exist.Please enter a new employee ID" << endl;

                cout << "--------------------------------------------------------------" << endl;

                emp[i].input ();
            }
        }

        // Asking weather the user wants to enter new number or not.
        cout << "Do you want add another employee if yes the press 'Y' else 'N' for no :" << endl;
        cin >> flag;

        if (flag == 'N' || flag == 'n')
        {
            i++;
            break;
        }

        i++;

        // Checking for max capacity.
        if (i == MAX_EMPLOYEE)
        {
            cout << "Exiting." << endl;
            break;
        }
    }

    cout << "--------------------------------------------------------------" << endl;

    while (true)
    {
        int num, flag2 ,j = 0;
        char flag1;

        cout << "Enter the ID of the employee : " << endl;  // Asking for the ID
        cin >> num;

        // Finding the index of the data.
        while (emp[j].emp_num != num)
        {
            j++;
            if (j == (MAX_EMPLOYEE))
            {
                flag2 = 1;
                break;
            }
        }

        // If does not exist then asking if want to add new ID or exit.
        if (flag2 == 1)
        {
            cout << "--------------------------------------------------------------" << endl;

            cout << "The entered employee ID doesn't exist in the data" << endl;

            cout << "--------------------------------------------------------------" << endl;

            cout << "Do you want to add the Employee ID?,If yes then enter '1' otherwise '0' : " << endl;
            cin >> flag2;

            if (flag2 == 1)
            {
                emp[i].input ();
            }
            else
            {
                cout << "Exiting." << endl;
                break;
            }
        }
        else
        {
            emp[j].output ();

            // Asking if wants to access info other employee or not.
            cout << "Do you want get information of another employee if yes the press 'Y' else 'N' for no :" << endl;
            cin >> flag1;

            if (flag1 == 'N' || flag1 == 'n')
            {
                cout << "Exiting." << endl;
                break;
            }
        }
    }

    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}