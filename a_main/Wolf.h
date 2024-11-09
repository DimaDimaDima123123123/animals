#pragma once

#include "Carnivore.h"

class Wolf : public Carnivore 
{
public:
    Wolf();

    void Eat(Herbivore* prey) override;
};