#include "factory.h"
#include "Animal.h"
#include "BalancedFactory.h"
#include "RandomFactory.h"
#include "TreeFactory.h"
#include "ParkFactory.h"

int main()
{
    // std::cout<<"Hello World"<<std::endl;
    // std::vector<Animal*> animals;
    // Type t;

    // t = BALANCED;
    // AnimalFactory* newFactory;
    // if (t == BALANCED)
    // {
    //     newFactory = new BalancedFactory;
    // }
    // else 
    // {
    //     newFactory = new RandomFactory;
    // }   
    // geometry_msgs::Point start = {0,0};
    // animals = newFactory->createAnimal(start);
    // int Dogs = 0;
    // int Cats = 0;
    // for (int i=0; i<animals.size();i++)
    // {
    //     if(animals[i]->getSpecies() == "Dog")
    //     {
    //         Dogs++;
    //         geometry_msgs::Point point = animals[i]->getPosition();
    //         std::cout<<"Dog at: ("<<point.x<<", "<<point.y<<")"<<std::endl;
    //     }
    //     else
    //     {
    //         Cats++;
    //         geometry_msgs::Point point = animals[i]->getPosition();
    //         std::cout<<"Cat at: ("<<point.x<<", "<<point.y<<")"<<std::endl;
    //     }
    // }
    // std::cout<<"Number of dogs:"<<Dogs<<"\nNumber of cats:"<<Cats<<std::endl;


    // TreeFactory florist;
    // Tree* plant = florist.createTree(CEDAR);
    // std::string type = plant->getSpecies();
    // std::cout<<type<<std::endl;

    ParkFactory aPark;
    

} 