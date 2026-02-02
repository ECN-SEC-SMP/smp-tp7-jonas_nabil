#include "carre.h"

Carre::Carre(){
    this->c = 0;
}

Carre::Carre(int c) : Rectangle(c, c) {
    this->c = c;
}

Carre::~Carre(){
    
}

int Carre::getC() const{
    return this->c;
}

double Carre::perimetre(){
    return this->c*4;
}

double Carre::surface(){
    return this->c*this->c;
}

ostream& operator<<(ostream&s,Carre const& c){
    s << dynamic_cast<const Forme&>(c) << " | Carré, côté: " << c.getC() << endl;
    return s;
}