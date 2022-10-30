#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <stdio.h>
#include "../type.h"
#include "../Observers/Observers.h"


class Animal
{
public:
    Animal(){};
    virtual std::string speak() = 0;
    virtual std::string getSpecies() = 0;
    virtual geometry_msgs::Point getPosition() = 0;
    virtual void setPosition(geometry_msgs::Point position) = 0;
    virtual void Move() = 0;

    void addWatcher(Observer* obs)
    {
        _watchers.push_back(obs);
    }

    void notify()
    {
        for(auto e:_watchers)
        {
            //e->update(*this)
            e->update(this);
        }
    }

protected:
    geometry_msgs::Point _currentPosition;
    geometry_msgs::Point _spawnPosition;
    std::vector<Observer*> _watchers;
};

#endif // Animal_H