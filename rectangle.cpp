#include "rectangle.h"

// Constructeur par défaut
Rectangle::Rectangle(){
    this->l=0;
    this->h=0;
}

// Constructeur avec paramètres
Rectangle::Rectangle(int l, int h) {
    this->l = l;
    this->h = h;
}

// Destructeur
Rectangle::~Rectangle(){
    
}

// Accesseur pour la longueur
int Rectangle::getL() const{
    return this->l;
}

// Accesseur pour la hauteur
int Rectangle::getH() const{
    return this->h;
}

// Calcul du périmètre
double Rectangle::perimetre(){
    // Formule : 2 * (longueur + hauteur)
    return 2 * (this->h + this->l); 
}

// Calcul de la surface
double Rectangle::surface(){
    return this->h * this->l;
}

// Calcul de la boîte englobante (bounding box)
void Rectangle::getBornes(double& minX, double& maxX, double& minY, double& maxY) const {
    // On suppose que le point 'p' (hérité de Forme) est le CENTRE du rectangle.
    // Donc on va à gauche/droite de l/2 et en haut/bas de h/2.
    double halfL = this->l / 2.0;
    double halfH = this->h / 2.0;

    minX = this->p.getX() - halfL;
    maxX = this->p.getX() + halfL;
    minY = this->p.getY() - halfH;
    maxY = this->p.getY() + halfH;
}

// Surcharge de l'opérateur << pour afficher les infos du rectangle
ostream& operator<<(ostream&s,Rectangle const& r){
    s << "Position (" << r.p.getX() << "," << r.p.getY() << ") | Rectangle, longueur: " << r.getL() << " hauteur: " << r.getH() << endl;
    return s;
}