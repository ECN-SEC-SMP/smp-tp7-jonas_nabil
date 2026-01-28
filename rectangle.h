#ifndef RECTANGLE
#define RECTANGLE
#include "forme.h"

class rectangle: public forme{

private:

    double Largeur;
    double Longueur;

public :

    rectangle();
    rectangle(double longueur, double largeur, point centre);

    double getLargeur();
    double getLongueur();

    void setLargeur(double d);
    void setLongueur(double d);

    double perimetre() const override;
    double surface() const override;


};


#endif 