#include <iostream>
#include "cercle.h"
#include <cmath>

cercle::cercle(double R, point C) :forme(C){
    this->R = R;
};

cercle::cercle(): forme(){
    this->R = 1;
}

double cercle::surface() const{
    return (M_PI*pow(this->R,2)); 
}

double cercle::perimetre() const{
    return (2*M_PI*(this->R));
}

void cercle::setR(double R){
    this->R = R;
}

double cercle::getR() const {
    return this->R;
}

ostream& operator<<(ostream& s, const cercle &cercle){
    s << "--- Attributs du cercle ---" << endl;
    s << "Rayon : " << cercle.getR() << endl;
    s << "Surface : " << cercle.surface() << endl;
    s << "Perimetre : " << cercle.perimetre() <<endl;
    s << "------------------------------ " <<endl;
    return s;
}