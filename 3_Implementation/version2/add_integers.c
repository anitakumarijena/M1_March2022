#include "add_integer.h"

funtion_status_t add_integers(int a, int b, int* result)
{
    long int sum = a + b;

    if(sum > INT_MAX)
        return OVERFLOW;

    if(sum < INT_MIN)
        return UNDERFLOW;
    
    *result = sum;
    return SUCCESS;
}