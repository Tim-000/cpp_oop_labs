#include <iostream>
#include "Lb1.h"

int main() {
    std::string line;
    
    std::cout << "Enter a string consisting of brackets '(' and ')':" << std::endl;
    std::getline(std::cin, line);

    bool result = BracketsCheck(line);
    std::cout << "The result is: " << std::boolalpha << result << std::endl;
    
    return 0;
}