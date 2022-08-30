#ifndef BALANCEDFACTORY_H
#define BALANCEDFACTORY_H


#include "factory.h"

class BalancedFactory:public AnimalFactory
{
public:
    std::vector<Animal*> createAnimal(geometry_msgs::Point);
protected:
    BalancedFactory(){};
private:
    int num;
};


#endif