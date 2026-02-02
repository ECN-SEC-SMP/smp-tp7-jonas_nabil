#ifndef RECTANGLE_H // Protection contre l'inclusion multiple
#define RECTANGLE_H

#include "forme.h"

using namespace std;

// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

// Classe Rectangle qui hérite de Forme.
// Un rectangle est défini par sa position (héritée de Forme) et ses dimensions (largeur, hauteur).
class Rectangle : public Forme{
    protected :
        int l; // Longueur (ou largeur)
        int h; // Hauteur

    public: 
        // Constructeur par défaut
        Rectangle();
        // Constructeur avec dimensions
        Rectangle(int l, int h);
        // Destructeur
        ~Rectangle();

        // Implémentation des méthodes virtuelles de Forme
        double perimetre() override;
        double surface() override;
        
        // Calcul des bornes (minX, maxX, minY, maxY) pour la boîte englobante.
        void getBornes(double& minX, double& maxX, double& minY, double& maxY) const override;

        // Accesseurs
        int getL() const;
        int getH() const;

        // Fonction amie pour l'affichage
        friend ostream& operator<<(ostream&s,Rectangle const& r);
};

#endif 