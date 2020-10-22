#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void malaUVelikja()
{
 char c[100];
 gets(c);
 FILE *f1 = fopen(c, "r");
 char e = fgetc(f1);
 FILE* f2 = fopen("upisi.txt", "w");
 while(e!=EOF){
    if(e>='A' && e<='Z'){
        e = e+32;

    }
    fprintf(f2,"%c", e);
      e = fgetc(f1);
 }
 fclose(f1);
 fclose(f2);
 remove(c);
  rename("upisi.txt", c);
}

void Pizza(){
FILE* f1 = fopen("porudzbina.txt", "r");
FILE* f2 = fopen("odgovor.txt", "w");
char c[100];
while(fgets(c, 100, f1)!=NULL){
    int gost;

    sscanf(c, "%i", &gost);
    fgets(c, 100, f1);


    char naziv[200];
    sscanf(c, "%[^\n]", naziv);
    fgets(c, 100, f1);
    double apetit;
    sscanf(c, "%lf", &apetit);
    unsigned int brojPizza= gost*apetit/8;
 fprintf(f2,"%5.1f, %2u, %s\n", gost*apetit, brojPizza, naziv);

};
fclose(f1);
fclose(f2);
}

int main()
{
    //zad1
    malaUVelikja();
    //zad2
Pizza();
    return 0;
}
