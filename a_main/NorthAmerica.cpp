#include "NorthAmerica.h"

Herbivore* NorthAmerica::CreateHerbivore() 
{
    return new Bison();
}
Carnivore* NorthAmerica::CreateCarnivore()
{
    return new Wolf();
}