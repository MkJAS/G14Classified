#include "cat.h"


Cat::Cat()
{
    std::cout<<"Cat created."<<std::endl;
}

std::string Cat::speak()
{
    return "Meow!";
}

std::string Cat::getSpecies()
{
    return "Cat";
}

geometry_msgs::Point Cat::getPosition()
{
    return _position;
}

void Cat::setPosition(geometry_msgs::Point position)
{
    _position = position;
}
