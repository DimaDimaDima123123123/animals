#pragma once

#include "Herbivore.h"

class Carnivore
{
protected:
    int power;

public:
    Carnivore(int initialPower);

    virtual ~Carnivore() {}

    virtual void Eat(Herbivore* prey) = 0;

    int GetPower() const;
};
