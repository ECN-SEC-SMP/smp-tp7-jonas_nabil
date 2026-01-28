#ifndef POINT_H // Protection contre l'inclusion multiple
#define POINT_H

// Inclusions nécessaires (ex: string, vector...)
#include <string> 
#include <iostream>

class Point{
    private:
        double x;
        double y;
    public: 
        Point();
        Point(double _x, double _y);
        Point(Point const &a);

        ~Point();

        Point translater();
        Point translater(double _x, double _y);

        double getX();
        double getY();

        void setX(double x);
        void setY(double y);


};

#endif 