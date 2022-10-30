#include "ParkRanger.h"

ParkRanger::ParkRanger(std::shared_ptr<Park> park)
{
    _park = park;
    for(int i=0;i<4;i++)
    {
        for(auto e:_park->_quadrants[i].wildlife)
        {
            // std::shared_ptr<ParkRanger> rangerPointer(this);
            e->addWatcher(this);
        }
    }
}

void ParkRanger::update(Animal *theAnimal)
{
    //*this->getPosition();
    // _park->_quadrants[0].wildlife[0]->getPosition();
    geometry_msgs::Point pos =  theAnimal->getPosition();
}