#ifndef FACTORY_H
#define FACTORY_H


#include "dog.h"
#include "cat.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include "../type.h"

enum Type{BALANCED, RANDOM};


class AnimalFactory
{
public:

    AnimalFactory(){};
    virtual std::vector<Animal*> createAnimal(geometry_msgs::Point position) = 0;
    

protected:
    
    geometry_msgs::Point _position;


};

#endif // Factory_H