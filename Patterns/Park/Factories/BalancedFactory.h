#ifndef BALANCEDFACTORY_H
#define BALANCEDFACTORY_H

#define _USE_MATH_DEFINES
#include <cmath>
#include "factory.h"


class BalancedFactory:public AnimalFactory
{
public:
    std::vector<std::shared_ptr<Animal>> createAnimal(geometry_msgs::Point);
    static BalancedFactory* Instance();
protected:
    BalancedFactory(){};
private:
    int num;
    static BalancedFactory* _instance;
};


#endif