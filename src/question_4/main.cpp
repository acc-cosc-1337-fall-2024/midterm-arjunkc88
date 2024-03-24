#include "question4.h"
#include <iostream>

int main() 
{
    double celsius;
        char shouldContinue;
     do 
    {
                std::cout << "Enter temperature in Celsius: ";
                         std::cin >> celsius;

        double fahrenheit = get_fahrenheit(celsius);
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

        std::cout << "Do you want to convert another temperature? (Y/N): ";
         std::cin >> shouldContinue;
    } while (shouldContinue == 'Y' || shouldContinue == 'y');

    std::cout << "Goodbye!\n";

     return 0;
}
