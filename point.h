#ifndef POINT_H // Protection contre l'inclusion multiple
#define POINT_H

using namespace std;

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

        void translater(Point p);
        void translater(double _x, double _y);

        double getX() const; // ne modifie pas les valeur donc const
        double getY() const;

        

        void setX(double x);
        void setY(double y);

        

};

ostream& operator<<(ostream&s,Point const& c);

#endif 