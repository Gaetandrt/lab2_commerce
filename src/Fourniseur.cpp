#include "Fournisseur.h"
#include "Compteur.h"
#include "Utils/Random.h"

Fournisseur::Fournisseur()
{
    Compteur::ajouterConstructeur();

    for (int i = 0; i < 5; i++)
    {
        quantiteComposants[i] = 1000;
    }
}

Fournisseur::Fournisseur(const Fournisseur &)
{
    Compteur::ajouterConstructeurCopie();
}

Fournisseur::~Fournisseur()
{
    Compteur::ajouterDestructeur();
}

std::list<Composant *> Fournisseur::commanderComposant(int idComposant, int quantite)
{
    std::list<Composant *> composants;

    if (quantiteComposants[idComposant] < quantite)
    {
        return composants;
    }

    switch (idComposant)
    {
        case 0:
            for (int i = 0; i < quantite; i++)
            {
                Composant1 *composant = produireComposant1();
                composants.push_back(composant);
            }
            break;
        case 1:
            for (int i = 0; i < quantite; i++)
            {
                Composant2 *composant = produireComposant2();
                composants.push_back(composant);
            }
            break;
        case 2:
            for (int i = 0; i < quantite; i++)
            {
                Composant3 *composant = produireComposant3();
                composants.push_back(composant);
            }
            break;
        case 3:
            for (int i = 0; i < quantite; i++)
            {
                Composant4 *composant = produireComposant4();
                composants.push_back(composant);
            }
            break;
        case 4:
            for (int i = 0; i < quantite; i++)
            {
                Composant5 *composant = produireComposant5();
                composants.push_back(composant);
            }
            break;
    }

    return composants;
}

Composant1 *Fournisseur::produireComposant1()
{
    if (quantiteComposants[0] > 0)
    {
        quantiteComposants[0]--;
        int qualite = Random::getRandomInt(90, 100);
        int prix = 30 + (100 - qualite);

        return new Composant1(qualite, prix);
    }
    return nullptr;
}

Composant2 *Fournisseur::produireComposant2()
{
    if (quantiteComposants[1] > 0)
    {
        quantiteComposants[1]--;
        int qualite = Random::getRandomInt(93, 99);
        int prix = Random::getRandomInt(33, 37);

        return new Composant2(qualite, prix);
    }
    return nullptr;
}

Composant3 *Fournisseur::produireComposant3()
{
    if (quantiteComposants[2] > 0)
    {
        quantiteComposants[2]--;
        int prix = Random::getRandomInt(38, 45);

        return new Composant3(prix);
    }
    return nullptr;
}

Composant4 *Fournisseur::produireComposant4()
{
    if (quantiteComposants[3] > 0)
    {
        quantiteComposants[3]--;
        int qualite = Random::getRandomInt(80, 100);

        return new Composant4(qualite);
    }
    return nullptr;
}


Composant5 *Fournisseur::produireComposant5()
{
    if (quantiteComposants[4] > 0)
    {
        quantiteComposants[4]--;
        int qualite = Random::getRandomInt(95, 100);
        int variation = Random::getRandomInt(-5, 5);
        int prix = 33 + (100 - qualite);

        return new Composant5(variation, qualite, prix);
    }
    return nullptr;
}
