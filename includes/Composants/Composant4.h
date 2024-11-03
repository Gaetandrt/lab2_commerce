#pragma once

#include "Composants/Composant.h"

class Composant4 : public Composant
{
    public:
        Composant4(int qualite = 0);
        Composant4(const Composant4 &composant4);
        ~Composant4();
};