/*This program is created by 23CS037 Prince Lad*/

/*
Req 1 -- Convert millimeter to centimeter
Inputs -- Take millimeter measurement in millimeter class

Req 2 -- Convert centimeter to millimeter
Inputs -- Take centimeter measurement in centimeter class
*/

#include <iostream>
#include <string>

using namespace std;

class millimeter{
private:
    int num_mm;
public:
    millimeter(){
        num_mm = 0;
    }
    
    millimeter(centimeter& a){
        num_mm = (a.output() * 10);
    }

    void input (){
        cin >> num_mm;
    }

    int output(){
        return num_mm;
    }
};

class centimeter{
private:
    int num_cm;
public:
    centimeter(){
        num_cm = 0;
    }

    centimeter(millimeter& b){
        num_cm = (b.output() / 10);
    }

    void input (){
        cin >> num_cm;
    }

    int output(){
        return num_cm;
    }
};

int main (){
    millimeter MM;
    centimeter CM;
    int type;

    cout << "Choose the option of the converstion :" << endl;
    cout << "[1] Millimeter to centimeter." << endl;
    cout << "[2] Centimeter to millimeter." << endl;
    cout << "Enter your choice :";
    cin >> type;

    switch (type){
        case 1:
            cout << "Enter the number to be converted :";
            MM.input();

            CM = MM;

            cout << "Measurement in cm : " << CM.output() << endl;

            break;
        case 2:
            cout << "Enter the number to be converted :";
            CM.input();

            MM = CM;

            cout << "Measuremet in mm : " << MM.output() << endl;
            
            break;
        default:
            cout << "Enter proper input." << endl;
            break;
    }
    
    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}