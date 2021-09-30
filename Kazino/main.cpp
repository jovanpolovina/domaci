#include <iostream>

using namespace std;

int main()
{
   class Tiket{
   private:
       int uplata;
       bool dobitak;
       double DonjaKvota;
       double GornjaKvota;
       dobitak=uplata*DonjaKvota || dobitak=uplata*GornjaKvota;
   public:
    uplata=100;
    DonjaKvota=1.5;
    GornjaKvota=2.2;



   };
    return 0;
#ifndef TOKEN_H_INCLUDED
#define TOKEN_H_INCLUDED

enum Vrednost {1000, 10000, 100000, 1000000};

class Token{
private:
Vrednost vrednost;
public:
    Token(){

    vrednost = 1000;
    }
    Token(const Vrednost v){

    Vrednost = v;
    }
    Token(const Token & p):{

    Vrednost = p.V;
    }


    Vrednost getVrsta()const{return vrednost;}

    void setVrsta(Vrednost v){vrednost = v;}

}
}
class Bingo{
private:
    string nagrada;
    radnom kombinacija;
    bool dobitak;
    int tacnaKombinacija=2345;
public:
    Bingo(){
    nagrada = "Jugo";
    kombinacija = 1234;
    bool false;

    }

};
class Tocak{
private:
    int uplata;
    int polje1=uplata;
    int polje2=0;
    int polje3=uplata*10;
    int polje4=uplata*(-2);
};
