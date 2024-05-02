/*This program is created by 23CS037 Prince Lad*/

/*
Task – 1: Feed car details in the system
Number of cars (3 digit number), Model name (string with space), Fuel type (values can be petrol, diesel,
cng, electric), Showroom price (floating point number), Mileage (floating point number), Transmission
(values can be Manual or AMT), Tank capacity (floating point number), seating (1 digit number),
Airbags (values can be Yes or No)
Task - 2: add the data to a file.
Task – 3: Retrieve car data based on different options
Option 1 : Model name Option 2 : Fuel type Option 3 : Price range
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class Car {
private:
    float mileage;
    int transmission;
    float tank_capacity;
    int seating;
    int airbags;

public:
    string model;
    int fuel;
    float price;

    void input(stringstream& ss) {
        getline(ss, model, ',');
        ss >> fuel;
        ss.ignore();
        ss >> price;
        ss.ignore();
        ss >> mileage;
        ss.ignore();
        ss >> transmission;
        ss.ignore();
        ss >> tank_capacity;
        ss.ignore();
        ss >> seating;
        ss.ignore();
        ss >> airbags;
        ss.ignore();
    }

    void output() {
        cout << "=============================================================================" << endl;
        cout << left << setw(30) << "Model name" << ": " << model << endl;
        if (fuel == 1) {
            cout << left << setw(30) << "Fuel type" << ": Petrol" << endl;
        }
        else if (fuel == 2) {
            cout << left << setw(30) << "Fuel type" << ": Diesel" << endl;
        }
        else if (fuel == 3) {
            cout << left << setw(30) << "Fuel type" << ": C.N.G." << endl;
        }
        else {
            cout << left << setw(30) << "Fuel type" << ": Electrical" << endl;
        }
        cout << left << setw(30) << "Showroom price" << ": " << price << " lakhs" << endl;
        cout << left << setw(30) << "Mileage" << ": " << mileage << " km/L" << endl;
        if (transmission == 1) {
            cout << left << setw(30) << "Transmission" << ": Manual" << endl;
        }
        else {
            cout << left << setw(30) << "Transmission" << ": A.M.T." << endl;
        }
        cout << left << setw(30) << "Tank capacity" << ": " << tank_capacity << " liters" << endl;
        cout << left << setw(30) << "Number of seats" << ": " << seating << endl;
        if (airbags == 1) {
            cout << left << setw(30) << "Airbags" << ": Yes" << endl;
        }
        else {
            cout << left << setw(30) << "Airbags" << ": No" << endl;
        }
        cout << "=============================================================================" << endl;
    }
};

void loadDataFromFile(vector<Car>& cars) {
    ifstream file("cardata.txt");
    if (!file) {
        cerr << "Unable to open file cardata.txt";
        exit(1);
    }

    string line;
    while (getline(file, line, ';')) {
        stringstream ss(line);
        Car c;
        c.input(ss);
        cars.push_back(c);
    }

    file.close();
}

int main() {
    vector<Car> cars;
    loadDataFromFile(cars);

    int option;
    do {
        cout << "\n\n=============================================================================" << endl;
        cout << "WELCOME TO A 2 Z MOTORS\n" << endl;
        cout << "GET THE CAR DETAILS AS PER YOUR PREFERENCE\n" << endl;

        do {
            cout << "[1] Model\n[2] Fuel type\n[3] Price Range\n[4] Exit" << endl;
            cout << "Your choice :";
            cin >> option;
            if (option <= 4 && option >= 1) {
                break;
            }
            else {
                cout << "Choose a proper number from the given preferences :" << endl;
            }
        } while (true);

        if (option == 4) {
            break;
        }

        switch (option) {
        case 1:
            cout << "LIST OF AVAILABLE CARS :" << endl;
            for (size_t i = 0; i < cars.size(); i++) {
                cout << "[" << i + 1 << "] " << cars[i].model << endl;
            }
            cout << "Enter the chosen model :" << endl;
            size_t modelChoice;
            cin >> modelChoice;
            if (modelChoice >= 1 && modelChoice <= cars.size()) {
                cars[modelChoice - 1].output();
            }
            else {
                cout << "Invalid model choice." << endl;
            }
            break;
        case 2:
            cout << "Choose the preferred fuel type :" << endl;
            cout << "[1] Petrol\n[2] Diesel\n[3] C.N.G.\n[4] Electrical" << endl;
            int fuelChoice;
            cin >> fuelChoice;
            for (size_t i = 0; i < cars.size(); ++i) {
                if (cars[i].fuel == fuelChoice) {
                    cars[i].output();
                }
            }
            break;
        case 3:
            cout << "Enter the maximum amount (in lakhs) :" << endl;
            float maxPrice;
            cin >> maxPrice;
            for (size_t i = 0; i < cars.size(); ++i) {
                if (cars[i].price <= maxPrice) {
                    cars[i].output();
                }
            }
            break;
        }
        cout << "Do you want information on another car model?\n[1] Yes\n[2] No" << endl;
        cout << "Your choice :";
        cin >> option;
        if (option == 2) {
            break;
        }
        else {
            cout << "Choose your preference :" << endl;
        }
    } while (true);

    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}
