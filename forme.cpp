#include "point.h"
#include "forme.h"
#include <iostream>

using namespace std;
       
Forme::Forme(){
    Point p1;
}


Forme::~Forme(){
}


void Forme::translater(double dx, double dy) {
    this->p.translater(dx, dy);
}

void Forme::translater(const Point& p) {
    this->p.translater(p);
}

ostream& operator<<(ostream& os, const Forme& f) { 
    // On peut maintenant accéder à f.p car on est "friend"
    // Et on utilise getX() car x est privé dans Point
    os << "Position : (" << f.p.getX() << ", " << f.p.getY() << ")";
    return os;
}

void Forme::operator+=(const Forme& autreForme){
    // On accède à 'p' (autorisé car on est dans Forme)
    // Puis on utilise getX() (autorisé car public dans Point)
    double x_autre = autreForme.p.getX(); 
    double y_autre = autreForme.p.getY();

    this->p.translater(x_autre, y_autre);
}