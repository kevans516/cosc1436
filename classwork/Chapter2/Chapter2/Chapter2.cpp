/*
 * Kevin Evans
 * Lab #
 * COSC 1436 Fall 2025
 */
// Preprocessor directive
#include <iostream>

int main()
{
    
    std::cout << "Hello World" << "Your Name" << std::endl;
    std::cout << "You are" << " " << 20 << " " << "Years old" << std::endl;
    std::string name;
    name = "Name";
    std::cout << "Hello World" << name;
    
}

// String literals "..." read only data, fixed at the point of compulation and value cannont change
// string literals can have "Whatever" 
// Escape sequence - special meaning to the compiler - Starts with \ followed by a character
// \n  - newline
// \t - tab
// \" - escape sequence - double quote
// \\ - slash
// Variables - Nambed mamory location where data is stored. Data that you can read and write
// Integer literal - consists of one or more digits. whole numbers only
// Floating pont literals - one or more digits + fraction. can have decimals
// 3.14159, or 3E10, -3E10, 3E-10
//Every statement in C++ must end with a statement. A statement is anything that does something in the language
