#include <iostream>
#include "NorthAmerica.h"
#include "Carnivore.h"
#include "Africa.h"
#include "Herbivore.h"

using namespace std;

int main()
{
    Continent* africa = new Africa();

    Herbivore* herbivore = africa->CreateHerbivore();

    Carnivore* carnivore = africa->CreateCarnivore();

    herbivore->EatGrass();
    carnivore->Eat(herbivore);

    return 0;
}