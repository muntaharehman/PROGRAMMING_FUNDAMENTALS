#include <iostream>
using namespace std;

 main() {
    string username, password;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == "admin" && password == "1234") {
            cout << "Login Successful" << endl;
            break;
        } else {
            cout << "Invalid credentials!" << endl;
            attempts++;
        }
    }

    if (attempts == 3) {
        cout << "Too many incorrect attempts. Access Denied." << endl;
        return 0;
    }

    int choice;
    string students[10];
    int count = 0;

    do {cout<<"-----University Management System-----\n";
        cout << "\n1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Add Course\n";
        cout << "4. View Courses\n ";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count < 10) {
                cout << "Enter student name: ";
                cin >> students[count];
                count++;
            } else {
                cout << "Student limit reached!" << endl;
            }
        } else if (choice == 2) {
            cout << "Students:" << endl;
            for (int i = 0; i < count; i++) {
                cout << students[i] << endl;
            }
        }
    } while (choice != 3);

    return 0;
}