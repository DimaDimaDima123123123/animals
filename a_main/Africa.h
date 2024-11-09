#pragma once

#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"

class Africa : public Continent
{
public:
    Herbivore* CreateHerbivore() override;
    Carnivore* CreateCarnivore() override;
};