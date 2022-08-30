#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <iostream>
#include <math.h>

class Tree
{
public:
    Tree(){}
    std::string getSpecies();
    std::string getColour();

protected:
    virtual double getHeight(double age) = 0;

    std::string _species;
    std::string _colour;
    double _height;
    double _startingAge;

};

#endif //