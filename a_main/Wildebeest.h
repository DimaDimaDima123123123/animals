#pragma once

#include "Herbivore.h"

class Wildebeest : public Herbivore
{
public:
    Wildebeest();

    void EatGrass() override;
};
