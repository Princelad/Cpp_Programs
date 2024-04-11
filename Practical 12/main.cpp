/*This program is created by 23CS037 Prince Lad*/

/*
WAP to print a result of a student.
*/

#include <iostream>
#include <iomanip>

using namespace std;

string grade(int a)
{
    if (a >= 80)
    {
        return "AA";
    }
    else if (a >= 73)
    {
        return "AB";
    }
    else if (a >= 66)
    {
        return "BB";
    }
    else if (a >= 60)
    {
        return "BC";
    }
    else if (a >= 55)
    {
        return "CC";
    }
    else if (a >= 50)
    {
        return "CD";
    }
    else if (a >= 45)
    {
        return "DD";
    }
    else
    {
        return "FF";
    }
}

int point(int a)
{

    if (a >= 80)
    {
        return 10;
    }
    else if (a >= 73)
    {
        return 9;
    }
    else if (a >= 66)
    {
        return 8;
    }
    else if (a >= 60)
    {
        return 7;
    }
    else if (a >= 55)
    {
        return 6;
    }
    else if (a >= 50)
    {
        return 5;
    }
    else if (a >= 45)
    {
        return 4;
    }
    else
    {
        return 0;
    }
}

class Result{
public:
    string subject_name[3], th_grade[3], pr_grade[3];
    int th_marks[3], pr_marks[3], subject_credit[3];
    float sgpa; 
};

class Student{
private:
    string stu_id, stu_name;
    int semester;
    Result result;
public:
    void getdata_stu(){

        cout << "=-----------------------------------------------=    Input Student    =-----------------------------------------------=" << endl << endl;
        
        cout << setw(40) << left << "Enter the I.D. of the student" << ": ";
        cin.ignore();
        getline(cin, stu_id);
        cout << setw(40) << left << "Enter the name of the student" << ": ";
        getline(cin, stu_name);
        cout << setw(40) << left << "Enter the semester of the student" << ": ";
        cin >> semester;

        cout << "=---------------------------------------------------------------------------------------------------------------------=" << endl << endl;

    }   
    void putdata_stu(){

        cout << "=-----------------------------------------------= Student Information =-----------------------------------------------=" << endl << endl;

        cout << setw(30) << "I.D. of the student";
        cout << ": " << stu_id << endl;
        cout << setw(30) << "Name of the student";
        cout << ": " << stu_name << endl;
        cout << setw(30) << "Semester of the student";
        cout << ": " << semester << endl;

        cout << "=---------------------------------------------------------------------------------------------------------------------=" << endl << endl;

    } 

    void getdata_result(){
        
        cout << "=-----------------------------------------------= Add Student Result =-----------------------------------------------=" << endl << endl;

        for(int i = 0; i < 3; i++){

            cin.ignore();

            cout << "Course #" << (i+1) << endl;
            cout << setw(40) << left << "Enter the course name" << ": ";
            getline(cin, result.subject_name[i]);
            cout << setw(40) << left << "Enter the course credit" << ": ";
            cin >> result.subject_credit[i];
            cout << setw(40) << left << "Enter the theory marks" << ": ";
            cin >> result.th_marks[i];
            cout << setw(40) << left << "Enter the partical marks" << ": ";
            cin >> result.pr_marks[i];
            result.th_grade[i] = grade(result.th_marks[i]);
            result.pr_grade[i] = grade(result.pr_marks[i]);

        }
        
        cout << "=--------------------------------------------------------------------------------------------------------------------=" << endl << endl;
    }

    void putdata_result(){
        cout << "=-------------------------------------------------= Student Report =-------------------------------------------------=" << endl << endl;

        cout << setw(40) << "" << setw(10) << left << "Theory" << setw(10) << left << "Practical" << endl;

        for(int i = 0; i < 3; i++){
            cout << setw(40) << left << result.subject_name[i] << setw(10) << left << result.th_grade[i] << setw(10) << left << result.pr_grade[i] << endl;
        }

        result.sgpa = ((result.subject_credit[0] * point(result.th_marks[0]))) + ((result.subject_credit[1] * point(result.th_marks[1]))) + ((result.subject_credit[2] * point(result.th_marks[2]))) / (result.subject_credit[0] + result.subject_credit[1] + result.subject_credit[2]);

        cout << "\nSGPA:" << result.sgpa << endl;

        cout << "=--------------------------------------------------------------------------------------------------------------------=" << endl << endl;
    
    }
};

int main (){
    Student S1;

    // system("clear");

    S1.getdata_stu();

    S1.getdata_result();

    S1.putdata_stu();

    S1.putdata_result();
    
    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}