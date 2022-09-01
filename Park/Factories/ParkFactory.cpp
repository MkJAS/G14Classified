#include "ParkFactory.h"
#include <algorithm>
#include <map>

ParkFactory* ParkFactory::_instance = 0;

ParkFactory* ParkFactory::Instance()
{
    if(_instance == 0)
    {
        _instance = new ParkFactory;
    }
    return _instance;
}

ParkFactory::ParkFactory()
{
    _florist = TreeFactory::Instance();
}

Park ParkFactory::buildPark()
{
    Quadrant q1;
    Quadrant q2;
    Quadrant q3;
    Quadrant q4;
    q1.centre = {-100,100};
    q2.centre = {100,100};
    q3.centre = {-100,-100};
    q4.centre = {100,-100};
    std::vector<std::vector<Tree*>> treeSpawns;
    std::vector<std::vector<Animal*>> animalSpawns;
    std::vector<Quadrant> ParkQuadrants = {q1,q2,q3,q4};

    std::vector<std::string> treeSettings;
    std::vector<std::string> animalSettings;
    for (int i=0;i<4;i++)
    {
        std::string forest;
        std::string animals;
        std::cout<<"Select variables for Quadrant "<<i<<":"<<std::endl;
        std::cout<<"Please choose forest type; BIRCH    CEDAR   MIXED\n"<<std::endl;
        std::cin >> forest;
        std::transform(forest.begin(),forest.end(),forest.begin(),::toupper);
        std::cout<<"Now please choose animal generation method; BALANCED    RANDOM\n"<<std::endl;
        std::cin >> animals;
        std::transform(animals.begin(),animals.end(),animals.begin(),::toupper);
        treeSettings.push_back(forest);
        animalSettings.push_back(animals);
    }
    treeSpawns = spawnTrees(treeSettings, ParkQuadrants);
    animalSpawns = spawnAnimals(animalSettings, ParkQuadrants);
    for(int i=0;i<4;i++)
    {
        ParkQuadrants[i].plantlife = treeSpawns[i];
        ParkQuadrants[i].wildlife = animalSpawns[i];
    }
    Park park;
    park.populateQuadrants(ParkQuadrants);
    return park;
}

std::vector<std::vector<Tree*>> ParkFactory::spawnTrees(std::vector<std::string> treeSettings, std::vector<Quadrant> ParkQuadrants)
{
    std::vector<std::vector<Tree*>> quadrants;
    enum Settings{
        BIRCHs,
        CEDARs,
        MIXEDs
    };
    std::map<std::string, Settings> settingsMap
    {
        {"BIRCH",BIRCHs},
        {"CEDAR",CEDARs},
        {"MIXED",MIXEDs}
    };

    std::vector<Tree*> forest;
    for(int i=0;i<4;i++)
    {
        std::string setting = treeSettings[i];
        switch (settingsMap[setting])
        {
            case BIRCHs:
                forest = _florist->createTree(BIRCH,50);
            break;
            case CEDARs:
                forest = _florist->createTree(CEDAR,50);
            break;
            case MIXEDs:
                std::vector<Tree*> buffer;
                forest = _florist->createTree(BIRCH,25);
                buffer = _florist->createTree(CEDAR,25);
                forest.insert(
                    forest.end(),
                    std::make_move_iterator(buffer.begin()),
                    std::make_move_iterator(buffer.end())
                );
            break;
        }
        quadrants.push_back(forest);
    }
    return quadrants;
}

std::vector<std::vector<Animal*>> ParkFactory::spawnAnimals(std::vector<std::string> animalSettings, std::vector<Quadrant> ParkQuadrants)
{
    std::vector<std::vector<Animal*>> quadrants;
    enum Settings{
        BALANCEDs,
        RANDOMs,
    };
    std::map<std::string, Settings> settingsMap
    {
        {"BALANCED",BALANCEDs},
        {"RANDOM",RANDOMs},
    };

    std::vector<Animal*> zoo;
    for(int i=0;i<4;i++)
    {
        std::string setting = animalSettings[i];
        switch (settingsMap[setting])
        {
            case BALANCEDs:
            {
                _zoo = BalancedFactory::Instance();
                geometry_msgs::Point start = {ParkQuadrants[i].centre.x,ParkQuadrants[i].centre.y};
                zoo = _zoo->createAnimal(start);  
            break;
            }
            case RANDOMs:
                
            break;
        }
        quadrants.push_back(zoo);
    }

    return quadrants;

}