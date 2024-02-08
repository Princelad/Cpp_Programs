/*This program is created by 23CS037 Prince Lad*/

/*
Create a C++ program for a basic calculator. The program should prompt the user to enter two
numbers and select an operation (addition, subtraction, multiplication, or division). Perform the
operation and display the result. Include error handling for division by zero.
*/

#include <iostream>

using namespace std;

int main()
{
    // Variable for options.
    int i;

    do
    {
        int num1, num2;

        cout << "----------------------------------------- Calculator -----------------------------------------" << endl;
        cout << "[1] Addition" << endl;
        cout << "[2] Subtraction" << endl;
        cout << "[3] Multiplication" << endl;
        cout << "[4] Division" << endl;
        cout << "[5] Exit" << endl;

        cout << "Enter the option : " << endl;
        cin >> i;

        // Calculting according to the selected option.
        if (i == 1)
        {
            cout << "Enter first number : " << endl;
            cin >> num1;

            cout << "Enter second number : " << endl;
            cin >> num2;

            cout << "\t" << num1 << "\n+\t" << num2 << "\n-----------------\n\t" << num1 + num2 << endl;
        }
        else if (i == 2)
        {
            cout << "Enter first number : " << endl;
            cin >> num1;

            cout << "Enter second number : " << endl;
            cin >> num2;

            cout << "\t" << num1 << "\n-\t" << num2 << "\n-----------------\n\t" << num1 - num2 << endl;
        }
        else if (i == 3)
        {
            cout << "Enter first number : " << endl;
            cin >> num1;

            cout << "Enter second number : " << endl;
            cin >> num2;

            cout << "\t" << num1 << "\n*\t" << num2 << "\n-----------------\n\t" << num1 * num2 << endl;
        }
        else if (i == 4)
        {
            cout << "Enter first number : " << endl;
            cin >> num1;

            cout << "Enter second number : " << endl;
            cin >> num2;
            
            if (num2 != 0)
            {
                cout << "\t" << num1 << "\n/\t" << num2 << "\n-----------------\n\t" << num1 / num2 << endl;
            }
            else
            {
                cout << "You have entered the second number to be zero thus division is impossible." << endl;
            }
        }
        else
        {
            cout << "Exiting the Program." << endl;
        }

    } while (i != 5);

    cout << "\n\n23CS037 Prince\n";
    return 0;
}