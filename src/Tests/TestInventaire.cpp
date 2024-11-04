#include "Inventaire.h"
#include "Produits/ProduitA.h"
#include "Produits/ProduitB.h"
#include "Produits/ProduitC.h"
#include "Produits/ProduitD.h"
#include "Produits/ProduitE.h"
#include <iostream>
#include "Composants/Composant1.h"
#include "Composants/Composant2.h"
#include "Composants/Composant5.h"

using namespace std;

void testInventaire()
{
    Inventaire inventaire;
    inventaire.ajouterProduit(new ProduitA());
    inventaire.ajouterProduit(new ProduitA());
    inventaire.ajouterProduit(new ProduitA());
    inventaire.ajouterProduit(new ProduitB());
    inventaire.ajouterProduit(new ProduitB());
    inventaire.ajouterProduit(new ProduitC());
    inventaire.ajouterProduit(new ProduitD());
    inventaire.ajouterProduit(new ProduitE());
    Inventaire *inventaireCC = new Inventaire(inventaire);
    Produit *produits[6];
    produits[0] = inventaire.recupererProduit(0); // un produitA
    produits[1] = inventaire.recupererProduit(0); // un produitA
    produits[2] = inventaire.recupererProduit(1); // un produitB
    produits[3] = inventaire.recupererProduit(2); // un produitC
    produits[4] = inventaire.recupererProduit(3); // un produitD
    produits[5] = inventaire.recupererProduit(4); // un produitE
    Produit *produit = inventaire.recupererProduit(0);
    ProduitA *produitCopie = new ProduitA(*((ProduitA *)produit));
    produit->ajouterComposant(new Composant1(100, 20));
    produit->ajouterComposant(new Composant2(90, 50));
    produit->ajouterComposant(new Composant5(10, 85, 30));
    cout << "ORIGINAL --> " << *produit << endl;
    cout << "COPIE    --> " << *produitCopie << endl;
    delete produit;
    delete produitCopie;
    for (Produit *produit : produits)
        cout << *produit << endl;
    for (int x = 0; x < 6; x++)
        delete produits[x];
    delete inventaireCC;
}