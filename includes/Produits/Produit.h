#pragma once

#include <string>
#include <list>
#include "Composants/Composant.h"
#include <iostream>

class Produit
{
    public:
        Produit(std::string _nom);
        Produit(const Produit &);
        virtual ~Produit();

        int calculerPoids() const;
        int calculerPrix() const;
        void ajouterComposant(Composant *composant);
        int evaluerQualite() const;

        inline std::string getNom() const { return nom; }
        virtual std::string getDescription() const { return ""; }

        inline friend std::ostream &operator<<(std::ostream &flux, const Produit &produit) {
            return flux << produit.nom << " {" << produit.getDescription() << "} --> Poids:" << produit.calculerPoids() << "/Prix:" << produit.calculerPrix();
        }

    private:
        std::string nom;

    protected:
        std::list<Composant *> composants;
};