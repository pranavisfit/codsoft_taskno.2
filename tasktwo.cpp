// Simple calculator

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter a number number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter another number: ";
    cin >> num2;

    if (op == '+') {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (op == '-') {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (op == '*') {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (op == '/') {
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << " !!You can not divide by 0!!" << endl;
    }
    else {
        cout << "Invalid operator!!." << endl;
    }

    return 0;
}