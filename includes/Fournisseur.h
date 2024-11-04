#pragma once

#include <string>
#include <list>
#include "Composants/Composant.h"
#include "Composants/Composant1.h"
#include "Composants/Composant2.h"
#include "Composants/Composant5.h"
#include "Composants/Composant3.h"
#include "Composants/Composant4.h"

class Fournisseur
{
    public:
        Fournisseur();
        Fournisseur(const Fournisseur &);
        ~Fournisseur();

        std::list<Composant *> commanderComposant(int idComposant, int quantite);
        Composant1 *produireComposant1();
        Composant2 *produireComposant2();
        Composant3 *produireComposant3();
        Composant4 *produireComposant4();
        Composant5 *produireComposant5();

    private:
        int quantiteComposants[5];

};