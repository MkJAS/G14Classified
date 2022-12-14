#include "RandomFactory.h"

RandomFactory* RandomFactory::_instance = 0;

RandomFactory* RandomFactory::Instance()
{
    if(_instance == 0)
    {
        _instance = new RandomFactory;
    }
    return _instance;
}

std::vector<std::shared_ptr<Animal>> RandomFactory::createAnimal(geometry_msgs::Point position)
{
    std::vector<std::shared_ptr<Animal>> animals;
    long int seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine gen(seed);
    std::normal_distribution<double> datarnd(3,10);

    double amount = datarnd(gen);
    while(amount>11 || amount<1)
    {
        amount = datarnd(gen);
    }
    amount = round(amount);
    for (int i=0;i<amount;i++)
    {
        animals.push_back(std::shared_ptr<Dog> (new Dog));
    }

    amount = datarnd(gen);
    while(amount>11 || amount<1)
    {
        amount = datarnd(gen);
    }
    amount = round(amount);
    for (int i=0;i<amount;i++)
    {
        animals.push_back(std::shared_ptr<Cat> (new Cat));
    }
    return animals;
}