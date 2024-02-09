/*This program is created by 23CS037 Prince Lad*/

/*
A system calculates the area of circle, rectangle and cuboid. Every time it called the same function for
calculating the area. Depending on the number of parameters passed, it chooses where to find area or
circle / rectangle / cuboid.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float area(float a){
    const float PI = 3.14;
    return PI * a * a;
}

float area(float a, float b){
    return a * b;
}

float area(float a, float b, float c){
    return 2*(a * b + b * c + c * a);
}

int main(){
    float a, b, c;
    int option;

    do{
        cout << "==========================================================================================" << endl;
        cout << "Enter the shape for which area has to be calculated :" << endl;
        cout << "[1] Circle" << endl;
        cout << "[2] Rectangle" << endl;
        cout << "[3] Cubiod" << endl;
        cout << "[4] Exit" << endl;
        cin >> option;

        if(option == 1){
            cout << "Enter the radius of the circle :" << endl;
            cin >> a;

            cout << "Area :" << area(a);
        }

        if(option == 2){
            cout << "Enter the length of the rectangle :" << endl;
            cin >> a;

            cout << "Enter the breath of the rectangle :" << endl;
            cin >> b;

            cout << "Area :" << area(a, b);
        }

        if(option == 3){
            cout << "Enter the length of the cubiod :" << endl;
            cin >> a;

            cout << "Enter the breath of the cubiod :" << endl;
            cin >> b;

            cout << "Enter the height of the cubiod :" << endl;
            cin >> c;

            cout << "Area :" << area(a, b, c);            
        }
    
    }while(option != 4);

    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}