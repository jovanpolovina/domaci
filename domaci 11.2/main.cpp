#include <iostream>
#include <math.h>
using namespace std;

class JKK{
private:
    int a, b;
public:
    JKK(){
    a = 5;
    b = 10;
    }
    JKK(int a1, int b1){
    a = a1;
    b = b1;
    }
    int Obim(){
    return a+2*b;
    }
    int Povrsina(){
        float P = (a+b+b)/2*(b+b-a)/2*(a)/2*(a)/2;
    return sqrt(P);
    }
     int getA(){return a;}
    int getB(){return b;}
    void setA(int a1){a=a1;}
    void setB(int b1){b=b1;}
};

class Osoba{
private:
int dan, mesec, godina;
 public:
    int getDan(){return dan;}
   int getMesec(){return mesec;}
    int getGodina(){return godina;}
   void setDan(int d){dan = d;}
   void setMesec(int m){mesec = m;}
   void setGodina(int g){godina = g;}

   Osoba(){
   dan = 1;
   mesec = 1;
   godina = 2001;
   }
   Osoba(int d, int m, int g){
   dan = d;
   mesec = m;
   godina = g;
   }

   bool isValid(){
   if(dan>31 && mesec>12 && godina>2021-130){
    return false;
   }
   return true;
   }

};

int main()
{
   JKK trougao1;
   printf("%i\n",trougao1.getA());
   printf("%i\n",trougao1.getB());
   JKK trougao2(5,6);
   trougao2.setA(10);
   trougao2.setB(15);
   printf("%lf\n", trougao2.Povrsina());
   printf("%lf\n", trougao2.Obim());
   Osoba o1;
   o1.setDan(5);
   o1.setMesec(10);
   o1.setGodina(1990);
   printf("%i\n", o1.getDan());
   printf("%i\n", o1.getMesec());
   printf("%i\n", o1.getGodina());
   Osoba o2(5,9,2010);
   if(o2.isValid()){
    printf("Validan je datum za osobu o2\n");

   }
   else{
    printf("Nije validan datum za osobu o2\n");
   }
    return 0;
}
