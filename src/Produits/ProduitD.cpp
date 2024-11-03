#include "Produits/ProduitD.h"
#include "Compteur.h"

ProduitD::ProduitD() : Produit("PRODUIT D") {
    Compteur::ajouterConstructeur();
}

ProduitD::ProduitD(const ProduitD &produit) : Produit(produit) {
    Compteur::ajouterConstructeurCopie();
}

ProduitD::~ProduitD() {
    Compteur::ajouterDestructeur();
    if (composants.size() > 0) {
        for (auto &composant : composants) {
            delete composant;
        }
    }
}

std::string ProduitD::getDescription() const {
    return "Description d'un produit D";
}
