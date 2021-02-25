#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED

enum tip{manuelni, automatski};
class Menjac{
private:
int brzine;
tip t;
public:
    Menjac(){
    t = manuelni;
    brzine = 3;
    }
    Menjac(tip tt, int b){
    t = tt;
    brzine = b;
    }
    Menjac(const Menjac & m){
    t = m.t;
    brzine = m.brzine;
    }
    int getBrzine() const{return brzine;}
    tip getT()const{return t;}
    void setBrzine(int b){brzine = b;}
    void setT(tip tt){t = tt;}
};

enum boja {plava, crvena, zelena};
class Skoljka{

private:
boja b;

public:
    Skoljka(){
    b = plava;
    }
    Skoljka(boja bb){
    b = bb;
    }
    Skoljka(const Skoljka & s){
    b = s.b;
    }
    boja getB()const{return b;}
    void setB(boja bb){b = bb;}
};
enum Stanje{ugasen, upaljen, pokvaren};
class Automobil{
private:
Menjac* m;
Skoljka* s;
Stanje stanje;
unsigned int brzina;
public:
    Automobil(){
    m = new Menjac();
    s = new Skoljka();
    stanje = ugasen;
    brzina = 0;
    }
    Automobil(tip tt, int b, boja bb, Stanje ss, unsigned int br){
    m = new Menjac(tt, b);
    s = new Skoljka(bb);
    stanje = ss;
    brzina = br;
    }
    Automobil(const Automobil & a){
    m = new Menjac(*(a.m));
    s = new Skoljka(*(a.s));
    brzina = a.brzina;
    stanje = a.stanje;
    }

    bool upali(){
        if(stanje != ugasen){
            return false;
        }
    stanje = upaljen;
    return true;
    }
    bool ugasi(){
    if(stanje != upaljen){
        return false;
    }
    stanje = ugasen;
    brzina = 0;
    return true;
    }
    bool pokvari(){

        stanje = pokvaren;
    brzina = 0;
        }
        bool popravi(){
       if(stanje!=pokvaren){
        return false;
       }
       stanje = ugasen;
       return true;

        }
        bool povecajBrzinu(){
        if(stanje != upaljen){
            return false;
        }
        if(brzina+1>m->getBrzine()){
            return false;
        }
        brzina += 1;
        return true;
        }
        bool smanjiBrzinu(){
        if(stanje!=upaljen || brzina-1<0){
            return false;
        }
        brzina-=1;
        return true;
        }
};


#endif // AUTO_H_INCLUDED
