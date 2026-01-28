#include <iostream>
#include "rectangle.h"
#include <cmath>

using namespace std;

double rectangle::getLargeur() const{
    return this->Largeur;
}

double rectangle::getLongueur() const{
    return this->Longueur;
}

void rectangle::setLargeur(double d){
    this->Largeur = d;
}

void rectangle::setLongueur(double d){
    this->Longueur = d;
}

rectangle::rectangle() : forme(){
    this->Largeur = 2;
    this->Longueur = 1;
}

rectangle::rectangle(double longueur, double largeur, point centre): forme(centre){
    this->Largeur = largeur;
    this->Longueur = longueur;
}

double rectangle::surface() const{
    return (this->Largeur * this->Longueur);
}

double rectangle::perimetre() const{
    return (2*(this->Longueur + this->Largeur));
}

ostream& operator<<(ostream& s, const rectangle& r){
    s << "--- Attributs du rectangle ---" << endl;
    s << "Longueur : " << r.getLongueur() << endl;
    s << "Largeur : " << r.getLargeur() << endl;
    s << "Surface : " << r.surface() << endl;
    s << "Perimetre : " << r.perimetre() <<endl;
    s << "------------------------------ " << endl;
    
    return s;
}