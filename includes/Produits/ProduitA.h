#pragma once

#include <string>
#include "Produits/Produit.h"

class ProduitA : public Produit
{
    public:
        ProduitA();
        ProduitA(const ProduitA &);
        ~ProduitA();

        std::string getDescription() const;
};