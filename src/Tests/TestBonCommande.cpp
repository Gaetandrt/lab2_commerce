#include <iostream>
#include "BonCommande.h"
#include "Commande.h"

using namespace std;

void testBonCommande()
{
    int quantites[] = {1, 2, 3, 4, 5};
    Commande *maCommande = new Commande(1000, quantites);
    BonCommande *bonCommande = new BonCommande(128, maCommande);
    bonCommande->ajouterProduits(5, 0);
    bonCommande->ajouterProduits(4, 1);
    bonCommande->ajouterProduits(3, 2);
    bonCommande->ajouterProduits(2, 3);
    bonCommande->ajouterProduits(1, 4);
    cout << *bonCommande << endl;
    BonCommande bonCommandeCC(*bonCommande);
    cout << bonCommandeCC << endl;
    delete bonCommande;
    delete maCommande;
}