#include <iostream>
#include <list>
#include "Composants/Composant.h"
#include "Composants/Composant1.h"
#include "Composants/Composant2.h"
#include "Composants/Composant3.h"
#include "Composants/Composant4.h"
#include "Composants/Composant5.h"
#include "Entrepot.h"

using namespace std;

void testEntrepot()
{
    Entrepot entrepot;
    entrepot.ajouterComposant(new Composant1(100, 80), 0);
    entrepot.ajouterComposant(new Composant2(99, 81), 1);
    list<Composant *> maListeComposants4;
    maListeComposants4.push_back(new Composant4(99));
    maListeComposants4.push_back(new Composant4(98));
    maListeComposants4.push_back(new Composant4(97));
    maListeComposants4.push_back(new Composant5(3, 90, 30));
    entrepot.ajouterComposants(maListeComposants4, 3);
    Entrepot entrepotCC(entrepot);
    entrepotCC.ajouterComposant(new Composant3(1000), 2);
    for (int id = 0; id < 5; id++)
        while (entrepotCC.getQuantiteComposants(id) > 0)
        {
            Composant *monComposant =
                entrepotCC.recupererComposant(id);
            cout << "mon composant " << monComposant->getNom() << endl;
            delete monComposant;
        }
}