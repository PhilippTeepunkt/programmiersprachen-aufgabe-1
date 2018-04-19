#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <iostream>
#include <string>

//Aufgabe 1_16

float mileToKilometer(float const& mile){

    return mile/0.62137f;

}

TEST_CASE ("describe_mileToKilometer","[mileToKilometer]")
{
    REQUIRE(mileToKilometer(3.0)==Approx(4.828041));
    REQUIRE(mileToKilometer(20.5)==Approx(32.99162));
}

int main(int argc, char* argv[]){

    float miles = 0.0f;

    std::cout<<"Geben Sie die Strecke in mi ein: ";

    try{
        std::cin>>miles;
        std::cout<<mileToKilometer(miles);
    }catch(std::exception e){
        std::cout<<"Wrong format! Type in 0.0\n";
    }

    return Catch::Session().run(argc, argv);
}
