#include "Entrepot.h"
#include <list>
#include "Compteur.h"

Entrepot::Entrepot()
{
    Compteur::ajouterConstructeur();
}

Entrepot::Entrepot(const Entrepot &entrepot)
{
    Compteur::ajouterConstructeurCopie();

    for (int i = 0; i < 5; i++)
    {
        for (Composant *composant : entrepot.composants[i])
        {
            composants[i].push_back(new Composant(*composant));
        }
    }
}

Entrepot::~Entrepot()
{
    Compteur::ajouterDestructeur();

    for (int i = 0; i < 5; i++)
    {
        for (Composant *composant : composants[i])
        {
            delete composant;
        }
        composants[i].clear();
    }
}

Composant *Entrepot::recupererComposant(int idComposant)
{
    if (composants[idComposant].empty())
    {
        return nullptr;
    }

    Composant *composant = composants[idComposant].front();
    composants[idComposant].pop_front();

    return composant;
}

void Entrepot::ajouterComposant(Composant *composant, int idComposant)
{
    if (idComposant < 0 || idComposant > 4)
    {
        return;
    }
    composants[idComposant].push_back(composant);
}

void Entrepot::ajouterComposants(std::list<Composant *> composants, int idComposant)
{
    for (Composant *composant : composants)
    {
        this->ajouterComposant(composant, idComposant);
    }
}
