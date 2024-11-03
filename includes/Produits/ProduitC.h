#pragma once

#include <string>
#include "Produits/Produit.h"

class ProduitC : public Produit
{
    public:
        ProduitC();
        ProduitC(const ProduitC &);
        ~ProduitC();

        std::string getDescription() const;
};