#ifndef PARKRANGER_H
#define PARKRANGER_H

#include "Observers.h"
#include "dog.h"
#include "cat.h"
#include "../Park.h"

class ParkRanger:public Observer
{
public:
    ParkRanger(Park* park);
    void update();
private:
    Park* _park;    
};





#endif      //