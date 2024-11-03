#pragma once

#include "Composants/Composant.h"

class Composant1 : public Composant
{
    public:
        Composant1(int qualite = 0, int prix = 0);
        Composant1(const Composant1 &composant1);
        ~Composant1();
};