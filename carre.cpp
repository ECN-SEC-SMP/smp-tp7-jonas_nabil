#include <iostream>
#include "carre.h"

using namespace std;


carre::carre() :rectangle(1,1, point()){
};

carre::carre(double cote, point centre){
    this->cote = cote;
    this->centre = centre;
}

double carre::getCote(){
    return this->cote;
}

void carre::setCote(double c){
    this->cote = c;
}


