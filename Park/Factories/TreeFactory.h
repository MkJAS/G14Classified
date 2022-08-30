#ifndef TREEFACTORY_H
#define TREEFACTORY_H


#include "../Trees/Birch.h"
#include "../Trees/Cedar.h"
#include <iostream>
#include <stdio.h>
#include <vector>


enum treeType{BIRCH, CEDAR};

class TreeFactory
{
public:
    Tree* createTree(treeType t, double startingAge = 0);
protected:
    TreeFactory(){};
};


#endif //