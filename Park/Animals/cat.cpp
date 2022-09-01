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
    return _currentPosition;
}

void Cat::setPosition(geometry_msgs::Point position)
{
    _spawnPosition = position;
    _currentPosition = position;
}

void Cat::Move()
{
    _currentPosition.x = _currentPosition.x + 4;
    _currentPosition.y = _currentPosition.y + 4;

    if(abs(_currentPosition.x - _spawnPosition.x) > 100 || abs(_currentPosition.y - _spawnPosition.y) > 100)
        {
            //notify(*this);
            notify();
        }

}

