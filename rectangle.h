#ifndef RECTANGLE_H // Protection contre l'inclusion multiple
#define RECTANGLE_H

#include "forme.h"

using namespace std;

// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

class Rectangle : public Forme{
    protected :
        int l;
        int h;

    public: 
        Rectangle();
        Rectangle(int l, int h);
        ~Rectangle();

        double perimetre() override;
        double surface() override;
        void getBornes(double& minX, double& maxX, double& minY, double& maxY) const override;

        int getL() const;
        int getH() const;

        friend ostream& operator<<(ostream&s,Rectangle const& r);
};




#endif 