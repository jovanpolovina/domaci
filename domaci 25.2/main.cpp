#include <iostream>
#include "Auto.h"
#include "XnaY.h"
using namespace std;

int main()
{
   XnaY s;
   s.setX(2);
   s.setY(1);
   printf("%i", s.getXnaY());
   XnaY e(s);
   e.setX_Y(5,7);
   printf("%i\n", e.getXnaY());
   XnaY q(4,3);
   printf("%i\n", q.getX());
   printf("%i\n", q.getY());
   Automobil a1;
   a1.upali();
   a1.ugasi();
   Automobil a2(manuelni, 5, plava, pokvaren, 5);
   if(!a2.upali())
   {
    printf("Auto je pokvaren!");

   }
   a2.popravi();
    if(!a2.upali())
   {
    printf("Auto je pokvaren!");

   }
   Automobil a3(a2);
   a3.povecajBrzinu();
   a3.smanjiBrzinu();
    return 0;
}
