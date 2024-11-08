#include <iostream>
#include "Client.h"
#include "Commande.h"
#include "Reception.h"
#include "BonCommande.h"
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

using namespace std;

void testClient()
{
    Client client("test", 98);
    Commande commande = client.getCommande(0);
    BonCommande *bonCommande = new BonCommande(128, &commande);
    bonCommande->ajouterProduits(3, 0);
    bonCommande->ajouterProduits(3, 1);
    bonCommande->ajouterProduits(3, 2);
    bonCommande->ajouterProduits(3, 3);
    bonCommande->ajouterProduits(3, 4);
    Reception *reception = new Reception(bonCommande);
    /* Creation des composants et des produits pour le calcul de la
    qualité */
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
    reception->ajouterProduit(new ProduitA(produitA), 0);
    reception->ajouterProduit(new ProduitA(produitA), 0);
    reception->ajouterProduit(new ProduitA(produitA), 0);
    reception->ajouterProduit(new ProduitB(produitB), 1);
    reception->ajouterProduit(new ProduitB(produitB), 1);
    reception->ajouterProduit(new ProduitB(produitB), 1);
    reception->ajouterProduit(new ProduitC(produitC), 2);
    reception->ajouterProduit(new ProduitC(produitC), 2);
    reception->ajouterProduit(new ProduitC(produitC), 2);
    reception->ajouterProduit(new ProduitD(produitD), 3);
    reception->ajouterProduit(new ProduitD(produitD), 3);
    reception->ajouterProduit(new ProduitD(produitD), 3);
    reception->ajouterProduit(new ProduitE(produitE), 4);
    reception->ajouterProduit(new ProduitE(produitE), 4);
    reception->ajouterProduit(new ProduitE(produitE), 4);
    client.recevoirCommande(reception);
    cout << client << endl;
    cout << client.getCommande(0).getNoCommande() << endl;
    cout << client.getReception()->getBonCommande()->getCommande()->getNoCommande() << endl;
    cout << client.getSatisfactionProduit(0) << endl;
    client.consommerProduits();
}