#include "Composants/Composant4.h"
#include "Compteur.h"

Composant4::Composant4(int qualite) : Composant("COMPOSANT #4", 11, qualite, 10) {
    Compteur::ajouterConstructeur();
}

Composant4::Composant4(const Composant4 &composant4) : Composant(composant4) {
    Compteur::ajouterConstructeurCopie();
}

Composant4::~Composant4() {
    Compteur::ajouterDestructeur();
}