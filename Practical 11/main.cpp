/*This program is created by 23CS037 Prince Lad*/

/*
Req 1 -- Convert employee experience to float value
Inputs -- Take employee experience (no of year and no of months)
*/

#include <iostream>

using namespace std;

class experiance{
    int year, month;
public:
    void input(){
        cout << "Enter the employee experience in years and months :" << endl;
        cout << "Years : ";
        cin >> year;
        cout << "Months : ";
        cin >> month;
    }

    operator float(){
        float temp;
        temp = (year + (month/12.0));
        return temp;
    }
    
};

int main(){
    experiance exp;
    float time;

    exp.input();

    time = exp;

    cout << "Employee experience is : " << time << endl;

    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}