#include "Carnivore.h"

Carnivore::Carnivore(int initialPower) : power(initialPower) {}
int Carnivore::GetPower() const
{
    return power;
}
