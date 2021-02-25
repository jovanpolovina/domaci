#ifndef XNAY_H_INCLUDED
#define XNAY_H_INCLUDED
#include <math.h>
class XnaY{

private:
    int X, Y;

public:
   XnaY(){
   X = 1;
   Y = 1;
   }
XnaY(int x, int y){
X = x, Y = y;
}
XnaY(const XnaY & e){
X = e.X;
Y = e.Y;
}
void setX(int x){X = x;}
void setY(int y){Y = y;}
void setX_Y(int x, int y){ X = x; Y = y;}
int getX()const {return X;}
int getY()const{return Y;}
int getXnaY(){return pow(X,Y);}

};



#endif // XNAY_H_INCLUDED
