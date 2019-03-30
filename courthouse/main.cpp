#include <fruit/fruit.h>
#include "courthouse.h"
#include <iostream>

int main()
{
    std::cout << "Welcome to the Magistrate's Court." << std::endl;
    std::cout << "Enter 1 to enter the Criminal Court, 2 to enter the Civil Court, and any other key to exit." << std::endl;
    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    switch (choice)
    {
    case 1:
        std::cout << "Criminal Court" << std::endl;
        break;

    case 2:
        std::cout << "Civil Court" << std::endl;
        break;

    default:
        break;
    }
}