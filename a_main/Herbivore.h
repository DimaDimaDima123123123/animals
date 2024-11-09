#pragma once

class Herbivore
{
protected:
    int weight;
    bool life;

public:
    Herbivore(int initialWeight);

    virtual ~Herbivore() {}

    virtual void EatGrass() = 0;

    int GetWeight() const;

    bool IsAlive() const;

    void Die();
};