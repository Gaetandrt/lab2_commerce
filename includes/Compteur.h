#pragma once

class Compteur
{
    public:
        static void ajouterConstructeur();
        static void ajouterConstructeurCopie();
        static void ajouterDestructeur();

        static int getNbConstructeurs();
        static int getNbConstructeursCopie();
        static int getNbDestructeurs();

    private:
        static int constructeur;
        static int constructeurCopie;
        static int destructeur;
};