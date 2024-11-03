#pragma once

#include "Composants/Composant.h"

class Composant5 : public Composant
{
    public:
        Composant5(int variation = 0, int qualite = 0, int prix = 0);
        Composant5(const Composant5 &composant5);
        ~Composant5();
};