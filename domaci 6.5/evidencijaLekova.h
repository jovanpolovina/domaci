#ifndef EVIDENCIJALEKOVA_H_INCLUDED
#define EVIDENCIJALEKOVA_H_INCLUDED
#include "list.hpp"
#include "lek.h"

class EvidencijaLekova{
    private:
Dinstring nazivApoteke;
DinString datum;
List<Lek> lekovi;
    public:
        EvidencijaLekova(){
        nazivApoteke = new DinString("Jankovic");
        datum = new DinString("5.6.2021.");
                }
        public void DodajLek(long int jk, char n[], double j, int k){
        lekovi.add(lekovi.size()+1, new Lek(jk, n, j, k));
        }
         public void DodajLek(long int jk, DinString n, double j, int k){
        lekovi.add(lekovi.size()+1, new Lek(jk, n, j, k));
        }
         public void DodajLek(){
        lekovi.add(lekovi.size()+1, new Lek());
        }
         public void DodajLek(const Lek & l){
        lekovi.add(lekovi.size()+1, new Lek(l));
        }
        public void izbrisiLek(int pozicija){
        lekovi.remove(pozicija);
        }
        public sortiraj(){
        int n = lekovi.size();
        double sortarr[n];
        for(int i = 0; i<n;i++){
            sortarr[i] = lekovi.read(i+1, )
        }
        }
};

#endif // EVIDENCIJALEKOVA_H_INCLUDED
