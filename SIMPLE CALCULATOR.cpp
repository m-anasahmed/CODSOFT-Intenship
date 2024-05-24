#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store user inputs and the result of the operation
    double number1, number2, result;
    char sign;

    // Prompt the user to enter the first number
    cout << "Enter first Number: ";
    cin >> number1;

    // Prompt the user to enter the second number
    cout << "Enter second Number: ";
    cin >> number2;

    // Prompt the user to choose an operation (*, /, +, -)
    cout << "Choose operation to perform (*, /, +, -): ";
    cin >> sign;

    // Display the chosen operation to the user
    cout << "\nYour chosen operation is: " << sign;

    // Perform the selected operation based on the user's choice
    switch (sign)
    {
    case '*':
        // Multiply the two numbers and store the result
        result = number1 * number2;
        // Display the multiplication result
        cout << "\nThe Multiplication answer is: " << result;
        break;

    case '/':
        // Check if the second number is not zero to avoid division by zero
        if (number2 != 0) {
            // Divide the first number by the second number and store the result
            result = number1 / number2;
            // Display the division result
            cout << "\nThe Division answer is: " << result;
        }
        else {
            // Display an error message if division by zero is attempted
            cout << "\nError: Division by zero is not allowed." << endl;
        }
        break;

    case '+':
        // Add the two numbers and store the result
        result = number1 + number2;
        // Display the addition result
        cout << "\nThe Addition answer is: " << result;
        break;

    case '-':
        // Subtract the second number from the first number and store the result
        result = number1 - number2;
        // Display the subtraction result
        cout << "\nThe Subtraction answer is: " << result;
        break;

    default:
        // Display an error message for an invalid operator
        cout << "\nError: Invalid operator. Please try again." << endl;
        break;
    }

    // Display the final result
    cout << "\nThe Result is: " << result << endl;

    return 0;
}
