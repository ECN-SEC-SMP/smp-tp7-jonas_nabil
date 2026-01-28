#include "cercle.h"
#define PI 3.14

double Cercle::perimetre(){
    return PI*this->r*2;
}

double Cercle::surface(){
    return PI*r*r;
}