#include <iostream>
#include "Bison.h"

using namespace std;

Bison::Bison() : Herbivore(60) {}

void Bison::EatGrass() 
{
    weight += 10;
    cout << "Bison eats grass. Its weight: " << weight << endl;
}