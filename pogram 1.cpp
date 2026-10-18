#include <iostream>
#include <string>
using namespace std;

class Student {
int rollno;
string name;
string result;
float marks_S1, marks_S2, marks_S3;
float totalMarks, percentage;

public:
void acceptdetails() {
cout << "Enter roll number: ";
cin >> rollno;
cin.ignore(); 
cout << "Enter name: ";
getline(cin, name); 
cout << "Enter marks for Subject 1: ";
cin >> marks_S1;
cout << "Enter marks for Subject 2: ";
cin >> marks_S2;
cout << "Enter marks for Subject 3: ";
cin >> marks_S3;
}
void calresult() {
totalMarks = marks_S1 + marks_S2 + marks_S3;
percentage = (totalMarks / 300.0) * 100;
if (percentage >= 60) {
result = "First Class";
} 
else if (percentage >= 50) {
result = "Second Class";
} 
else if (percentage >= 40) {
result = "Pass Class";
} 
else {
result = "Fail";
}
}
void displaydetails() {
cout << "\n--- Student Report ---" << endl;
cout << "Roll Number : " << rollno << endl;
cout << "Name        : " << name << endl;
cout << "Total Marks : " << totalMarks << " / 300" << endl;
cout << "Percentage  : " << percentage << "%" << endl;
cout << "Result      : " << result << endl;
}
};

int main() {
    Student s;
    s.acceptdetails();
    s.calresult();
    s.displaydetails();

    return 0;
}
