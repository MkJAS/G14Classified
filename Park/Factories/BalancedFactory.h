#ifndef BALANCEDFACTORY_H
#define BALANCEDFACTORY_H


#include "factory.h"

class BalancedFactory:public AnimalFactory
{
public:
    std::vector<Animal*> createAnimal(geometry_msgs::Point);
    static BalancedFactory* Instance();
protected:
    // BalancedFactory* getBalancedFactory();
    BalancedFactory(){};
private:
    int num;
    static BalancedFactory* _instance;
};


#endif