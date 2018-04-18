#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

float volumeCylinder(float const& radius, float const& height){
    
    return M_PI*radius*radius*height;
}

float surfaceCylinder(float radius, float height){

    float circle = M_PI*radius*radius;
    float body = 2*M_PI*radius*height;
    return (2*circle)+body;
}

TEST_CASE ("describe_volumeCylinder","[volumeCylinder]")
{
    REQUIRE(volumeCylinder(3.0f,6.0f)==169.6460032938f);
}

TEST_CASE ("describe_surfaceCylinder","[surfaceCylinder]")
{
    REQUIRE(surfaceCylinder(2.0f,8.0f)==169.6460032938f);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}