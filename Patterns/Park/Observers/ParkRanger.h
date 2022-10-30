#ifndef PARKRANGER_H
#define PARKRANGER_H

#include "Observers.h"
#include "Animal.h"
#include "../Park.h"

class ParkRanger:public Observer
{
public:
    ParkRanger(std::shared_ptr<Park> park);
    void update(Animal *theAnimal);
private:
    std::shared_ptr<Park> _park;    
};





#endif      //