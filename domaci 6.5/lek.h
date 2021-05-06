#ifndef LEK_H_INCLUDED
#define LEK_H_INCLUDED
#include "artikal.h"
#include "dinstring.hpp"


class Lek: public Artikal{

private:
long int jkl;
DinString naziv;
double jedinicnaCena;
int kolicina;

public:
    Lek(){
    jkl = 0;
    naziv = new Dinstring("Brufen");
    jedinicnaCena = 5,85;
    kolicina = 5;
    }
    Lek(long int jk, char n[], double j, int k){
    jkl = jk;
    naziv = new Dinstring(n);
    jedinicnaCena = j;
    kolicina = k;
    }
    Lek(long int jk, Dinstring n, double j, int k){
    jkl = jk;
    naziv = new Dinstring(n);
    jedinicnaCena = j;
    kolicina = k;
    }
    Lek(const Lek & l){
    jkl = l.jkl;
    naziv = l.naziv;
    jedinicnaCena = l.jedinicnaCena;
    kolicina = l.kolicina;
    }
   double cena(){
       return jedinicnaCena*kolicina;
   }
   void ispis(){
   cout<<"JKL: "<<jkl<<endl<<"Naziv: "<<naziv<<endl<<"Jedinicna cena: "<<jedinicnaCena
   <<"Kolicina: "<<kolicina<<endl<<"Cena: "<<cena()<<endl;
   }
};


#endif // LEK_H_INCLUDED
