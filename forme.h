#ifndef FORME_H // Protection contre l'inclusion multiple
#define FORME_H
#include "point.h"

using namespace std;

// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

// Classe abstraite Forme. C'est le modèle de base pour toutes les autres formes (Rectangle, Cercle...).
class Forme{
    protected:
        // Position de la forme (point d'ancrage). "protected" signifie que les classes filles peuvent y accéder directement.
        Point p;
    public: 
        // Constructeur
        Forme();
        
        // Destructeur
        ~Forme();

        // Méthodes virtuelles pures (= 0).
        // Cela rend la classe Forme "abstraite" : on ne peut pas créer d'objet Forme directement.
        // Chaque forme spécifique (Rectangle, Cercle) DOIT fournir sa propre version de ces fonctions.
        virtual double perimetre() = 0; // Calcul du périmètre
        virtual double surface() = 0;   // Calcul de la surface
        virtual void getBornes(double& minX, double& maxX, double& minY, double& maxY) const = 0; // Boîte englobante

        // Méthodes concrètes (non virtuelles pures) car elles sont communes à toutes les formes.
        // Elles déplacent simplement le point d'ancrage 'p'.
        void translater(double dx, double dy);
        void translater(const Point &p);

        // Surcharge pour ajouter une autre forme (probablement pour combiner des positions)
        void operator+=(const Forme &f);

        // Fonction amie pour l'affichage. "friend" permet à cet opérateur d'accéder aux membres privés/protégés de Forme.
        friend ostream& operator<<(ostream& s, const Forme& f);

};

#endif 