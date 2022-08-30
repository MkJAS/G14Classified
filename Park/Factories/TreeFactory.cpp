#include "TreeFactory.h"



Tree* TreeFactory::createTree(treeType t, double startingAge)
{
    switch (t)
    {
        case BIRCH:
            return new Birch(startingAge);
        break;
        case CEDAR:
            return new Cedar(startingAge);
        break;
    }

}