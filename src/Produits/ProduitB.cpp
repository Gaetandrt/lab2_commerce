#include "Produits/ProduitB.h"
#include "Compteur.h"
ProduitB::ProduitB() : Produit("PRODUIT B") {
    Compteur::ajouterConstructeur();
}

ProduitB::ProduitB(const ProduitB &produit) : Produit(produit) {
    Compteur::ajouterConstructeurCopie();
}

ProduitB::~ProduitB() {
    Compteur::ajouterDestructeur();
    if (composants.size() > 0) {
        for (auto &composant : composants) {
            delete composant;
        }
    }
}

std::string ProduitB::getDescription() const {
    return "Description d'un produit B";
}
