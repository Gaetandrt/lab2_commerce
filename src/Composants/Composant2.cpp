#include "Composants/Composant2.h"
#include "Compteur.h"

Composant2::Composant2(int qualite, int prix) : Composant("COMPOSANT #2", 7, qualite, prix) {
    Compteur::ajouterConstructeur();
}

Composant2::Composant2(const Composant2 &composant2) : Composant(composant2) {
    Compteur::ajouterConstructeurCopie();
}

Composant2::~Composant2() {
    Compteur::ajouterDestructeur();
}