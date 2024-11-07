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
        inline int getQuantiteComposants(int idComposant) const {
            return composants[idComposant].size();
        }

    private:
        std::list<Composant *> composants[5];
};