#include "cercle.h"
#define PI 3.14

// Constructeur par défaut : rayon 0
Cercle::Cercle(){
    this->r=0;
}

// Constructeur avec rayon
Cercle::Cercle(int r) {
    this->r = r;
}

// Destructeur
Cercle::~Cercle(){

}

// Accesseur pour le rayon
int Cercle::getR() const{
    return this->r;
}

// Calcul du périmètre (circonférence) : 2 * PI * r
double Cercle::perimetre(){
    return PI * this->r * 2;
}

// Calcul de la surface (aire) : PI * r * r
double Cercle::surface(){
    return PI * r * r;
}

// Boîte englobante
void Cercle::getBornes(double& minX, double& maxX, double& minY, double& maxY) const {
    // Le centre est en p (x,y). On ajoute/enlève le rayon pour trouver les bornes.
    minX = this->p.getX() - this->r;
    maxX = this->p.getX() + this->r;
    minY = this->p.getY() - this->r;
    maxY = this->p.getY() + this->r;
}

// Surcharge de l'opérateur <<
ostream& operator<<(ostream&s,Cercle const& c){
    // On affiche la position (via cast Forme) et le rayon
    s << dynamic_cast<const Forme&>(c) << " | Cercle, rayon: " << c.getR() << endl;
    return s;
}