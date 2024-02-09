/*This program is created by 23CS037 Prince Lad*/

/*
Task – 1 : Feed car details in the system
Number of cars (3 digit number), Model name (string with space), Fuel type (values can be petrol, diesel,
cng, electric), Showroom price (floating point number), Mileage (floating point number), Transmission
(values can be Manual or AMT), Tank capacity (floating point number), seating (1 digit number),
Airbags (values can be Yes or No)
Task – 2: Retrieve car data based on different options
Option 1 : Model name Option 2 : Fuel type Option 3 : Price range
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class car{
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
    
    // Entering the data for the object
    
    void input (){
        cin.ignore();

        cout << "Enter the model name :" << endl;
        getline(cin,model);

        cout << "Select the fuel type :" << endl;
        do{
            
            cout << "[1] Petrol" << endl;    
            cout << "[2] Diesel" << endl;    
            cout << "[3] C.N.G." << endl;    
            cout << "[4] Eletrical" << endl;
            cout << "Your choice :";
            cin >> fuel;

            if(fuel <= 4 && fuel >=1){
                break;
            }
            else{
                cout << "Choose proper option :" << endl;
            }

        }while(true);

        cout << "Enter the price of the model :" << endl;
        cin >> price;

        cout << "Enter the mileage of the model :" << endl;
        cin >> mileage;

        cout << "Enter the method of transmission :" << endl;
        do{
            
            cout << "[1] Manual" << endl; 
            cout << "[2] A.M.T." << endl;
            cout << "Your choice :";
            cin >> transmission;

            if(transmission == 1 || transmission == 2){
                break;
            }
            else{
                cout << "Choose proper option :" << endl;
            }

        }while(true);

        cout << "Enter the tank capacity :" << endl; 
        cin >> tank_capacity;

        cout << "Enter the number of seats :" << endl;
        cin >> seating;

        cout << "Airbags in model :" << endl;
        do{
            
            cout << "[1] Available" << endl;
            cout << "[2] Not available" << endl;
            cout << "Your choice :";
            cin >> airbags;

            if (airbags == 1 || airbags == 2){
                break;
            }
            else{
                cout << "Choose proper option :" << endl;
            }

        }while(true);
    }
    
    // Displaying output.
    
    void output (){
        cout << "=============================================================================" << endl;
        cout << left << setw(30) << "Model name" << ": " << model << endl;
        if(fuel == 1){
            cout << left << setw(30) << "Fuel type" << ": Petrol"<< endl;
        }
        else if(fuel == 2){
            cout << left << setw(30) << "Fuel type" << ": Diesel"<< endl;
        }
        else if(fuel == 3){
            cout << left << setw(30) << "Fuel type" << ": C.N.G."<< endl;
        }
        else{
            cout << left << setw(30) << "Fuel type" << ": Electrical"<< endl;
        }
        cout << left << setw(30) << "Showroom price" << ": " << price << " lakhs" << endl;
        cout << left << setw(30) << "Mileage" << ": " << mileage << " km/L" << endl;
        if(transmission == 1){
            cout << left << setw(30) << "Transmission" << ": Manual"<< endl;
        }
        else{
            cout << left << setw(30) << "Transmission" << ": A.M.T."<< endl;
        }
        cout << left << setw(30) << "Tank capacity" << ": " << tank_capacity << " liters" << endl;
        cout << left << setw(30) << "Number of seats" << ": " << seating << endl;
        if(airbags == 1){
            cout << left << setw(30) << "Airbags" << ": Yes"<< endl;
        }
        else{
            cout << left << setw(30) << "Airbags" << ": No"<< endl;
        }
        cout << "=============================================================================" << endl;
    }
};

int main (){
    int no_car, i = 0, j = 0;
    
    cout << "Enter the number of cars :" << endl;// Asking for maximum entry of car.
    cin >> no_car;

    car c[no_car];

    while (i < no_car){
        
        c[i].input();// Calling the input functioon for object data.
        if(no_car > 1){
            cout << "=============================================================================" << endl;
        }
        i++;

    }

    int option;

    cout << "\n\n=============================================================================" << endl;
    cout << "WELCOME TO A 2 Z MOTORS\n" << endl;
    cout << "GET THE CAR DETAILS AS PER YOUR PREFRENCE\n" << endl;
    
    do{
        do{

            cout << "[1] Model\n[2] Fuel type\n[3] Price Range\n[4] Exit" << endl;
            cout << "Your choice :";
            cin >> option;
            if (option <= 4 && option >= 1){
                break;
            }
            else{
                cout << "Choose proper number from the give prefrence :" << endl;
            }

        }while(true); 

        if (option == 4){
            break;
        }

        switch(option){
            case 1:

                cout << "LIST OF AVAILABLE CARS :" << endl;

                j = 0;
                while(j < no_car){
                    cout << "[" << j+1 << "] " << c[j].model << endl;
                    j++;
                }

                cout << "Enter the choosed model :" << endl;
                cin >> i;

                i--;// To match the index no. of object.

                c[i].output();

                break;
            case 2:

                cout << "Choose the preferred fuel type :" << endl;

                do{

                    cout << "[1] Petrol" << endl;    
                    cout << "[2] Diesel" << endl;    
                    cout << "[3] C.N.G." << endl;    
                    cout << "[4] Eletrical" << endl;
                    cout << "Your choice :";
                    cin >> i;
                    if(i <= 4 && i >= 1){
                        break;
                    }
                    else{
                        cout << "Choose proper number from the give prefrence :" << endl;  
                    }

                }while(true);

                j = 0;
                while(j < no_car){
                    
                    if(i == c[j].fuel){
                        c[j].output();// Printing the models with same fuel type.
                    }

                    j++;

                    if(j == no_car){
                        cout << "Entered fuel type model is not available." << endl;
                    }
                    
                }

                break;
            case 3:

                cout << "Enter the maximum amount(in lakhs) :" << endl;
                cin >> i;

                j = 0;
                while (j < no_car){

                    if(i >= c[j].price){
                        c[j].output();// Printing the models according to the maximum set price limit.
                        break;
                    }
                    
                    j++;

                    if(j == no_car){
                        cout << "Preferred model is not available." << endl;
                    }

                }

                break;
        }

        cout << "Do you want information on another car model?\n[1] Yes\n[2] No" << endl;// Asking for continuation.
        cout << "Your choice :";
        cin >> i;

        if (i == 2){
            break;
        }
        else{
            cout << "Choose your prefrence :" << endl;
        }

    }while(true);

    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}