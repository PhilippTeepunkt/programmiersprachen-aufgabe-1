#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int prod = 1; 

int factorial(int const& a){
    
    if(a-1==0){
        return prod;
    }

    prod = prod * a;

    return factorial(a-1);
}

TEST_CASE ("describe_factorial","[factorial]")
{
    REQUIRE(factorial(10)==3628800);
    prod = 1;
    REQUIRE(factorial(5)==120);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}