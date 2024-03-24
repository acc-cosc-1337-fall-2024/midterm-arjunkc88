#include "question2.h"
#include <iostream>
using namespace std;

bool test_config()
{ 
    return true;
}

string decimal_to_hex(int value){

    string hexStr = "";
    while (value > 0)
    {
        int remainder = value % 16;
        if (remainder < 10) 
        {
            hexStr.insert(0, 1, '0' + remainder);
        } 
        else 
        {
            hexStr.insert(0, 1, 'A' + (remainder - 10));
        }
        value = value/16;
    }
    return hexStr;
}
