#include "Composants/Composant.h"
#include "Compteur.h"

Composant::Composant(std::string _nom, int _poids, int _qualite, int _prix) {
    nom = _nom;
    poids = _poids > 0 ? _poids : 0;
    qualite = _qualite > 0 ? (_qualite > 100 ? 100 : _qualite) : 0;
    prix = _prix > 0 ? _prix : 0;
    Compteur::ajouterConstructeur();
}

Composant::Composant(const Composant &composant) {
    nom = composant.nom;
    poids = composant.poids;
    qualite = composant.qualite;
    prix = composant.prix;
    Compteur::ajouterConstructeurCopie();
}

Composant::~Composant() {
    Compteur::ajouterDestructeur();
}
