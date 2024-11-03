#include "Composants/Composant1.h"
#include "Composants/Composant2.h"
#include "Composants/Composant3.h"
#include "Composants/Composant4.h"
#include "Composants/Composant5.h"
#include <iostream>
#include <list>
using namespace std;

void testComposants()
{
    Composant1 *c1 = new Composant1(98, 45);
    // Appel du constructeur
    Composant2 *c2 = new Composant2(96, 33);
    // Appel du constructeur
    Composant3 *c3 = new Composant3(22);
    // Appel du constructeur
    Composant4 *c4 = new Composant4(100);
    // Appel du constructeur
    Composant5 *c5 = new Composant5(2, 77, 100);
    // Appel du constructeur
    Composant1 cc(*c1); // Appel du constructeur par copie
    cout << "cc : " << cc.getNom() << "/" << cc.getPoids() << "/" << cc.getPrix() << "/" << cc.getQualite() << endl;
    list<Composant *> composants;
    // Création d'une liste de Composant*
    composants.push_back(c1); // Ajout dans la liste
    composants.push_back(c2); // Ajout dans la liste
    composants.push_back(c3); // Ajout dans la liste
    composants.push_back(c4); // Ajout dans la liste
    composants.push_back(c5); // Ajout dans la liste
        // Affichage de chaque composant
    for (Composant *composant : composants) // Pour chaque composant de la liste
        cout << composant->getNom() << "/" << composant->getPoids() << "/" << composant->getPrix() << "/" << composant->getQualite() << endl;
    // Suppression de chaque composant
    while (!composants.empty())
    {
        Composant *composant = composants.front(); // Récupération du dernier composant
        composants.pop_front();
        // Il est retiré de la liste
        delete composant;
        // Maintenant on le supprime pour libérer la mémoire
    }
    // à la fin de la fonction, la liste (qui n'est pas un pointeur se
    // supprime automatiquement car elle est sur la pile
}