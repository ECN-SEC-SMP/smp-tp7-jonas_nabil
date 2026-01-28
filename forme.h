#ifndef FORME_H // Protection contre l'inclusion multiple
#define FORME_H
#include "point.h"

using namespace std;

// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

class Forme{
    protected:
        Point p;
    public: 
        Forme();
        
        ~Forme();

        virtual double perimetre() = 0;
        virtual double surface() = 0;

        void operator+=(Forme f);

};

ostream& operator<<(ostream&s,Forme const& f);

#endif 