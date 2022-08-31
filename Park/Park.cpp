#include "Park.h"


Park::Park()
{
    
}

void Park::spawnQuadrants(std::vector<Quadrant> quadrants)
{
        _q1 = quadrants[0];
        _q2 = quadrants[1];
        _q3 = quadrants[2];
        _q4 = quadrants[3];
        _quadrants = {_q1,_q2,_q3,_q4};
}

void Park::getStats(int quadNum)
{
    if (quadNum<0 || quadNum>3)
    {
        std::cout<<"Selection Error! Please choose between 0-3."<<std::endl;
    }
    int cedars = 0;
    int birch = 0;
    int cats = 0;
    int dogs = 0;
    for (auto &e:_quadrants[quadNum].plantlife)
    {
        if (e->getSpecies() == "Cedar")
        {
            cedars++;
        }
        else
            birch++;
    }
    for (auto &e:_quadrants[quadNum].wildlife)
    {
        if (e->getSpecies() == "Dog")
        {
            dogs++;
        }
        else
            cats++;
    }
    std::cout<<"Quadrant "<<quadNum<<";"<<std::endl;
    std::cout<<"Centre Location: ("<<_quadrants[quadNum].centre.x<<", "<<_quadrants[quadNum].centre.y<<")"<<std::endl;
    std::cout<<"Trees: Cedar = "<<cedars<<" , Birch = "<<birch<<std::endl;
    std::cout<<"Animals: Dogs = "<<dogs<<" ,Cats = "<<cats<<std::endl;
}