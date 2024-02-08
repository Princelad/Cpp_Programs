/*This program is created by 23CS037 Prince Lad*/

/*
Develop a C++ based library management system. The system stores the information of book and
project reports. Book information are Book number (5 digit number), Book name (string with space),
Anther name (string with space), Edition (2 digit number), Year of publication (4 digit number).
Project information are like Project tile (string withs space), Student ID (alphanumeric of length 6
to 7), Department (string with space), Academic year (4 digit number). The librarian stores the
details of multiple books and reports. He can retrieve the specific book details by entering the book
number and specific report details by entering student ID.
*/

#include <iostream>
#include <string.h>
#include <iomanip>
#define MAX_STORAGE 500

using namespace std;

class library
{
private:
    string book_name;
    string book_author;
    int book_edition;
    int year_of_pub;
    string project_title;
    string department;
    int academic_year;

public:
    int book_num;
    string student_ID;
    void input()
    {
        int flag;

        cout << "Choose the input operation:" << endl
             << "[1] For Books." << endl
             << "[2] For Reports/Projects." << endl
             << "[3] Neither." << endl;
        cin >> flag;

        switch (flag)
        {
        case 1:
            cout << "Enter the book number :" << endl;
            cin >> book_num;

            cin.ignore();

            cout << "Enter the book name :" << endl;
            getline(cin, book_name);

            cout << "Enter the author name :" << endl;
            getline(cin, book_author);

            cout << "Enter the book edition :" << endl;
            cin >> book_edition;

            cout << "Enter the year of publication :" << endl;
            cin >> year_of_pub;

            break;
        case 2:
            cin.ignore();
            
            cout << "Enter the project title :" << endl;
            getline(cin, project_title);

            cout << "Enter the student ID :" << endl;
            getline(cin, student_ID);

            cout << "Enter the department name :" << endl;
            getline(cin, department);

            cout << "Enter the academic year :" << endl;
            cin >> academic_year;

            break;
        case 3:
            cout << "Exiting." << endl;

            break;
        default:
            cout << "Choose an appropriate option." << endl;

            input();
        }
    }

    void output()
    {
        int flag;

        cout << "Choose the output operation:" << endl
             << "[1] For Books." << endl
             << "[2] For Reports/Projects." << endl
             << "[3] Neither." << endl;
        cin >> flag;

        switch (flag)
        {
        case 1:
            cout << left << setw(30) << "Book number" << ": " << book_num << endl;
            cout << left << setw(30) << "Book name" << ": " << book_name << endl;
            cout << left << setw(30) << "Book author" << ": " << book_author << endl;
            cout << left << setw(30) << "Book edition" << ": " << book_edition << endl;
            cout << left << setw(30) << "Year of publication" << ": " << year_of_pub << endl;

            break;
        case 2:
            cout << left << setw(30) << "Project title" << ": " << project_title << endl;
            cout << left << setw(30) << "Student ID" << ": " << student_ID << endl;
            cout << left << setw(30) << "Department" << ": " << department << endl;
            cout << left << setw(30) << "Academic year" << ": " << academic_year << endl;

            break;
        case 3:
            cout << "Exiting." << endl;

            break;
        default:
            cout << "Choose an appropriate option." << endl;

            output();
        }
    }
};

int main()
{
    library info[MAX_STORAGE];

    int i = 0;
    while(true)
    {
        info[i].input();
        
        i++;
    }
    
    return 0;
}