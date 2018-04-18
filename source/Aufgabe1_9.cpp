#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int checksum(int const& a){
    
    int rest = a;
    int sum = 0;

    while(rest!=0){
        sum += rest%10;
        rest = rest/10;
    }
    return sum;
}

TEST_CASE ("describe_checksum","[checksum]")
{
    REQUIRE(checksum(5)==5);
    REQUIRE(checksum(132)==6);
    REQUIRE(checksum(2871)==18);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}