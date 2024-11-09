#include "Herbivore.h"

Herbivore::Herbivore(int initialWeight) : weight(initialWeight), life(true) {}

int Herbivore::GetWeight() const 
{
    return weight;
}
bool Herbivore::IsAlive() const 
{
    return life;
}
void Herbivore::Die()
{
    life = false;
}