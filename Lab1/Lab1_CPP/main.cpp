#include <iostream>
using namespace std;

int main() {
    //question-1
     string name;
     string std_id;
     cout << "What is your name?";
     cin >> name;
     cout << "Hello " << name;

     cout << "\nWhat is your Student ID?";
     cin >> std_id;
     cout << "Your ID is " << std_id;


    //question-2

    int var1;
    int var2;

    cout << "\nEnter a value:";
    cin >> var1;
    cout << "Enter a value:";
    cin >> var2;

    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout << "Var1: "<< var1 << endl;
    cout << "\nVar2: " << var2 << endl;
    cout << "\nSum: " <<  sum << endl ;
    cout << "\nDiff: " << diff << endl;
    cout << "\nProd: " << prod << endl;


    //question-3
    string std_name;
    int lab_grade;
    int midterm_grade;
    int final_grade;

    cout << "Student Name: ";
    cin >> std_name;
    cout << "Lab Grade: ";
    cin >> lab_grade;
    cout<<"Midterm Grade:";
    cin >> midterm_grade;
    cout << "Final Grade: ";
    cin >> final_grade;

    float last_score = ((float) lab_grade*25/100) + ((float) midterm_grade*35/100) + ((float )final_grade*40/100);

    cout << "Name: " << std_name;
    cout << "\nLab: " << lab_grade;
    cout << "\nMidterm: " << midterm_grade;
    cout << "\nFinal: " << last_score;


    //question-4

    cout << "\n*\n**\n***\n**\n*";

    return 0;
}
