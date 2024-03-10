#include <iostream>
#include "question2.h"

int main() 
{
    int decimal;
    char choice;

    do
     {
        std::cout << "Enter an integer value (1-512): ";
        std::cin >> decimal;

        if (decimal < 1 || decimal > 512)
         {
            std::cout << "Invalid input. Please enter a value between 1 and 512." << std::endl;
            continue;
        }

        std::string hex = decimal_to_hex(decimal);
        std::cout << "The hexadecimal representation is: " << hex << std::endl;

        std::cout << "Do you want to convert another value? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}