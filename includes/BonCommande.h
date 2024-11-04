#pragma once

#include <string>
#include "Commande.h"

class BonCommande
{
    public:
        BonCommande(int idBonCommande, Commande *commande   );
        BonCommande(const BonCommande &);
        ~BonCommande();

        void ajouterProduits(int quantite, int idProduit);
        int getQuantiteProduits(int idProduit) const;
        Commande *getCommande() const;
        int getIdBonCommande() const;

        inline friend std::ostream &operator<<(std::ostream &os, const BonCommande &bonCommande)
        {
            std::string quantiteProduits;
            for (int i = 0; i < 5; i++)
            {
                quantiteProduits += " - Produit {" + std::to_string(i) + "} --> {commande:" + std::to_string(bonCommande.commande->getQuantiteProduit(i)) + "/recu:" + std::to_string(bonCommande.getQuantiteProduits(i)) + "}\n";
            }
            os << "----------------------------------------------" << std::endl
               << "BON DE COMMANDE" << std::endl
               << " Bon de commande : " << bonCommande.idBonCommande << std::endl
               << " No de commande : " << bonCommande.commande->getNoCommande() << std::endl
               << quantiteProduits << std::endl;
            return os;
        }

    private:
        int idBonCommande;
        int quantiteProduits[5];
        Commande *commande;
};