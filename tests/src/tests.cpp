#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    // No negative numbers added for test due to "assert (n>=1)"
    // Build time takes a while, at least on my own pc. Makes sense due to the large numbers in the testcase.

    //Note that i added my own function "fact_add" in fib.c
    REQUIRE(sumtail(1,0)==fact_add(1));
    REQUIRE(sumtail(2,0)==fact_add(2));
    REQUIRE(sumtail(18,0)==fact_add(18));
    REQUIRE(sumtail(345,0)==fact_add(345));
    REQUIRE(sumtail(1111,0)==fact_add(1111));
    REQUIRE(sumtail(44345,0)==fact_add(44345));
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(1)==fact_add(1));
    REQUIRE(sumwhile(2)==fact_add(2));
    REQUIRE(sumwhile(18)==fact_add(18));
    REQUIRE(sumwhile(345)==fact_add(345));
    REQUIRE(sumwhile(1111)==fact_add(1111));
    REQUIRE(sumwhile(44345)==fact_add(44345));
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(1,0,1)==0);
    REQUIRE(fib(2,0,1)==1);
    REQUIRE(fib(3,0,1)==1);
    REQUIRE(fib(4,0,1)==2);
    REQUIRE(fib(5,0,1)==3);
    REQUIRE(fib(6,0,1)==5);
    REQUIRE(fib(7,0,1)==8);
    REQUIRE(fib(8,0,1)==13);
    REQUIRE(fib(9,0,1)==21);
    REQUIRE(fib(10,0,1)==34);
    
}


