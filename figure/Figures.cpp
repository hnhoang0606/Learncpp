#include "Figures.h"

void Poit2D :: Set(double Xo,double Yo)
{
    X = Xo; Y = Yo;
}
void  Poit2D ::Move(double dX,double dY){
    X += dX;
    Y += dY
}
void  Poit2D ::scale (double sX,double sY){
    x*=sX; Y *=sY;
}

void circle:: Set(double Xo,double Yo, double r)
{
    Center.Set(Xo,Yo);
    if (r<0) r=0;
    this -> Radius = r;
}
void circle::Move(double dX,double dY)
{
    Center.Move(dX,dY);
}
double circle::Area(){
    return PI*Radius *Radius 
}
double circle::Perimeter ()
{
    return 2*PI*Radius;
}

