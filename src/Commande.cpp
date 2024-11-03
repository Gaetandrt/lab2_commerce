#include "Commande.h"
#include "Compteur.h"

Commande::Commande(int _noCommande, int _quantiteProduits[5]) : noCommande(_noCommande) {
    Compteur::ajouterConstructeur();
    for (int i = 0; i < 5; ++i) {
        quantiteProduits[i] = this->validerQuantite(_quantiteProduits[i]);
    }
}

Commande::Commande(const Commande &commande) : noCommande(commande.noCommande) {
    Compteur::ajouterConstructeurCopie();
    for (int i = 0; i < 5; ++i) {
        quantiteProduits[i] = this->validerQuantite(commande.quantiteProduits[i]);
    }
}

Commande::~Commande() {
    Compteur::ajouterDestructeur();
}

int Commande::validerQuantite(int quantite) {
    if (quantite < 0) {
        return 0;
    } else if (quantite > 10) {
        return 10;
    }
    return quantite;
}


