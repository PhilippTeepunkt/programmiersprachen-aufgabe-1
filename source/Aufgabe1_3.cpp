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

    int ergebnis;
    int j = b-1;
    bool end = false;
    int zaehler=b;

    //Logic
    while(!end){

        j = j+20;
        for (int i = 1; i <= b; i++)
        {
            if (j % i != 0)
            {
                zaehler--;
            }
            
        }

        if (zaehler == b)
        {
            end = true;
        }
        zaehler = b;
    }

    ergebnis = j;

    return ergebnis; 
}
