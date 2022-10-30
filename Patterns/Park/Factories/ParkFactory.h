#ifndef PARKFACTORY_H
#define PARKFACTORY_H 

#include "../Park.h"
#include "TreeFactory.h"
#include "factory.h"
#include "BalancedFactory.h"
#include "RandomFactory.h"
#include <memory>

class ParkFactory
{
public:
    static ParkFactory* Instance();
    std::shared_ptr<Park> buildPark();

protected:
    ParkFactory();  

private:
    std::vector<std::vector<std::shared_ptr<Tree>>> spawnTrees(std::vector<std::string> treeSettings, std::vector<Quadrant> ParkQuadrants);
    std::vector<std::vector<std::shared_ptr<Animal>>> spawnAnimals(std::vector<std::string> animalSettings, std::vector<Quadrant> ParkQuadrants);

    static ParkFactory* _instance;

    TreeFactory*    _florist;
    AnimalFactory*  _zoo;
    // Park*            _park;
};




#endif //