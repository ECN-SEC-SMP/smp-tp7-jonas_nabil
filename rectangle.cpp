#include <iostream>
#include "rectangle.h"
#include <cmath>

using namespace std;

double rectangle::getLargeur(){
    return this->Largeur;
}

double rectangle::getLongueur(){
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