#include "point.h"
#include "forme.h"
#include <iostream>

using namespace std;
       
Forme::Forme(){
    Point p1;
}


Forme::~Forme(){
}


ostream& operator<<(ostream& os, const Forme& p) { // préciser que getX et Y sont const car sinon la fonction croit que 
    os << "x" <<endl; // getX et Y peuvent modifier p et donc accepte pas les fonctions.
    return os;
}

void Forme::operator+=(Forme p){
    this->p.translater(p.p.getX(), p.p.getY());
}