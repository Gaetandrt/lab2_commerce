#include <iostream>
#include "Compteur.h"

void afficherInformation();
void commerce();
void testComposants();
void testProduits();
void testCommandes();
void testInventaire();
void testFournisseur();
void testEntrepot();
void testBonCommande();
void testReception();

int main()
{
    // testComposants();
    // testProduits();
    // testCommandes();
    // testInventaire();
    // testFournisseur();
    // testEntrepot();
    // testBonCommande();
    testReception();
    // commerce();
    afficherInformation();
    return 0;
}

void afficherInformation()
{
    std::cout << std::endl << std::endl;
    std::cout << std::endl
         << "-------------------------------" << std::endl
         << " NB constructeurs : " << Compteur::getNbConstructeurs() << std::endl
         << " NB constructeurs copie : " << Compteur::getNbConstructeursCopie() << std::endl
         << " NB destructeurs : " << Compteur::getNbDestructeurs()
         << std::endl;
    std::cin.get();
}

void commerce()
{
}