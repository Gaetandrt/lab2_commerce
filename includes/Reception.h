#pragma once

#include <string>
#include <list>
#include "Produits/Produit.h"
#include "BonCommande.h"

class Reception
{
    public:
        Reception(BonCommande *bonCommande);
        Reception(const Reception &) = delete;
        ~Reception();

        void ajouterProduit(Produit *produit, int idProduit);

        Commande *getCommande() const;
        int getQuantiteProduitsRecus(int idProduit) const;
        std::list<Produit *> getProduits(int idProduit) const;

        inline friend std::ostream &operator<<(std::ostream &os, const Reception &reception)
        {
            std::string receiveds = "";

            for (int i = 0; i < 5; i++)
            {
                for (Produit *produit : reception.getProduits(i))
                {
                    receiveds += " - Produit recu --> " + produit->getNom() + " {" + produit->getDescription() + "} --> Poids:" + std::to_string(produit->calculerPoids()) + "/prix:" + std::to_string(produit->calculerPrix()) + "\n";
                }
            }

            os << "----------------------------------------" << std::endl
               << "RECEPTION" << std::endl
               << " Bon de commande : " << std::to_string(reception.bonCommande->getIdBonCommande()) << std::endl
               << receiveds
               << "----------------------------------------" << std::endl;
            return os;
        }

    private:
        std::list<Produit *> produits[5];
        BonCommande *bonCommande;
};
