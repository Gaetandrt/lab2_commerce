#include "Reception.h"
#include "Compteur.h"


Reception::Reception(BonCommande *bonCommande) : bonCommande(bonCommande) {
    Compteur::ajouterConstructeur();
}

Reception::~Reception() {
    Compteur::ajouterDestructeur();

    delete bonCommande;
    for (int i = 0; i < 5; i++)
    {
        for (Produit *produit : produits[i])
        {
            delete produit;
        }
        produits[i].clear();
    }
}

void Reception::ajouterProduit(Produit *produit, int idProduit)
{
    if (idProduit < 0 || idProduit > 4)
        return;
    produits[idProduit].push_back(produit);
}
