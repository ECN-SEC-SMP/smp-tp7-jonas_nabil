#ifndef POINT
#define POINT

class point{

private:
    double x;
    double y;

public:
    double getX();
    double getY();

    void setX(double x);
    void setY(double y);

    void translater(point P);
    void translater(double x, double y);

    bool egal(const point &P);

    point();
    point(double x, double y);
    point(const point &P);

};



#endif