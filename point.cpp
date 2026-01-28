#include "point.h"
#include <iostream>

using namespace std;

double Point::getX(){
    cout << "x : " << this->x << endl;
    return this->x;
}
double Point::getY(){
     cout << "y : " << this->x << endl;
    return this->y;
}

void Point::setX(double x){
    this->x = x; // le this permet de savoir que on assigne au x de la class
}
void Point::setY(double y){
    this->y = y;
}