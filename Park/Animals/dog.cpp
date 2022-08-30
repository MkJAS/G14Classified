#include "dog.h"


Dog::Dog()
{
    std::cout<<"Dog created."<<std::endl;
}

std::string Dog::speak()
{
    return "Woof!";
}

std::string Dog::getSpecies()
{
    return "Dog";
}

geometry_msgs::Point Dog::getPosition()
{
    return _position;
}

void Dog::setPosition(geometry_msgs::Point position)
{
    _position = position;
}