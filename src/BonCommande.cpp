#include "BonCommande.h"
#include "Compteur.h"

BonCommande::BonCommande(int idBonCommande, Commande *commande)
{
    Compteur::ajouterConstructeur();

    for (int i = 0; i < 5; i++)
    {
        quantiteProduits[i] = 0;
    }
    this->idBonCommande = idBonCommande;
    this->commande = commande;
}

BonCommande::BonCommande(const BonCommande &bonCommande)
{
    Compteur::ajouterConstructeurCopie();

    for (int i = 0; i < 5; i++)
    {
        quantiteProduits[i] = bonCommande.quantiteProduits[i];
    }
    this->idBonCommande = bonCommande.idBonCommande;
    this->commande = bonCommande.commande;
}

BonCommande::~BonCommande()
{
    Compteur::ajouterDestructeur();
}

int BonCommande::getQuantiteProduits(int idProduit) const
{
    if (idProduit < 0 || idProduit > 4)
    {
        return 0;
    }

    return quantiteProduits[idProduit];
}

void BonCommande::ajouterProduits(int quantite, int idProduit)
{
    if (idProduit < 0 || idProduit > 4)
    {
        return;
    }

    quantiteProduits[idProduit] += quantite;
}

Commande *BonCommande::getCommande() const
{
    return commande;
}

int BonCommande::getIdBonCommande() const
{
    return idBonCommande;
}