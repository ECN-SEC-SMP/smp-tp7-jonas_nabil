#include "point.h"
#include <iostream>

using namespace std;
       
Point::Point(){
    this->x = 0;
    this->y = 0;
}
Point::Point(double _x, double _y){
    this->x = _x,
    this->y = _y;
}
Point::Point(Point const &a){
    this->x = a.x;
    this->y = a.y;
}

Point::~Point(){
}



void Point::translater(Point p){
    this->x = p.x;
    this->y = p.y;
}
void Point::translater(double _x, double _y){
    this->x = _x;
    this->y = _y;
}


double Point::getX(){
    cout << "x : " << this->x << endl;
    return this->x;
}
double Point::getY(){
     cout << "y : " << this->y << endl;
    return this->y;
}

void Point::setX(double x){
    this->x = x; // le this permet de savoir que on assigne au x de la class
}
void Point::setY(double y){
    this->y = y;
}