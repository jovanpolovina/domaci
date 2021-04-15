#include <iostream>

using namespace std;

class Kamera
{
public:
    int megaPikseli;
    int freeSpace;
    static int fotoCounter;


    Kamera()
    {
        megaPikseli = 10;
        freeSpace = 20;

    }
    Kamera(int m, int f)
    {
        megaPikseli = m;
        freeSpace = f;

    }
    Kamera(const Kamera & k)
    {
        megaPikseli = k.megaPikseli;
        freeSpace = k.freeSpace;

    }
    int getMegaPikseli()const
    {
        return megaPikseli;
    }
    int getFreeSpace()const
    {
        return freeSpace;
    }
  int getFotoCounter()const
    {
        return fotoCounter;
    }
    bool slikaj()
    {
        if(freeSpace-megaPikseli>0)
        {
            freeSpace -= megaPikseli;
            ++Kamera::fotoCounter;
            return true;
        }
        return false;
    }
};

class VideoKamera : public Kamera
{
public:
    static int videocounter;

    VideoKamera():Kamera()
    {
        videocounter=10;
    }
    VideoKamera(int m, int f):Kamera(m,f)
    {

    }
    VideoKamera(const Kamera & k):Kamera(k){}
    int getVideoCounter()const
    {
        return videocounter;
    }

    bool snimaj(int sekunde)
    {
        if(freeSpace - megaPikseli*sekunde > 0)
        {
            freeSpace -=megaPikseli*sekunde;
        ++videocounter;
            return true;

        }
        return false;
    }
};

class Telefon
{

public:
    string broj;

    Telefon()
    {
        broj="100";
    }
    Telefon(string b)
    {
        broj=b;

    }
    bool pozovi(string b)
    {
        if(broj!=b)
            return true;
        return false;
    }


};

class Telefongen2:public Telefon
{
public:
    Kamera k;
    Telefongen2():Telefon(),k() {}
    Telefongen2(string b, int m, int f):Telefon(b),k(m,f) {}
    Telefongen2(string b, const Kamera& kk):Telefon(b), k(kk) {}
    bool slikajSliku()
    {
        return k.slikaj();
    }

};

class Telefongen3:public Telefon
{
public:
    VideoKamera vd;

    Telefongen3():vd(), Telefon() {}
    Telefongen3(int m, int f, string b):vd(m, f), Telefon(b){}
    Telefongen3(string b, const Kamera & k): Telefon(b), vd(k) {}
    bool snimiVideo(int sec)
    {
        return vd.snimaj(sec);
    }
};

 int Kamera::fotoCounter = 0;
 int VideoKamera::videocounter = 0;
int main()
{

    Telefongen2 a50("0644033298", 10,20);
      if(a50.pozovi("0644033298"))
    {
        printf("Uspesno!\n");
    }
    else
    {
        printf("Neuspesno\n");
    }

if(a50.slikajSliku()){
    cout<<a50.k.getFotoCounter()<<endl;
}
Telefongen3 se;
if(se.vd.slikaj()){
    printf("Uspesno!\n");
    cout<<se.vd.getFotoCounter()<<endl;
}
if(se.snimiVideo(1)){
    printf("USpesno\n");
    cout<<se.vd.getVideoCounter()<<endl;
}
else{
    printf("NEuspesno\n");
}
    return 0;
}
