// wap to delelop a class student that store student name , marks of 5 study roll number and display the total marks and percentage of the student
#include <iostream>
using namespace std;
class Student {
private:    string name;
    int rollNumber;
    int marks[5];
public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
    void display() {
        int totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        float percentage = (totalMarks / 500.0) * 100; // Assuming each subject is out of 100
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}
