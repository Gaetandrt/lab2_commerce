#pragma once

#include <string>
#include "Produits/Produit.h"

class ProduitD : public Produit
{
    public:
        ProduitD();
        ProduitD(const ProduitD &);
        ~ProduitD();

        std::string getDescription() const;
};