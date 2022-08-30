#include "Tree.h"

class Cedar:public Tree
{
public:
    Cedar();
    Cedar(double startingAge);
    double getHeight(double age);
};