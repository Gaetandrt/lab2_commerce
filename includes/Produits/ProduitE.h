#pragma once

#include <string>
#include "Produits/Produit.h"

class ProduitE : public Produit
{
    public:
        ProduitE();
        ProduitE(const ProduitE &);
        ~ProduitE();

        std::string getDescription() const;
};