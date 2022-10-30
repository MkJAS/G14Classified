#include "Animal.h"


class Cat:public Animal
{
public:

    Cat();
    std::string speak();
    std::string getSpecies();
    geometry_msgs::Point getPosition();
    void Move();

    void setPosition(geometry_msgs::Point position);

};