#pragma once

#include <string>

class Composant
{
    public:
        Composant(std::string _nom = "", int _poids = 0, int _qualite = 0, int _prix = 0);
        Composant(const Composant &);
        virtual ~Composant();

        inline std::string getNom() const
        {
            return nom;
        }

        inline int getPoids() const
        {
            return poids;
        }

        inline int getQualite() const
        {
            return qualite;
        }

        inline int getPrix() const
        {
            return prix;
        }

    private:
        std::string nom;
        int poids;
        int qualite;
        int prix;
};