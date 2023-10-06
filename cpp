#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the operation (+, -, *, /, sin, cos, tan, sqrt, root): ";
    cin >> operation;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
        cout << "Enter the second number: ";
        cin >> num2;
    }

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case 'sin':
            cout << "Result: " << sin(num1) << endl;
            break;
        case 'cos':
            cout << "Result: " << cos(num1) << endl;
            break;
        case 'tan':
            cout << "Result: " << tan(num1) << endl;
            break;
        case 'sqrt':
            cout << "Result: " << sqrt(num1) << endl;
            break;
        case 'root':
            cout << "Result: " << pow(num1, 1/num2) << endl;
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    return 0;
}
