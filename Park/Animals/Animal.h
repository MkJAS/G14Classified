#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <stdio.h>

namespace geometry_msgs {

    struct Point{
        double x; /*!< x coordinate within global map (m) */
        double y; /*!< y coordinate within global map (m) */
    };
}

class Animal
{
public:
    Animal(){};
    virtual std::string speak() = 0;
    virtual std::string getSpecies() = 0;
    virtual geometry_msgs::Point getPosition() = 0;
    virtual void setPosition(geometry_msgs::Point position) = 0;
protected:
    geometry_msgs::Point _position;
};

#endif // Animal_H