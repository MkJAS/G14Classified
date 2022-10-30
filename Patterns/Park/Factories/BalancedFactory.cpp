#include "BalancedFactory.h"

BalancedFactory* BalancedFactory::_instance = 0;

BalancedFactory* BalancedFactory::Instance()
{
    if(_instance == 0)
    {
        _instance = new BalancedFactory;
    }
    return _instance;
}


std::vector<std::shared_ptr<Animal>> BalancedFactory::createAnimal(geometry_msgs::Point position)
{
    double MAX_animals = 6;
    double r = 10;

    geometry_msgs::Point spawn;
    std::vector<std::shared_ptr<Animal>> animals;
    for (int i = 0; i < MAX_animals/2; i++)
    {
        animals.push_back(std::shared_ptr<Dog> (new Dog));
        animals.push_back(std::shared_ptr<Cat> (new Cat));
    }
    for (double i=0; i<animals.size();i++)
    {
        double angle = (2*M_PI/MAX_animals)*i;
        // if (angle > M_PI/2 && angle < M_PI)
        // {
        //     angle = M_PI - angle;
        //     spawn.x = -1*r*cos((2*M_PI/MAX_animals)*i);
        //     spawn.y = r*sin((2*M_PI/MAX_animals)*i);
        // }
        spawn.x = r*cos(angle) + position.x;
        spawn.y = r*sin(angle) + position.y;
        if (angle == M_PI)
        {
            spawn.y = 0;
        }
        animals[i]->setPosition(spawn);
    }
    return animals;
}

// BalancedFactory* BalancedFactory::getBalancedFactory()
// {
//     return new BalancedFactory;
// }    