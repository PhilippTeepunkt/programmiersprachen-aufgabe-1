#include <iostream>

int kleinsterTeiler(int const& a, int const& b);

int main()
{
    int a;
    int b;
    std::cout<<"Untere Grenze eingeben:\n";
    std::cin>>a;
    std::cout<<"Obere Grenze eingeben:\n";
    std::cin>>b;

    std::cout<<kleinsterTeiler(a,b);
    return 0;
}

int kleinsterTeiler(int const& a, int const& b){

    //Logic 
    return a+b;
}
