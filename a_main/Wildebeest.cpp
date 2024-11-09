#include <iostream>
#include "Wildebeest.h"
using namespace std;

Wildebeest::Wildebeest() : Herbivore(50) {}

void Wildebeest::EatGrass() 
{

    weight += 10;
    cout << "Wildebeest eats grass. Its weight: " << weight << endl;
}