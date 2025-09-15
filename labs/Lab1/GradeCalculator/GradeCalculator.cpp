// GradeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* 
Kevin Evans - GradeCalculator
Lab 1
COSC 1436 Fall 2025
*/

#include <iostream>

int main ()
{
    std::cout << "Lab 1" << std::endl;
    std::cout << "Kevin Evans " << std::endl;
    std::cout << "COSC 1436 - Fall 2025" << std::endl;

    std::string name;
    int lab1, lab2, lab3, lab4;
    int exam1, exam2, exam3, participation =0, finalExam =0;
    std::cout << "Please enter your name: "; std::cin >> name;
    
    std::cout << "Please enter Lab 1: "; std::cin >> lab1;
    std::cout << "Please enter Lab 2: "; std::cin >> lab2;
    std::cout << "Please enter Lab 3: "; std::cin >> lab3;
    std::cout << "Please enter Lab 4: "; std::cin >> lab4;
    std::cout << "Please enter Exam 1: "; std::cin >> exam1;
    std::cout << "Please enter Exam 2: "; std::cin >> exam2;
    std::cout << "Please enter Exam 3: "; std::cin >> exam3;
    std::cout << "Please enter your participation: "; std::cin >> participation;
    std::cout << "Please enter Final Exam: "; std::cin >> finalExam;

    double labAverage = (lab1 + lab2 + lab3 + lab4) / 4.0;
    double examAverage = (exam1 + exam2 + exam3) / 3.0;

    std::cout << std::endl;
    std::cout << name << ", your lab grades are:" << std::endl;
    std::cout << "Lab 1 = " << lab1 << std::endl;
    std::cout << "Lab 2 = " << lab2 << std::endl;
    std::cout << "Lab 3 = " << lab3 << std::endl;
    std::cout << "Lab 4 = " << lab4 << std::endl;

    std::cout << std::endl;
    std::cout << name << ", your exam grades are:" << std::endl;
    std::cout << "Exam 1 = " << exam1 << std::endl;
    std::cout << "Exam 2 = " << exam2 << std::endl;
    std::cout << "Exam 3 = " << exam3 << std::endl;

    std::cout << std::endl;
    std::cout << name << ", your other grades are:" << std::endl;
    std::cout << "Participartion = " << participation << std::endl;
    std::cout << "Final exam = " << finalExam << std::endl;

    std::cout << std::endl;
    std::cout << name << ", your class grade is:" << std::endl;
    std::cout << "Lab Average = " << labAverage << std::endl;
    std::cout << "Exam Average =" << examAverage << std::endl;
    std::cout << "Participation =" << participation << std::endl;
    std::cout << "Final Exam =" << finalExam << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
