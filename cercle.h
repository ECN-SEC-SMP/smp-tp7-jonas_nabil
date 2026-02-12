#ifndef CERCLE_H // Protection contre l'inclusion multiple
#define CERCLE_H

#include "forme.h"

using namespace std;

// Inclusions nécessaires
#include <string> 
#include <iostream>

// Classe Cercle qui hérite de Forme.
// Un cercle est défini par son centre (hérité de Forme) et son rayon.
class Cercle : public Forme{
    private:
        int r; // Rayon du cercle
    public: 
        // Constructeurs
        Cercle();
        Cercle(int r);
        // Destructeur
        ~Cercle();

        // Implémentation des méthodes virtuelles de Forme
        double perimetre() override;
        double surface() override;
        
        // Calcul des bornes pour la boîte englobante (carré circonscrit pour un cercle)
        void getBornes(double& minX, double& maxX, double& minY, double& maxY) const override;

        // Accesseur pour le rayon
        int getR() const;

};

// Surcharge de l'opérateur d'affichage
ostream& operator<<(ostream&s,Cercle const& c);

#endif 