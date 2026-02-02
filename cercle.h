#ifndef CERCLE_H // Protection contre l'inclusion multiple
#define CERCLE_H

#include "forme.h"

using namespace std;

// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

class Cercle : public Forme{
    private:
        int r;
    public: 
        Cercle();
        Cercle(int r);
        ~Cercle();

        double perimetre() override;
        double surface() override;

        int getR() const;

};

ostream& operator<<(ostream&s,Cercle const& c);

#endif 