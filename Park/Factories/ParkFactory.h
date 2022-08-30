#ifndef PARKFACTORY_H
#define PARKFACTORY_H 

#include "../Park.h"
#include "TreeFactory.h"
#include "factory.h"
#include "BalancedFactory.h"
#include "RandomFactory.h"

class ParkFactory:public TreeFactory
{
public:
    ParkFactory();   
    Park buildPark();


private:
    // AnimalFactory* _zoo;
    TreeFactory _florist; 
};




#endif //