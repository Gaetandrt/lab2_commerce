#include "Produits/Produit.h"
#include "Compteur.h"
#include <iostream>

Produit::Produit(std::string _nom) : nom(_nom) {
    Compteur::ajouterConstructeur();
}

Produit::Produit(const Produit &produit) : nom(produit.nom) {
    Compteur::ajouterConstructeurCopie();
    for (auto &composant : produit.composants) {
        ajouterComposant(new Composant(*composant));
    }
}

Produit::~Produit() {
    Compteur::ajouterDestructeur();
}

int Produit::calculerPoids() const {
    int poids = 0;
    for (auto &composant : composants) {
        poids += composant->getPoids();
    }
    return poids;
}

int Produit::calculerPrix() const {
    int prix = 0;
    for (auto &composant : composants) {
        prix += composant->getPrix();
    }
    return prix;
}

void Produit::ajouterComposant(Composant *composant) {
    composants.push_back(composant);
}

int Produit::evaluerQualite() const {
    int qualite = 0;
    for (auto &composant : composants) {
        qualite += composant->getQualite();
    }
    return qualite / composants.size();
}
