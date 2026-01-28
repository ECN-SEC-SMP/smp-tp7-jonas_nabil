#ifndef CERCLE_H // Protection contre l'inclusion multiple
#define CERCLE_H

#include "forme.h"

using namespace std;

// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

class Cercle : public Forme{
    int r;
    public: 
        Cercle();
        ~Cercle();

        double perimetre() override;
        double surface() override;


};


#endif 