#ifndef PARKFACTORY_H
#define PARKFACTORY_H 

#include "../Park.h"
#include "TreeFactory.h"
#include "factory.h"
#include "BalancedFactory.h"
#include "RandomFactory.h"

class ParkFactory
{
public:
    static ParkFactory* Instance();
    Park buildPark();

protected:
    ParkFactory();

private:
    std::vector<Animal*> createAnimal(geometry_msgs::Point position){};
    std::vector<std::vector<Tree*>> spawnTrees(std::vector<std::string> treeSettings, std::vector<Quadrant> ParkQuadrants);
    std::vector<std::vector<Animal*>> spawnAnimals(std::vector<std::string> animalSettings, std::vector<Quadrant> ParkQuadrants);

    static ParkFactory* _instance;

    TreeFactory*    _florist;
    AnimalFactory*  _zoo;
    // Park*            _park;
};




#endif //