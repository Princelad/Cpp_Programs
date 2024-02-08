/*This program is created by 23CS037 Prince Lad*/

/*
Develop a C++ based railway train listing system. Railway officer feed train details like train number
(5 digit number), Start station name (string without space), End station name (string without space),
Number of coaches (2 digit number). Display details of all trained on a train listing board.
*/

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

class listing
{
private:
    string start_station;
    string stop_station;
    int no_of_coaches;
public:
    int train_no;
    void input()
    {
        cout << "Enter the train number :" << endl;
        cin >> train_no;

        cout << "Enter the starting station :" << endl;
        cin >> start_station;

        cout << "Enter the stoping station :" << endl;
        cin >> stop_station;

        cout << "Enter the number of coaches :" << endl;
        cin >> no_of_coaches;
    }
    void output()
    {
        
    } 
};