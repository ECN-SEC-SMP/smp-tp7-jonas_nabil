#include "cercle.h"
#define PI 3.14

Cercle::Cercle(){
    this->r=0;
}

Cercle::Cercle(int r) {
    this->r = r;
}

Cercle::~Cercle(){

}

int Cercle::getR() const{
    return this->r;
}

double Cercle::perimetre(){
    return PI*this->r*2;
}

double Cercle::surface(){
    return PI*r*r;
}

void Cercle::getBornes(double& minX, double& maxX, double& minY, double& maxY) const {
    minX = this->p.getX() - this->r;
    maxX = this->p.getX() + this->r;
    minY = this->p.getY() - this->r;
    maxY = this->p.getY() + this->r;
}

ostream& operator<<(ostream&s,Cercle const& c){
    s << dynamic_cast<const Forme&>(c) << " | Cercle, rayon: " << c.getR() << endl;
    return s;
}