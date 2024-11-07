#include "Produits/ProduitA.h"
#include "Compteur.h"

ProduitA::ProduitA() : Produit("PRODUIT A") {
    Compteur::ajouterConstructeur();
}

ProduitA::ProduitA(const ProduitA &produit) : Produit(produit) {
    Compteur::ajouterConstructeurCopie();
}

ProduitA::~ProduitA() {
    Compteur::ajouterDestructeur();
    if (composants.size() > 0) {
        for (auto &composant : composants) {
            delete composant;
        }
    }
}

std::string ProduitA::getDescription() const {
    return "Description d'un produit A";
}

