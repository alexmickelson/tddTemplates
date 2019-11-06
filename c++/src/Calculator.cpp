#include "Calculator.h"
#include <exception>

using std::exception;

Calculator::Calculator(int number)
{
    total = number;
}

Calculator::~Calculator()
{
}

int Calculator::add(int number)
{
    if(number > 0 && total > 0 && number + total < 0)
    {
        throw exception();
    }
    total += number;
    return total;
}

int Calculator::subtract(int number)
{
    total -= number;
    return total;
}

int Calculator::getCurrentTotal()
{
    return total;
}

string Calculator::print(){
    return "";
}