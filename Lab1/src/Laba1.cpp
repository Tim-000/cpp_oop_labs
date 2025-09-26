#include <iostream>
#include "Lb1.h"

bool BracketsCheck(const std::string& str){
    if (str.length() > 100)
        return false;

    int balance = 0;
    char c;
    for (int i = 0; i < str.length(); i++) {
        c = str[i];
        if (c == '(')
            balance++;
        else if (c == ')')
            balance--;

        if (balance < 0)
            return false;
    }
    return balance == 0;
}