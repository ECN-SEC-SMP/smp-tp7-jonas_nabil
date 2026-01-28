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

point::point(){
    this->x = 0;
    this->y = 0;
}