#pragma once

#include <string>
#include <list>
#include "Composants/Composant.h"

class Entrepot
{
    public:
        Entrepot();
        Entrepot(const Entrepot &);
        ~Entrepot();

        void ajouterComposants(std::list<Composant *> composants, int idComposant);
        void ajouterComposant(Composant *composant, int idComposant);
        Composant *recupererComposant(int idComposant);
        int getQuantiteComposants(int idComposant);

    private:
        std::list<Composant *> composants[5];
};