/*This program is created by 23CS037 Prince Lad*/

/*
WAP for amazon product
*/

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class product {
protected:
    int product_id;
    string product_name, product_manufacturer;
    float product_price;

public:
    product(int Productid, string Productname, string Productmanufacturer, float Productprice) {
        product_id = Productid;
        product_name = Productname;
        product_manufacturer = Productmanufacturer;
        product_price = Productprice;
    }

    virtual void output() = 0;

};

class smartwatch : public product {
protected:
    float dial_size;

public:
    smartwatch(int Productid, string Productname, string Productmanufacturer, float Productprice, float Dialsize) : product(Productid, Productname, Productmanufacturer, Productprice) {
        dial_size = Dialsize;
    }

    void output() {

    }

};

class bedsheet : public product {
protected:
    float width, height;

public:
    bedsheet(int Productid, string Productname, string Productmanufacturer, float Productprice, float Width, float Height) : product(Productid, Productname, Productmanufacturer, Productprice) {
        width = Width;
        height = Height;
    }

    void output() {

    }

};

int main() {


    return 0;
}