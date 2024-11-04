#include <iostream>
#include <list>
#include "Fournisseur.h"

using namespace std;

void testFournisseur()
{
    Fournisseur fournisseur;
    list<Composant *> composants1 = fournisseur.commanderComposant(0, 3);
    list<Composant *> composants2 = fournisseur.commanderComposant(1, 3);
    list<Composant *> composants3 = fournisseur.commanderComposant(2, 3);
    list<Composant *> composants4 = fournisseur.commanderComposant(3, 3);
    list<Composant *> composants5 = fournisseur.commanderComposant(4, 3);
    Fournisseur fournisseurCC(fournisseur);
    Composant *composant;
    for (int x = 0; x < 3; x++)
    {
        composant = composants1.front();
        cout << composant->getNom() << "/" << composant->getPoids() << "/" << composant->getQualite() << "/" << composant->getPrix() << endl;
        composants1.pop_front();
        delete composant;
        composant = composants2.front();
        cout << composant->getNom() << "/" << composant->getPoids() << "/" << composant->getQualite() << "/" << composant->getPrix() << endl;
        composants2.pop_front();
        delete composant;
        composant = composants3.front();
        cout << composant->getNom() << "/" << composant->getPoids() << "/" << composant->getQualite() << "/" << composant->getPrix() << endl;
        composants3.pop_front();
        delete composant;
        composant = composants4.front();
        cout << composant->getNom() << "/" << composant->getPoids() << "/" << composant->getQualite() << "/" << composant->getPrix() << endl;
        composants4.pop_front();
        delete composant;
        composant = composants5.front();
        cout << composant->getNom() << "/" << composant->getPoids() << "/" << composant->getQualite() << "/" << composant->getPrix() << endl;
        composants5.pop_front();
        delete composant;
    }
}
