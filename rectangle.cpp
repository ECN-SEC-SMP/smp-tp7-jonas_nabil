#include "rectangle.h"

Rectangle::Rectangle(){
    this->l=0;
    this->h=0;
}

Rectangle::Rectangle(int l, int h) {
    this->l = l;
    this->h = h;
}

Rectangle::~Rectangle(){
    
}

int Rectangle::getL() const{
    return this->l;
}

int Rectangle::getH() const{
    return this->h;
}

double Rectangle::perimetre(){
    return (this->h+this->l)/2;
}

double Rectangle::surface(){
    return this->h*this->l;
}

void Rectangle::getBornes(double& minX, double& maxX, double& minY, double& maxY) const {
    double halfL = this->l / 2.0;
    double halfH = this->h / 2.0;
    minX = this->p.getX() - halfL;
    maxX = this->p.getX() + halfL;
    minY = this->p.getY() - halfH;
    maxY = this->p.getY() + halfH;
}

ostream& operator<<(ostream&s,Rectangle const& r){
    s << "Position (" << r.p.getX() << "," << r.p.getY() << ") | Rectangle, longueur: " << r.getL() << " hauteur: " << r.getH() << endl;
    return s;
}