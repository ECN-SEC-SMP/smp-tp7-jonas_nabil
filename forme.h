#ifndef FORME
#define FORME
#include <iostream>
#include "point.h"
using namespace std;


class forme{

    point centre;

    forme(point centre);

    void perimetre();
    void surface();

};


#endif