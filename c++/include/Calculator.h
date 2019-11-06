#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>

using std::string;

class Calculator
{
private:
    int total = 0;
    string equation = "";
public:
    Calculator(int startingNumber);
    ~Calculator();

    int add(int number);
    int subtract(int number);

    int getCurrentTotal();
    string print();
};
#endif