#include "question2.h"

bool test_config()
{

std::string decimal_to_hex(int value) 
{
    std::string hexStr = "";
    while (value > 0)
     {
        int remainder = value % 16;
        if (remainder < 10) 
        {
            hexStr.insert(0, 1, '0' + remainder);
        } else 
        {
            hexStr.insert(0, 1, 'A' + (remainder - 10));
        }
        value /= 16;
    }
    return hexStr;
}

}