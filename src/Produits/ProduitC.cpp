#include "Produits/ProduitC.h"
#include "Compteur.h"

ProduitC::ProduitC() : Produit("PRODUIT C") {
    Compteur::ajouterConstructeur();
}

ProduitC::ProduitC(const ProduitC &produit) : Produit(produit) {
    Compteur::ajouterConstructeurCopie();
}

ProduitC::~ProduitC() {
    Compteur::ajouterDestructeur();
    if (composants.size() > 0) {
        for (auto &composant : composants) {
            delete composant;
        }
    }
}

std::string ProduitC::getDescription() const {
    return "Description d'un produit C";
}
