#include <iostream>

int main(){

    int firstNumber{0};
    int secondNumber{0};
    char op;
    std::cout << "Enter first Number: ";
    std::cin >> firstNumber;
    std::cout << "Enter Operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second Number: ";
    std::cin >> secondNumber;

    if(op == '+'){
        int sum = firstNumber + secondNumber;
        std::cout << firstNumber << " + " << secondNumber << " = " << sum << std::endl;
    }else if(op == '-'){
        int sum = firstNumber - secondNumber;
        std::cout << firstNumber << " - " << secondNumber << " = " << sum << std::endl;
    }else if(op == '*'){
        int sum = firstNumber * secondNumber;
        std::cout << firstNumber << " * " << secondNumber << " = " << sum << std::endl;
    }else if(op == '/'){
        int sum = firstNumber / secondNumber;
        std::cout << firstNumber << " / " << secondNumber << " = " << sum << std::endl;
    }


    return 0;
}