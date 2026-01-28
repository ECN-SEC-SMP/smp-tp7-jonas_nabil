#include <iostream>
#include "point.h"
using namespace std;

double point::getX(){
    return this->x;
}
double point::getY(){
    return this->y;
}

void point::translater(point P){
    this->x += P.getX();
    this->y += P.getY();
}

void point::translater(double x, double y){
    this->x += x;
    this->y += y;
}

point::point(){
    this->x = 0;
    this->y = 0;
}

point::point(double x, double y){
    this->x = x;
    this->y = y;
}

point::point(const point &P){
    this->x = P.x;
    this->y = P.y;
}

void point::setX(double x){
    this->x = x;
}

void point::setY(double y){
    this->y = y;
}
