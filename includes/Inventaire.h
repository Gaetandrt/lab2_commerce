#pragma once

#include <string>
#include <list>
#include "Produits/Produit.h"
#include "Produits/ProduitA.h"
#include "Produits/ProduitB.h"
#include "Produits/ProduitC.h"
#include "Produits/ProduitD.h"
#include "Produits/ProduitE.h"

class Inventaire
{
    public:
        Inventaire();
        Inventaire(const Inventaire &);
        ~Inventaire();

        inline void ajouterProduit(ProduitA *produit) { ajouterProduit(produit, 0); }
        inline void ajouterProduit(ProduitB *produit) { ajouterProduit(produit, 1); }
        inline void ajouterProduit(ProduitC *produit) { ajouterProduit(produit, 2); }
        inline void ajouterProduit(ProduitD *produit) { ajouterProduit(produit, 3); }
        inline void ajouterProduit(ProduitE *produit) { ajouterProduit(produit, 4); }

        inline Produit *recupererProduit(int idProduit) {
            Produit *produit = produits[idProduit].front();
            produits[idProduit].pop_front();
            return produit;
        }

    private:
        inline void ajouterProduit(Produit *produit, int idProduit) { produits[idProduit].push_back(produit); }
        std::list<Produit *> produits[5];
};
