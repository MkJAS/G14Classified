#ifndef RANDOMFACTORY_H
#define RANDOMFACTORY_H


#include "factory.h"
#include <chrono>
#include <cmath>
#include <random>

class RandomFactory:public AnimalFactory
{
public:
    static RandomFactory* Instance();
    std::vector<Animal*> createAnimal(geometry_msgs::Point position);
protected:
    RandomFactory(){};
private:
    static RandomFactory* _instance;
};


#endif