#include "Composants/Composant3.h"
#include "Compteur.h"

Composant3::Composant3(int prix) : Composant("COMPOSANT #3", 12, 100, prix) {
    Compteur::ajouterConstructeur();
}

Composant3::Composant3(const Composant3 &composant3) : Composant(composant3) {
    Compteur::ajouterConstructeurCopie();
}

Composant3::~Composant3() {
    Compteur::ajouterDestructeur();
}