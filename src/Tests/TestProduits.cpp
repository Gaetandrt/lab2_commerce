#include "Composants/Composant1.h"
#include "Composants/Composant2.h"
#include "Composants/Composant3.h"
#include "Composants/Composant4.h"
#include "Composants/Composant5.h"
#include "Produits/ProduitA.h"
#include "Produits/ProduitB.h"
#include "Produits/ProduitC.h"
#include "Produits/ProduitD.h"
#include "Produits/ProduitE.h"
#include <iostream>
#include <list>

using namespace std;

void testProduits()
{
    Composant1 *c1 = new Composant1(98, 45);
    Composant2 *c2 = new Composant2(96, 33);
    Composant3 *c3 = new Composant3(22);
    Composant4 *c4 = new Composant4(100);
    Composant5 *c5 = new Composant5(2, 77, 100);
    ProduitA produitA;
    produitA.ajouterComposant(c1);
    produitA.ajouterComposant(c2);
    produitA.ajouterComposant(c3);
    ProduitB produitB;
    produitB.ajouterComposant(c4);
    produitB.ajouterComposant(c5);
    ProduitC produitC;
    produitC.ajouterComposant(new Composant(*c1));
    ProduitD produitD;
    produitD.ajouterComposant(new Composant(*c2));
    ProduitE produitE;
    produitE.ajouterComposant(new Composant(*c3));
    ProduitA *produitACC = new ProduitA(produitA);
    ProduitB produitBCC(produitB);
    list<Produit *> mesProduits;
    mesProduits.push_back((Produit *)&produitA);
    mesProduits.push_back((Produit *)&produitB);
    mesProduits.push_back((Produit *)&produitC);
    mesProduits.push_back((Produit *)&produitD);
    mesProduits.push_back((Produit *)&produitE);
    mesProduits.push_back((Produit *)produitACC);
    mesProduits.push_back((Produit *)&produitBCC);
    for (Produit *produit : mesProduits)
        cout << *produit << endl;

    delete produitACC;
}
