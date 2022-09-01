#include "TreeFactory.h"

TreeFactory* TreeFactory::_instance = 0;

TreeFactory* TreeFactory::Instance()
{
    if(_instance == 0)
    {
        _instance = new TreeFactory;
    }
    return _instance;
}

std::vector<std::shared_ptr<Tree>> TreeFactory::createTree(treeType t,double amount, double startingAge)
{
    std::vector<std::shared_ptr<Tree>> forest;
    for(int i=0;i<amount;i++)
    {
        switch (t)
        {
            case BIRCH:
                // std::shared_ptr<Birch> (new Birch(startingAge));
                forest.push_back(std::shared_ptr<Birch> (new Birch(startingAge)));
            break;
            case CEDAR:
                forest.push_back(std::shared_ptr<Cedar> (new Cedar(startingAge)));
            break;
        }
    }
    return forest;

}

// TreeFactory* TreeFactory::getTreeFactory()
// {
//     return new TreeFactory;
// }