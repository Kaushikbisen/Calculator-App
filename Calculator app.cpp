//Task 1 calculator app 

#include <iostream>

int main() {
    float num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;

    float result;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division by zero is not allowed.";
                return 0;
            }
            break;
        default:
            std::cout << "Error: Invalid operator.";
            return 0;
    }

    std::cout << "Result: " << result;

    return 0;
}
