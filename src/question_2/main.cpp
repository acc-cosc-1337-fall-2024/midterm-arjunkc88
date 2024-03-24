#include <iostream>
#include "question2.h"
using namespace std;

int main() 
{
    int decimal;
    char choice;

    do
     {
        cout << "Enter an integer value (1-512): ";
        cin >> decimal;

        if (decimal < 1 || decimal > 512)
         {
            cout << "Invalid input. Please enter a value between 1 and 512." << endl;
            continue;
        }

        string hex = decimal_to_hex(decimal);
        cout << "The hexadecimal representation is: " << hex << endl;

        cout << "Do you want to convert another value? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}