#include <iostream>
using namespace std;

class student {
    string name;
    int rn;
    string deg;
    string hostel;
    int cg;

public:
    // Input details for all students
    static void adddetails(student *n, int size) {
        for (int i = 0; i < size; i++) {
            cout << "Enter the name: ";
            cin.ignore();
            getline(cin, n[i].name);
            cout << "Enter the roll number: ";
            cin >> n[i].rn;
            cin.ignore();
            cout << "Enter the degree: ";
            getline(cin, n[i].deg);
            cout << "Enter the hostel: ";
            getline(cin, n[i].hostel);
            cout << "Enter the CGPA: ";
            cin >> n[i].cg;
        }
    }

    // Update full details based on student name
    static void updatedetails(student *n, int size) {
        string targetName;
        cout << "Enter the name of the student to update: ";
        cin.ignore();
        getline(cin, targetName);

        for (int i = 0; i < size; i++) {
            if (n[i].name == targetName) {
                cout << "Enter new name: ";
                getline(cin, n[i].name);
                cout << "Enter new roll number: ";
                cin >> n[i].rn;
                cin.ignore();
                cout << "Enter new degree: ";
                getline(cin, n[i].deg);
                cout << "Enter new hostel: ";
                getline(cin, n[i].hostel);
                cout << "Enter new CGPA: ";
                cin >> n[i].cg;
                break;
            }
        }
    }

    // Update CGPA
    static void updatecgpa(student *n, int size) {
        int roll;
        cout << "Enter the roll number of the student: ";
        cin >> roll;

        for (int i = 0; i < size; i++) {
            if (n[i].rn == roll) {
                cout << "Enter new CGPA: ";
                cin >> n[i].cg;
                break;
            }
        }
    }

    // Update Hostel
    static void updatehostel(student *n, int size) {
        int roll;
        cout << "Enter the roll number: ";
        cin >> roll;

        for (int i = 0; i < size; i++) {
            if (n[i].rn == roll) {
                cout << "Enter new hostel: ";
                cin.ignore();
                getline(cin, n[i].hostel);
                break;
            }
        }
    }

    // Display all students
    static void displaydetails(student *n, int size) {
        for (int i = 0; i < size; i++) {
            cout << "\nStudent " << i + 1 << ":\n";
            cout << "Name: " << n[i].name << endl;
            cout << "Roll No: " << n[i].rn << endl;
            cout << "Degree: " << n[i].deg << endl;
            cout << "Hostel: " << n[i].hostel << endl;
            cout << "CGPA: " << n[i].cg << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the number of students: ";
    cin >> size;

    student *s = new student[size]; // dynamic array

    // Add details
    student::adddetails(s, size);

    char input;
    cout << "Do you want to update details? (Y/N): ";
    cin >> input;
    if (input == 'Y') {
        student::updatedetails(s, size);
    }

    cout << "Do you want to update CGPA? (Y/N): ";
    cin >> input;
    if (input == 'Y') {
        student::updatecgpa(s, size);
    }

    cout << "Do you want to update hostel? (Y/N): ";
    cin >> input;
    if (input == 'Y') {
        student::updatehostel(s, size);
    }

    // Final display
    student::displaydetails(s, size);

    delete[] s; // free memory
    return 0;
}

  
 

