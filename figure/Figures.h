#ifndef _FIGURES_H 
#define _FIGURES_H 

class Point2D 
{   
    double X,Y;
        public:
             void Set(double Xo,double Yo);
             void Move(double dX,double dY);
             void scale (double sX,double sY)

};
class circle
{
    Point2D center;
    double Radius;
    public:
        void Set(double Xo,double Yo, double r);
        void Move(double dX,double dY,);
        double Area();
        double Perimeter ();
};
