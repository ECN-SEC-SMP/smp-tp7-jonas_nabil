#ifndef CERCLE
#define CERCLE
#include "forme.h"
#include "point.h"

class cercle: public forme {

private :

    double R;

public :

    double getR() const;

    void setR(double R);
    
    cercle();
    cercle(double R, point C);

    double perimetre() const override;
    double surface() const override;

};
ostream& operator<<(ostream &s, const cercle &cercle);

#endif 