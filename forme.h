#ifndef FORME
#define FORME
#include <iostream>
#include "point.h"
using namespace std;


class forme{
    private :
    
    point centre;

    public :
    ~forme();
    forme(point centre);

    void perimetre();
    void surface();

};


#endif