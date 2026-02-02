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
        virtual void getBornes(double& minX, double& maxX, double& minY, double& maxY) const = 0;

        void translater(double dx, double dy);
        void translater(const Point &p);

        void operator+=(const Forme &f);

        friend ostream& operator<<(ostream& s, const Forme& f);

};



#endif 