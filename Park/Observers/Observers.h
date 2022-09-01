#ifndef OBSERVER_H
#define OBSERVER_H

class Animal;

class Observer
{
public:
    Observer(){};
    virtual void update(Animal *theAnimal) = 0;
};

#endif