#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

// Function to perform addition
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to perform subtraction
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to perform multiplication
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to perform division
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero" << endl;
        return 0;
    }
}

// Function to calculate square root
double squareRoot(double num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        cout << "Error: Invalid input" << endl;
        return 0;
    }
}

// Function to calculate power
double power(double base, double exponent) {
    return pow(base, exponent);
}

// Function to calculate factorial
double factorial(double num) {
    if (num >= 0) {
        double result = 1;
        for (int i = 1; i <= num; i++) {
            result *= i;
        }
        return result;
    } else {
        cout << "Error: Invalid input" << endl;
        return 0;
    }
}

// Function to calculate sine
double sine(double angle) {
    return sin(angle);
}

// Function to calculate cosine
double cosine(double angle) {
    return cos(angle);
}

// Function to calculate tangent
double tangent(double angle) {
    return tan(angle);
}

// Function to calculate logarithm
double logarithm(double num) {
    if (num > 0) {
        return log10(num);
    } else {
        cout << "Error: Invalid input" << endl;
        return 0;
    }
}

// Function to calculate natural logarithm
double naturalLogarithm(double num) {
    if (num > 0) {
        return log(num);
    } else {
        cout << "Error: Invalid input" << endl;
        return 0;
    }
}

// Function to calculate absolute value
double absoluteValue(double num) {
    return abs(num);
}

// Function to calculate round value
double roundValue(double num) {
    return round(num);
}

// Function to calculate floor value
double floorValue(double num) {
    return floor(num);
}

// Function to calculate ceiling value
double ceilingValue(double num) {
    return ceil(num);
}

int main() {
    int choice;
    double num1, num2;
    
    cout << "Scientific Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Power" << endl;
    cout << "7. Factorial" << endl;
    cout << "8. Sine" << endl;
    cout << "9. Cosine" << endl;
    cout << "10. Tangent" << endl;
    cout << "11. Logarithm" << endl;
    cout << "12. Natural Logarithm" << endl;
    cout << "13. Absolute Value" << endl;
    cout << "14. Round Value" << endl;
    cout << "15. Floor Value" << endl;
    cout << "16. Ceiling Value" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << squareRoot(num1) << endl;
            break;
        case 6:
            cout << "Enter the base: ";
            cin >> num1;
            cout << "Enter the exponent: ";
            cin >> num2;
            cout << "Result: " << power(num1, num2) << endl;
            break;
        case 7:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << factorial(num1) << endl;
            break;
        case 8:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << sine(num1) << endl;
            break;
        case 9:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << cosine(num1) << endl;
            break;
        case 10:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << tangent(num1) << endl;
            break;
        case 11:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << logarithm(num1) << endl;
            break;
        case 12:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << naturalLogarithm(num1) << endl;
            break;
        case 13:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << absoluteValue(num1) << endl;
            break;
        case 14:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << roundValue(num1) << endl;
            break;
        case 15:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << floorValue(num1) << endl;
            break;
        case 16:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Result: " << ceilingValue(num1) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    
    return 0;
}
