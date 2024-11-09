#pragma once

#include "Herbivore.h"

class Bison : public Herbivore
{
public:

    Bison();

    void EatGrass() override;
};
