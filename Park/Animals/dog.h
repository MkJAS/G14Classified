#include "Animal.h"


class Dog:public Animal
{
public:

    Dog();
    std::string speak();
    std::string getSpecies();
    geometry_msgs::Point getPosition();
    void Move();
    
    void setPosition(geometry_msgs::Point);

};