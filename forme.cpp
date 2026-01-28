#include <iostream>
#include "point.h"
#include "forme.h"
using namespace std;

forme::forme(point p){
    this->centre = p;
};

forme::forme(){
    this->centre.setX(0);
    this->centre.setY(0);
}

