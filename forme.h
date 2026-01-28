#ifndef FORME
#define FORME

#include <iostream>
#include "point.h"

using namespace std;

class forme {
protected: 
    point centre;

public:
    forme();
    forme(point p);
    
    virtual ~forme();

    virtual double perimetre() const = 0;
    virtual double surface() const = 0;

    void operator+=(const point &p);

    friend ostream& operator<<(std::ostream& s, const forme& f);
};

#endif