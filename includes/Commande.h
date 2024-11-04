#pragma once

#include <string>
#include <iostream>

class Commande
{
    public:
        Commande(int _noCommande, int _quantiteProduits[5]);
        Commande(const Commande &);
        ~Commande();

        int validerQuantite(int q);

        inline friend std::ostream &operator<<(std::ostream &flux, const Commande &commande) {
            std::string quantiteProduits = "";
            for (int i = 0; i < 5; ++i) {
                quantiteProduits += (" - Produit demande {" + std::to_string(i) + "} --> " + std::to_string(commande.quantiteProduits[i]) + "\n");
            }
            return flux << "----------------------------------------------\n"
                        << "COMMANDE\n"
                        << " No de commande : " << commande.noCommande << "\n"
                        << quantiteProduits
                        << "----------------------------------------------\n";
        }

        inline int getQuantiteProduit(int idProduit) const {
            if (idProduit < 0 || idProduit > 4) {
                return 0;
            }
            return quantiteProduits[idProduit];
        }
        inline int getNoCommande() const { return noCommande; }
    private:
        int noCommande;
        int quantiteProduits[5];
};
