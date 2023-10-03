#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;
    int error = 0;

    std::cout << "***********CALCULATOR*********** \n";
    do{
        if (error > 0){
            std::cout << "Enter only (+ - * /): " ;
            
        } else{
            std::cout << "Enter the operand (+ - * /): " ;
        }
        std::cin >> op;
        error++;

    } while (op != '+' && op != '-' && op != '*' && op != '/');

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (op)
    {
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
        if (num2 == 0){
            std::cout << "Cannot divided by zero \n";
            return 0;
        } else {
            result = num1 / num2;
        }
        break;
    default:
        std::cout << "Cannot solve the problem";
        break;
    }

    std::cout << "The result is " << result;
    return 0;
}