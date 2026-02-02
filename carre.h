#ifndef CARRE_H // Protection contre l'inclusion multiple
#define CARRE_H



// Inclusions nécessaires
#include <string> 
#include <iostream>

#include "rectangle.h"

using namespace std;

// Classe Carré qui hérite de Rectangle.
// Un carré est un rectangle particulier où la longueur égale la hauteur.
class Carre : public Rectangle{
    protected:
        int c; // Côté du carré
 
    public: 
        // Constructeur par défaut
        Carre();
        // Constructeur avec taille du côté
        Carre(int c);
        // Destructeur
        ~Carre();

        // Réimplémentation des calculs (bien que Rectangle pourrait suffire, on le fait spécifiquement pour Carré)
        double perimetre() override;
        double surface() override;

        // Accesseur pour le côté
        int getC() const;

};

// Surcharge de l'opérateur d'affichage
ostream& operator<<(ostream&s,Carre const& c);


#endif 