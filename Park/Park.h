#ifndef PARK_H
#define PARK_H 

#include <vector>
#include "type.h"
#include "Animal.h"
#include "Tree.h"


class Park
{
public:
    Park();
    void populateQuadrants(std::vector<Quadrant> quadrants);
    void getStats(int quadNum);

    std::vector<Quadrant> _quadrants;

private:
    Quadrant _q1;
    Quadrant _q2;
    Quadrant _q3;
    Quadrant _q4;
    

    
};






#endif //