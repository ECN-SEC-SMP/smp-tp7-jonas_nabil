#ifndef CARRE
#define CARRE
#include "forme.h"
#include "rectangle.h"

class carre: protected rectangle {
    private:

    double cote;

    public:

    double getCote();
    void setCote(double c);

    carre();
    carre(double cote, point centre);


};

#endif