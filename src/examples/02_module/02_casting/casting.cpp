#include "casting.h"
/*
Function convert_int_to_double multiplies years times interest_rate

@param int year             - number of years
@param double interest_rate - interest rate
@return the product of years times interest rate
*/
double convert_to_double(int years, double interest_rate)
{
    auto total = years *interest_rate;
    return total;
}
/*
Function convert_double_to_int with a double parameter returns the 
double parameter

@param double num
@return the num parameter
*/
int convert_double_to_int(double num1)
{
    return num1;
}
/*
Function static_cast_double_int with a double parameter that does
a static_cast conversion to int

@param double num
@return the static cast conversion to int
*/

int static_cast_double_int(double num)
{
    auto ret = static_cast<int>(num);
    return ret;
}