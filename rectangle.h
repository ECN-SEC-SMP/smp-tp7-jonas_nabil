#ifndef RECTANGLE
#define RECTANGLE
#include "forme.h"

class rectangle: public forme{

protected:

    double Largeur;
    double Longueur;

public :

    rectangle();
    rectangle(double longueur, double largeur, point centre);

    double getLargeur() const;
    double getLongueur() const;

    void setLargeur(double d);
    void setLongueur(double d);

    double perimetre() const override;
    double surface() const override;
};

ostream& operator<<(ostream& s, rectangle const &r);

#endif 