#include <iostream>
#include "carre.h"

using namespace std;


carre::carre() :rectangle(1,1, point()){
};

carre::carre(double cote, point centre){
    this->cote = cote;
    this->centre = centre;
}

double carre::getCote() const{
    return this->cote;
}

void carre::setCote(double c){
    this->cote = c;
}

double carre::surface() const{
    return (this->cote * this->cote);
}

ostream& operator<<(ostream& s, const carre& c){
    s << "--- Attributs du carre ---" << endl;
    s << "Cote : " << c.getCote() << endl;
    s << "Surface : " << c.surface() << endl;
    s << "Perimetre : " << c.perimetre() <<endl;
    s << "------------------------------ " << endl;
    
    return s;
}
