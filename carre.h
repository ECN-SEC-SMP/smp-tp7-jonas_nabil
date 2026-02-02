#ifndef CARRE_H // Protection contre l'inclusion multiple
#define CARRE_H


// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

#include "rectangle.h"

using namespace std;



class Carre : public Rectangle{
    protected:
        int c;
 
    public: 
        Carre();
        Carre(int c);
        ~Carre();

        double perimetre() override;
        double surface() override;

        int getC() const;

};

ostream& operator<<(ostream&s,Carre const& c);


#endif 