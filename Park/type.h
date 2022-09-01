#ifndef TYPE_H
#define TYPE_H

#include <vector>
#include <memory>

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
    std::vector<std::shared_ptr<Animal>>     wildlife;
    std::vector<std::shared_ptr<Tree>>       plantlife;
    geometry_msgs::Point    centre;
};

#endif  //