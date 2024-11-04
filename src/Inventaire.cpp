#include "Inventaire.h"
#include "Compteur.h"

Inventaire::Inventaire()
{
    Compteur::ajouterConstructeur();
}

Inventaire::Inventaire(const Inventaire &inventaire)
{
    Compteur::ajouterConstructeurCopie();
    for (int i = 0; i < 5; i++) {
        for (const auto& produit : inventaire.produits[i]) {
            produits[i].push_back(new Produit(*produit));
        }
    }
}

Inventaire::~Inventaire()
{
    Compteur::ajouterDestructeur();
    for (int i = 0; i < 5; i++) {
        for (const auto& produit : produits[i]) {
            delete produit;
        }
        produits[i].clear();
    }
}
