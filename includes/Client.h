#pragma once

#include <string>
#include "Commande.h"
#include "Reception.h"

class Client
{
    public:
        Client(std::string nom, int seuilQualite);
        Client(const Client &);
        ~Client();

        inline Commande getCommande(int id) const {
            return *commandesA2024[id];
        }
        inline Reception *getReception() const {
            return receptions;
        }
        inline int getSeuilQualite() const {
            return seuilQualite;
        }
        inline std::string getNom() const {
            return nom;
        }
        int getSatisfactionProduit(int idProduit) const;

        void preparerCommande2024();
        void recevoirCommande(Reception *reception);
        void consommerProduits();

        inline friend std::ostream &operator<<(std::ostream &os, const Client &client) {
            os << "----------------------------------------------" << std::endl
               << "CLIENT" << std::endl
               << " Nom : " << client.nom << std::endl
               << " Seuil de qualite : " << client.seuilQualite << std::endl
               << "----------------------------------------------" << std::endl;
            return os;
        }

    private:
        std::string nom;
        int seuilQualite;
        Commande *commandesA2024[4];
        Reception *receptions;


};
