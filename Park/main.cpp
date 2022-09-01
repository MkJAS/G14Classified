#include "factory.h"
#include "Animal.h"
#include "BalancedFactory.h"
#include "RandomFactory.h"
#include "TreeFactory.h"
#include "ParkFactory.h"
#include "ParkRanger.h"

int main()
{
    ParkFactory*  Parkmaker = ParkFactory::Instance();
    Park apark = Parkmaker->buildPark();
    ParkRanger ranger(&apark);
    
    // apark.getStats(0);

    while(true)
    {
        for(int i=0;i<4;i++)
        {
            for(auto e:apark._quadrants[i].wildlife)
            {
                e->Move();
            }
        }
    }
     

} 