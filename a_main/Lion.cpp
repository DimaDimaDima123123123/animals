#include "Lion.h"
#include <iostream>
using namespace std;

Lion::Lion() : Carnivore(80) {}

void Lion::Eat(Herbivore* prey)
{
    if (prey->IsAlive()) 
    {
        if (power > prey->GetWeight()) 
        {
            power += 10;
            prey->Die();
            cout << "Lion eats the herbivore. Power increases. Now it is: " << power << endl;
        }

        else 
        {
            power -= 10;
            cout << "Lion fails to overpower the herbivore. Power decreases. Now it is: " << power << endl;
        }
    }
    else 
    {
        cout << "The prey is already dead.\n";
    }
}