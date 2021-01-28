#include <iostream>
#include <math.h>
using namespace std;

void faktorijal(){

int n;
scanf("%i", &n);
int rezultat = 1;
for(int i = n; i>0; --i){
    rezultat *= i;
}
cout<< rezultat<<endl;
}

void trocifreni(){

for(int i = 100; i<1000; ++i){
    int a, b, c;
    a = i%10;
    b= (i/10)%10;
    c = (i/100)%10;
    if(a*a*a + b*b*b + c*c*c == i){
        cout<< i<<endl;
    }
}

}

void prestupna(){

int godina;
cin>> godina;
if(godina%4 == 0){
    if(godina%100 == 0 && godina % 400 != 0){
        printf("Godina nije prestupna\n");
        return;
    }
    printf("Godina je prestupna\n");
} else{
        printf("Godina nije prestupna\n");
}

}

void koren(){

float n;
cin>> n;
float rez = 0;
for(float i = 1; i<=n;++i){
    rez += sqrt(i);
}
cout<< round(rez);
}

int main()
{
    //Zad1
   faktorijal();
   //Zad2
   trocifreni();
   //Zad3
   prestupna();
   //Zad4
   koren();
    return 0;
}
