#ifndef PARKRANGER_H
#define PARKRANGER_H

#include "Observers.h"
#include "Animal.h"
#include "../Park.h"

class ParkRanger:public Observer
{
public:
    ParkRanger(Park* park);
    void update(Animal *theAnimal);
private:
    Park* _park;    
};





#endif      //