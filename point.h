#ifndef POINT
#define POINT

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


    point();
    point(double x, double y);
    point(const point &P);

};

ostream &operator<<(ostream &s , point const &P){
    s << "("<<P.getX() << "," << P.getY() <<")" << endl;
    return s;
};



#endif