#include "Compteur.h"

int Compteur::constructeur = 0;
int Compteur::constructeurCopie = 0;
int Compteur::destructeur = 0;

void Compteur::ajouterConstructeur() {
    ++constructeur;
}

void Compteur::ajouterConstructeurCopie() {
    ++constructeurCopie;
}

void Compteur::ajouterDestructeur() {
    ++destructeur;
}

int Compteur::getNbConstructeurs() {
    return constructeur;
}

int Compteur::getNbConstructeursCopie() {
    return constructeurCopie;
}

int Compteur::getNbDestructeurs() {
    return destructeur;
}
