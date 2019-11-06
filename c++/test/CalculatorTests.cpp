#include "doctest.h"
#include "Calculator.h"

TEST_CASE("Calculator constructor sets sum") 
{
    Calculator calculator = Calculator(5);
    REQUIRE(5 == calculator.getCurrentTotal());
}

TEST_CASE("Adding positive integers works") 
{
    Calculator calculator = Calculator(5);
    calculator.add(2);
    REQUIRE(7 == calculator.getCurrentTotal());
}

TEST_CASE("Adding negative integers works")
{
    Calculator calculator = Calculator(5);
    calculator.add(-2);
    REQUIRE_EQ(3, calculator.getCurrentTotal());
}

TEST_CASE("Subtracting works")
{
    Calculator calc = Calculator(5);
    calc.subtract(3);
    REQUIRE_EQ(2, calc.getCurrentTotal());
} 

TEST_CASE("throws overflow exception on addition")
{
    Calculator calc = Calculator(2000000000);
    CHECK_THROWS(calc.add(2000000000));
}