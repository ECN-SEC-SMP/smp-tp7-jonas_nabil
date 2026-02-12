#include "carre.h"

// Constructeur par défaut
Carre::Carre(){
    this->c = 0;
}

// Constructeur avec paramétre (taille du côté)
// On appelle le constructeur de Rectangle avec (c, c) car un carré est un rectangle de côté c x c
Carre::Carre(int c) : Rectangle(c, c) {
    this->c = c;
}

// Destructeur
Carre::~Carre(){
    
}

// Accesseur pour le côté
int Carre::getC() const{
    return this->c;
}

// Calcul du périmètre : côté * 4
double Carre::perimetre(){
    return this->c * 4;
}

// Calcul de la surface : côté * côté
double Carre::surface(){
    return this->c * this->c;
}

// Surcharge de l'opérateur <<
ostream& operator<<(ostream&s,Carre const& c){
    // On peut utiliser le cast vers Forme pour afficher la partie "Position" gérée par Forme
    s << dynamic_cast<const Forme&>(c) << " | Carré, côté: " << c.getC() << endl;
    return s;
}