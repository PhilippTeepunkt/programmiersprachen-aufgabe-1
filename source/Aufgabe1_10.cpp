#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int sumMultiples(int const& a){

    int sum = 0;

    for (int i =1; i<=a; i++)
    {
        if(i%3==0||i%5==0){
            sum += i;
        }
    }
    std::cout << sum;
    return sum;
}

TEST_CASE ("describe_sumMultiples","[sumMultiples]")
{
    REQUIRE(sumMultiples(20)==98);
    REQUIRE(sumMultiples(1000)==234168);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}