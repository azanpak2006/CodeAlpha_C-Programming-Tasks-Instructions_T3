#include <iostream>
using namespace std;

string savedUsername = "admin";
string savedPassword = "1234";

void registerUser() {
    string username, password;

    cout << "\n--- Registration ---" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    savedUsername = username;
    savedPassword = password;

    cout << "Registration Successful!" << endl;
}

void loginUser() {
    string username, password;

    cout << "\n--- Login ---" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == savedUsername && password == savedPassword) {
        cout << "Login Successful!" << endl;
    }
    else {
        cout << "Invalid Username or Password!" << endl;
    }
}

int main() {
    int choice;

    cout << "1. Register" << endl;
    cout << "2. Login" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    if (choice == 1) {
        registerUser();
    }
    else if (choice == 2) {
        loginUser();
    }
    else {
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}
