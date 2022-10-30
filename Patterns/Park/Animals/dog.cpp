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
    return _currentPosition;
}

void Dog::setPosition(geometry_msgs::Point position)
{
    _spawnPosition = position;
}

void Dog::Move()
{
    _currentPosition.x = _currentPosition.x + 2;
    _currentPosition.y = _currentPosition.y + 2;
}