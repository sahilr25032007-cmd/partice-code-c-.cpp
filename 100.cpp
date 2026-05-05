// wap to file handling in read object from file and display the content of the file
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inputFile("student.txt"); // Open the file for reading
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1; // Exit with an error code
    }

    string name;
    int rollNumber;
    int marks[5];

    // Read data from the file
    while (inputFile >> name >> rollNumber) {
        for (int i = 0; i < 5; i++) {
            inputFile >> marks[i];
        }

        // Display the content read from the file
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    inputFile.close(); // Close the file
    return 0; // Exit with success
}
