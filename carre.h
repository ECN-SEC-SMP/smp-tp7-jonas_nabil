#ifndef CARRE
#define CARRE
#include "forme.h"
#include "rectangle.h"

class carre: protected rectangle {
    private:

    double cote;

    public:

    double getCote() const;
    void setCote(double c);

    carre();
    carre(double cote, point centre);

    double perimetre() const override;
    double surface() const override;

};

ostream &operator<<(ostream& s, carre& const c);


#endif