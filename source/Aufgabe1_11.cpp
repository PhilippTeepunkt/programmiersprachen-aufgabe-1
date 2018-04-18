#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

float fract(float const& a){
    int temp = a;
    return a-temp;
}

TEST_CASE ("describe_fract","[sumMultiples]")
{
    REQUIRE(fract(2.478)==Approx(0.478));
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}