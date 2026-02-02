#include "point.h"
#include <iostream>

using namespace std;
       
// Constructeur par défaut
Point::Point(){
    this->x = 0; // On initialise x à 0
    this->y = 0; // On initialise y à 0
}

// Constructeur avec paramètres
Point::Point(double _x, double _y){
    this->x = _x; // On affecte la valeur _x donnée à l'attribut x de l'objet
    this->y = _y; // Pareil pour y
}

// Constructeur de copie
Point::Point(Point const &a){
    this->x = a.x; // On prend le x de l'autre point 'a'
    this->y = a.y; // Et son y
}

// Destructeur
Point::~Point(){
    // Rien à faire ici car on n'a pas utilisé d'allocation dynamique (new)
}



// Méthode pour translater (déplacer) le point avec un autre Point
void Point::translater(Point p){
    this->x = p.x; // Attention: Ici ça remplace les coordonnées, ça ne les ajoute pas ! (d'après le code existant)
    this->y = p.y;
}

// Surcharge de la méthode translater avec deux doubles
void Point::translater(double _x, double _y){
    this->x = _x; // Idem, ça remplace les coordonnées
    this->y = _y;
}


// Accesseur pour X
double Point::getX() const{
    
    return this->x;
}
// Accesseur pour Y
double Point::getY() const{
    
    return this->y;
}

// Mutateur pour X
void Point::setX(double x){
    this->x = x; // le "this->" permet de préciser qu'on parle de l'attribut de la classe, pas du paramètre
}
// Mutateur pour Y
void Point::setY(double y){
    this->y = y;
}

// Surcharge de l'opérateur d'affichage <<
ostream& operator<<(ostream& os, const Point& p) { // On précise que p est const
    // On affiche les coordonnées x et y. On utilise getX() et getY() qui doivent être const.
    os << "x: " <<p.getX()<< " y: " << p.getY() << endl; 
    return os;
}

// Surcharge de l'opérateur +=
void Point::operator+=(Point p){
    this->x += p.x; // On ajoute le x de p à notre x
    this->y += p.y; // Et pareil pour y
}