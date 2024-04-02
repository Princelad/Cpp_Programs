/*This program is created by 23CS037 Prince Lad*/

/*
Req 1 -- Convert float to employee experience
Inputs -- Convert float to employee experience
*/

#include <iostream>

using namespace std;

class experience{
    int year, month;
public:
    experience(){
        year = month = 0;
    }

    experience(float &a){
        year = (int)a;
        month = (a - (int)a) * 12;
    }

    void output(){
        cout << "Employee experiance is " << year << " years and " << month << " months." << endl;
    }
};

int main(){
    experience exp;
    float time;

    cout << "Enter employee experience : ";
    cin >> time;

    exp = time;

    exp.output();
    
    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}