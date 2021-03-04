#include <iostream>

using namespace std;

enum StanjeTelevizora{UKLJUCEN, ISKLJUCEN, POKVAREN};
class Televizor{
private:
StanjeTelevizora stanjeTelevizora;
int zvuk;
int kanal;

public:
    Televizor(){
    stanjeTelevizora = ISKLJUCEN;
    zvuk = 0;
    kanal= 1;
    }
    Televizor(const Televizor & t){
    stanjeTelevizora = t.stanjeTelevizora;
zvuk = t.zvuk;
  kanal = t.kanal;
    }

    bool ukljuci(){
        if(stanjeTelevizora == UKLJUCEN)
            return false;
    stanjeTelevizora = UKLJUCEN;
    return true;
    }
    bool iskljuci(){
    if(stanjeTelevizora == ISKLJUCEN)
        return false;
    kanal = 1;
    zvuk = 0;
    stanjeTelevizora = ISKLJUCEN;
    return true;
    }
    bool pokvari(){
    if(stanjeTelevizora == POKVAREN)
        return false;
    kanal = 1;
    zvuk = 0;
    stanjeTelevizora = POKVAREN;
    return true;
    }
    bool popravi(){
    if(stanjeTelevizora!=POKVAREN)
        return false;
    stanjeTelevizora = ISKLJUCEN;
    return true;
    }
    bool pojacajZvuk(){
    if(zvuk==20)
        return false;
    zvuk +=1;
    return true;
    }
    bool smanjiZvuk(){
    if(zvuk==0)
        return false;
    zvuk -= 1;
    return true;
    }
    bool sledeciKanal(){
    if(kanal== 5)
        return false;
    kanal += 1;
    return true;
    }
    bool prethodniKanal(){
    if(kanal == 1)
        return false;
    kanal -=1;
    return true;
    }

    StanjeTelevizora getStanje() const {return stanjeTelevizora;}
    int getZvuk() const {return zvuk;}
    int getKanal() const {return kanal;}


};

void ispis(const Televizor & t){
cout<<"Kanal: "<<t.getKanal()<<endl;
cout<<"Zvuk: "<<t.getZvuk()<<endl;
cout<<"Stanje televizora: "<<t.getStanje()<<endl;
}





int main()
{
Televizor t1;
Televizor t2(t1);
ispis(t2);
t1.sledeciKanal();
t1.sledeciKanal();
t1.sledeciKanal();
t1.sledeciKanal();
t1.sledeciKanal();
if(t1.sledeciKanal()){
    cout<<"Uspesno promenjen kanal";
}else{
cout<<"Neuspesno";
}
if(t1.prethodniKanal()){
    cout<<"Uspesno promenjen kanal";
}else{
cout<<"Neuspesno";
}
if(t1.pojacajZvuk()){
    cout<<"Uspesno pojacan zvuk";
}else{
cout<<"Neuspesno";
}
if(t1.smanjiZvuk()){
    cout<<"Uspesno smanjen zvuk";
}else{
cout<<"Neuspesno";
}


    return 0;
}
