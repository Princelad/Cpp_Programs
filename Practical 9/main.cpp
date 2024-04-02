/*This program is created by 23CS037 Prince Lad*/

/*
Req 1 -- Convert millimeter to centimeter
Inputs -- Take millimeter measurement in millimeter class

Req 2 -- Convert centimeter to millimeter
Inputs -- Take centimeter measurement in centimeter class
*/

#include<iostream>
#include<cstdlib>
using namespace std;

class cm;
class mm{
    double data;
public:
    mm(){
        data=0;
    }

    mm(double x){
        data=x;
    }

    mm(cm &x); 
    double get(){
        return data;
    }

    double to_cm(){
        return data/10;
    }

    void set(double x){
        data=x;
    }
};

class cm{
    double data;
public:
    cm(){
        data=0;
    }

    cm(double x){
        data=x;
    }

    cm(mm &x){
        data=x.to_cm();
    }

    double get(){
        return data;
    }

    double to_mm(){
        return data*10;
    }

    void set(double x){
        data=x;
    }
};

mm::mm(cm &x){
    data=x.to_mm();
}

int main(){
    cout<<"Enter 1 : mm to cm converter"<<endl;
    cout<<"Enter 2 : cm to mm converter"<<endl;
    int ch;
    double data;
    cin>>ch;

    switch(ch){
        case 1:{
            cout<<"Enter measurement in mm: ";
            cin>>data;

            mm m1(data);

            cm c1(m1);

            cout<<"Measurement in cm : "<<c1.get();
            break;
        }
        case 2:{
            cout<<"Enter measurement in mm: ";
            cin>>data;

            cm c2(data);

            mm m2(c2);
            
            cout<<"Measurement in mm : "<<m2.get();
            break;
        }
        default:
            cout<<"Choose valid option!!!";
    }
    return 0;
}