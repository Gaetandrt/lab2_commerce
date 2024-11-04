#include <iostream>
#include "BonCommande.h"
#include "Reception.h"
#include "Produits/ProduitA.h"
#include "Produits/ProduitB.h"
#include "Produits/ProduitC.h"
#include "Produits/ProduitD.h"
#include "Produits/ProduitE.h"

using namespace std;

void testReception()
{
    int quantites[] = {1, 2, 3, 4, 5};
    Commande *maCommande = new Commande(1000, quantites);
    BonCommande *bonCommande = new BonCommande(128, maCommande);
    bonCommande->ajouterProduits(5, 0);
    bonCommande->ajouterProduits(4, 1);
    bonCommande->ajouterProduits(3, 2);
    bonCommande->ajouterProduits(2, 3);
    bonCommande->ajouterProduits(1, 4);
    Reception reception(bonCommande);
    reception.ajouterProduit(new ProduitA(), 0);
    reception.ajouterProduit(new ProduitA(), 0);
    reception.ajouterProduit(new ProduitA(), 0);
    reception.ajouterProduit(new ProduitA(), 0);
    reception.ajouterProduit(new ProduitB(), 1);
    reception.ajouterProduit(new ProduitB(), 1);
    reception.ajouterProduit(new ProduitB(), 1);
    reception.ajouterProduit(new ProduitC(), 2);
    reception.ajouterProduit(new ProduitC(), 2);
    reception.ajouterProduit(new ProduitD(), 3);
    reception.ajouterProduit(new ProduitD(), 3);
    reception.ajouterProduit(new ProduitE(), 4);
    cout << reception << endl;
    for (Produit *produit : reception.getProduits(3))
        cout << *produit << endl;
    for (int id = 0; id < 5; id++)
        cout << "Quantite recue {" << id << "} --> " << reception.getQuantiteProduitsRecus(id) << endl;
    delete maCommande;
}