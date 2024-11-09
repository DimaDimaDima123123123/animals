#pragma once

#include "Carnivore.h"

class Lion : public Carnivore 
{
public:
    Lion();

    void Eat(Herbivore* prey) override;
};