#include "Composants/Composant5.h"
#include "Compteur.h"

Composant5::Composant5(int variation, int qualite, int prix) : Composant("COMPOSANT #5", 10 + variation, qualite, prix) {
    Compteur::ajouterConstructeur();
}

Composant5::Composant5(const Composant5 &composant5) : Composant(composant5) {
    Compteur::ajouterConstructeurCopie();
}

Composant5::~Composant5() {
    Compteur::ajouterDestructeur();
}