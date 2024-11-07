#include <iostream>
#include "Compteur.h"
#include "Entreprise.h"
#include "RapportAssuranceQualite.h"

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
void testClient();

int main()
{
    // testComposants();
    // testProduits();
    // testCommandes();
    // testInventaire();
    // testFournisseur();
    // testEntrepot();
    // testBonCommande();
    //testReception();
    // testClient();

    commerce();
    afficherInformation();
    system("leaks main");
    return 0;
}

void afficherInformation()
{
    std::cout << std::endl << std::endl;
    std::cout << std::endl
              << "----------------------------------------------" << std::endl
              << " NB constructeurs : " << Compteur::getNbConstructeurs() << std::endl
              << " NB constructeurs copie : " << Compteur::getNbConstructeursCopie() << std::endl
              << " NB destructeurs : " << Compteur::getNbDestructeurs()
              << std::endl;
    std::cin.get();
}

void commerce()
{
    Entreprise entreprise;
    Client client("ROGER", 90);
    cout << client << endl;
    for (int x = 0; x < 4; x++)
    {
        Commande commande(client.getCommande(x));
        cout << commande << endl;
        BonCommande *bonCommande = entreprise.traiterCommande(commande);
        cout << *bonCommande << endl;
        Reception *reception =
            entreprise.recupererCommande(bonCommande);
        cout << *reception << endl;
        client.recevoirCommande(reception);
        RapportAssuranceQualite aq;
        entreprise.validerSatisfaction(aq, client);
        cout << aq.genererRapport(client) << endl;
        client.consommerProduits();
    }
}
