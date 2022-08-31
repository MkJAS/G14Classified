#ifndef TYPE_H
#define TYPE_H

#include <vector>

class Animal;
class Tree;

namespace geometry_msgs {

    struct Point{
        double x; /*!< x coordinate within global map (m) */
        double y; /*!< y coordinate within global map (m) */
    };
}

struct Quadrant
{
    std::vector<Animal*>     wildlife;
    std::vector<Tree*>       plantlife;
    geometry_msgs::Point    centre;
};

#endif  //