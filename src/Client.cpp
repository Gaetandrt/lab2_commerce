#include "Client.h"
#include "Compteur.h"

Client::Client(std::string nom, int seuilQualite) : nom(nom), seuilQualite(seuilQualite), receptions(nullptr)
{
    Compteur::ajouterConstructeur();
    preparerCommande2024();
}

Client::Client(const Client &client) : nom(client.nom), seuilQualite(client.seuilQualite)
{
    Compteur::ajouterConstructeurCopie();

    for (int i = 0; i < 4; i++)
    {
        commandesA2024[i] = new Commande(*client.commandesA2024[i]);
    }
    receptions = nullptr;
}

Client::~Client()
{
    Compteur::ajouterDestructeur();

    for (int i = 0; i < 4; i++)
    {
        delete commandesA2024[i];
    }
}

void Client::recevoirCommande(Reception *reception)
{
    receptions = reception;
}

void Client::consommerProduits()
{
    delete receptions;
}

int Client::getSatisfactionProduit(int idProduit) const
{
    if (!receptions) {
        return 0;
    }

    std::list<Produit *> produits = receptions->getProduits(idProduit);
    int total = 0;

    for (Produit *produit : produits) {
        if (produit->evaluerQualite() > seuilQualite) {
            total += 5;
        }
        else if (produit->evaluerQualite() == seuilQualite) {
            total += 4;
        }
        else {
            total += 3;
        }
    }

    if (total == 0) {
        return 0;
    }

    return total / produits.size();
}

void Client::preparerCommande2024()
{
    int quantites[4][5] = {
        {3, 3, 3, 3, 3},
        {5, 3, 3, 3, 10},
        {-1, 0, 5, 5, 4},
        {1, 2, 12, 0, 0}
    };

    for (int i = 0; i < 4; i++) {
        commandesA2024[i] = new Commande(2024, quantites[i]);
    }
}
