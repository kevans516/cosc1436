/*
 * Kevin Evans
 * Lab #
 * COSC 1436 Fall 2025
 */
// Preprocessor directive
#include <iostream>

int main()
{
    std::cout << "Hello World" << " " << "Your Name" << std::endl;
    std::cout << "You are" << " " << 20 << " " << "Years old" << std::endl;
    std::string name;
    name = "Name";
    std::cout << "Hello World" << name;

    //::string name;
    //name = "Name";
    //std::cout << "Hello World" << name;

    //var decl :: = T id;
    //type = defines what can be stored in the variable and in what format
    int age;
    age = 20;
    std::cout << "You are" << age << " years old ";
    
    // Area of a rectangle calculator
    // A = lw
    //int length;
    //int width;
    //int length, width;
    int length = 10, width = 20;

    //length = 10;
    //width = 20;

    //Uninitialized variables - YOU MUST be assign a value to a variable before you read it
    //int area;
    //area = 0;
    int area = 0;
    area = length * width;
    std::cout << "Area of rectangle is " << area << std::endl;

    // 2different approaches to variable declarations
    // Block - all variables together
    //int radius = 0, diameter = 0;
   // std::string circlename;

    //Now I can use the variables

    //Inline -variables are declared just before they are used
    int radius = 0, diameter = 0;
    //Use radius, diameter

    std::string circlename;
    //Use circlename

    double pi;
    pi = 3.14159;

    char lettergrade;
    lettergrade = 'A';

    bool isPassing;
    isPassing = true;

    //Assignment is right associated;
    //length = 100;
    //width = 100;
    length = width = 100;
}




// String literals "..." read only data, fixed at the point of compulation and value cannont change
    // string literals can have "Whatever" 
    // Escape sequence - special meaning to the compiler - Starts with \ followed by a character
    // \n  - newline
    // \t - tab
    // \" - escape sequence - double quote
    // \\ - slash
    // Variables - Named mamory location where data is stored. Data that you can read and write
    // Integer literal - consists of one or more digits. whole numbers only
    // Floating pont literals - one or more digits + fraction. can have decimals
    // 3.14159, or 3E10, -3E10, 3E-10
    // Every statement in C++ must end with a statement. A statement is anything that does something in the language
    // Variables must be declared before you cvan use them
    // Variable -named menory location where data is stored