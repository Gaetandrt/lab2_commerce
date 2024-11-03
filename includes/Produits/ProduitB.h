#pragma once

#include <string>
#include "Produits/Produit.h"

class ProduitB : public Produit
{
    public:
        ProduitB();
        ProduitB(const ProduitB &);
        ~ProduitB();

        std::string getDescription() const;
};