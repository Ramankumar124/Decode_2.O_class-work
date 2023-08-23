/*Ques : Write a program to create a calculator thc
performs basic arithmetic operations (add,
subtract, multiply and divide) using switch case
and functions. The calculator should input two
numbers and an operator from user.*/

#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Cannot divide by zero!";
            break;
        default:
            cout << "Invalid operator!";
    }

    return 0;
}
