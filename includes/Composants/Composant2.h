#pragma once

#include "Composants/Composant.h"

class Composant2 : public Composant
{
    public:
        Composant2(int qualite = 0, int prix = 0);
        Composant2(const Composant2 &composant2);
        ~Composant2();
};