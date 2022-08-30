#include "Birch.h"

Birch::Birch()
{
    _species = "Birch";
    _colour = "White";
    _height = 5.6;
    std::cout<<"Birch tree planted."<<std::endl;
}

Birch::Birch(double startingAge)
{
    Birch();
    _startingAge = startingAge;
}

double Birch::getHeight(double age)
{
    double height = age*(pow(2,2.4)/2.2);
    return height;
}