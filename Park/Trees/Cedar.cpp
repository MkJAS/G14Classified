#include "Cedar.h"

Cedar::Cedar()
{
    _species = "Cedar";
    _colour = "Dark Brown";
    _height = 12.8;
    std::cout<<"Cedar tree planted."<<std::endl;
}

Cedar::Cedar(double startingAge)
{
    Cedar();
    _startingAge = startingAge;
}

double Cedar::getHeight(double age)
{
    double height = pow(((age+25.8)*30*0.87),0.5);
    return height;
}