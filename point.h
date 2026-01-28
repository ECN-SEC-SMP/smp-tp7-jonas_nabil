#ifndef POINT.H
#define POINT.H

class point{

private:
    double x;
    double y;

public:
    double getX();
    double getY();


    void translater(point P);
    void translater(double x, double y);


    point();
    point(double x, double y);
    point(const point &P);

};

#endif