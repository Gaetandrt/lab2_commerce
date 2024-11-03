#include "Commande.h"
#include <iostream>

using namespace std;

void testCommandes()
{
    int quantites[5] = {2, 4, 6, 8, 10};
    Commande *c1 = new Commande(12345, quantites);
    Commande cc(*c1);
    int quantites2[5] = {-2, 0, 6, 18, 10093498};
    Commande c2(67890, quantites2);
    cout << *c1 << endl;
    cout << cc << endl;
    cout << c2 << endl;
    cout << c2.getNoCommande() << "/" << c2.getQuantiteProduit(3) << endl;
    delete c1;
}