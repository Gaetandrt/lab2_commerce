#include "Produits/ProduitE.h"
#include "Compteur.h"

ProduitE::ProduitE() : Produit("PRODUIT E") {
    Compteur::ajouterConstructeur();
}

ProduitE::ProduitE(const ProduitE &produit) : Produit(produit) {
    Compteur::ajouterConstructeurCopie();
}

ProduitE::~ProduitE() {
    Compteur::ajouterDestructeur();
    if (composants.size() > 0) {
        for (auto &composant : composants) {
            delete composant;
        }
    }
}

std::string ProduitE::getDescription() const {
    return "Description d'un produit E";
}
