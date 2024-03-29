/*This program is created by 23CS037 Prince Lad*/

/*
Set circle radius to 1 when the new circle object is created.
Set circle radius to parameter value if the new circle object is created with parameter.
Copy the radius of one circle object to another if circle object is created with another object as parameter.
System calculates and display the area of a circle.
System should count total number of circle object created and display total number of active circle object
when any circle object is deleted.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class area{
private:
    int radius;
    static int count;
public:
    area(){
        radius = 1;
        cout << "The circle with radius " << radius << " has area " << 3.14 * radius * radius << "." << endl;
        count ++;
    }

    area(float r){
        radius = r;
        cout << "The circle with radius " << radius << " has area " << 3.14 * radius * radius << "." << endl;
        count ++;
    }

    area(area &r){
        radius = r.radius;
        cout << "The circle with radius " << radius << " has area " << 3.14 * radius * radius << "." << endl;
        count ++;
    }

    ~area(){
        cout << "==================================================================================" << endl;
        cout << "Object has been deleted." << endl;
        cout << "Total archive objects are " << (count --) - 1 << endl;
        cout << "==================================================================================" << endl;
    }
};

int area :: count;

int main(){
    area *a1, *a2, *a3;

    a1 = new area;// Creating the object without parameter.
    a2 = new area(20);// Creating the object with parameter.
    delete a1;// Deleting first object
    a3 = new area(*a2);// Creating the object with object.
    delete a2;// Deleting other two objects.
    delete a3;
    
    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}