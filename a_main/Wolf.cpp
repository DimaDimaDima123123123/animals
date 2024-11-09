#include "Wolf.h"
#include <iostream>
using namespace std;

Wolf::Wolf() : Carnivore(70) {}

void Wolf::Eat(Herbivore* prey) 
{
    if (prey->IsAlive()) 
    {
        if (power > prey->GetWeight())
        {
            power += 10;
            prey->Die();
            cout << "Wolf eats the herbivore. Power increases! Now it is:" << power << endl;
        }
        else
        {
            power -= 10;
            cout << "Wolf fails to overpower the herbivore. Power decreases! Now it is: " << power << endl;
        }
    }
    else {
        cout << "The prey is already dead.\n";
    }
}
