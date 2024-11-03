#include "Composants/Composant1.h"
#include "Compteur.h"
Composant1::Composant1(int qualite, int prix) : Composant("COMPOSANT #1", 10, qualite, prix) {
    Compteur::ajouterConstructeur();
}

Composant1::Composant1(const Composant1 &composant1) : Composant(composant1) {
    Compteur::ajouterConstructeurCopie();
}

Composant1::~Composant1() {
    Compteur::ajouterDestructeur();
}