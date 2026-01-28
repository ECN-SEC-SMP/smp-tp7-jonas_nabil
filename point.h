using namespace std;
#ifndef POINT
#define POINT
#include <iostream>

class point{

private:
    double x;
    double y;

public:
    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);

    void translater(point P);
    void translater(double x, double y);
    void operator+=(const point &P);

    ~point();
    point();
    point(double x, double y);
    point(const point &P);

    

};

ostream &operator<<(ostream &s ,const point &P);

#endif