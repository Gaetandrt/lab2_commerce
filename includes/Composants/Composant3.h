#pragma once

#include "Composants/Composant.h"

class Composant3 : public Composant
{
    public:
        Composant3(int prix = 0);
        Composant3(const Composant3 &composant3);
        ~Composant3();
};