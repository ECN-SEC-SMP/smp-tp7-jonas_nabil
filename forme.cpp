#include "point.h"
#include "forme.h"
#include <iostream>

using namespace std;
       
// Constructeur : crée un Point p1 (par défaut à 0,0) mais ne fait rien de plus.
Forme::Forme(){
    Point p1;
}


// Destructeur
Forme::~Forme(){
}


// Méthode translater avec coordonnées (dx, dy)
void Forme::translater(double dx, double dy) {
    // On délègue le travail à la méthode translater de l'objet Point 'p'
    this->p.translater(dx, dy);
}

// Méthode translater avec un Point p
void Forme::translater(const Point& p) {
    // Pareil, on délègue au point interne
    this->p.translater(p);
}

// Surcharge de l'opérateur d'affichage <<
ostream& operator<<(ostream& os, const Forme& f) { 
    // On peut maintenant accéder à f.p car on est "friend" dans le .h
    // Et on utilise getX() car x est privé dans Point
    os << "Position : (" << f.p.getX() << ", " << f.p.getY() << ")";
    return os;
}

// Surcharge de l'opérateur +=
void Forme::operator+=(const Forme& autreForme){
    // On récupère les coordonnées de l'autre forme
    double x_autre = autreForme.p.getX(); 
    double y_autre = autreForme.p.getY();

    // Et on déplace notre forme actuelle de ces valeurs
    this->p.translater(x_autre, y_autre);
}