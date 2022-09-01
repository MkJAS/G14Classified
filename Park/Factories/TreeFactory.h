#ifndef TREEFACTORY_H
#define TREEFACTORY_H


#include "../Trees/Birch.h"
#include "../Trees/Cedar.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <memory>


enum treeType{BIRCH, CEDAR};

class TreeFactory
{
public:
    static TreeFactory* Instance();
    std::vector<std::shared_ptr<Tree>> createTree(treeType t, double amount = 1, double startingAge = 50);
protected:
    TreeFactory(){};
    // TreeFactory* getTreeFactory();
private:
    static TreeFactory* _instance; 
};


#endif //