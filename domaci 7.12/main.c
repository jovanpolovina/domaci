#include <stdio.h>
#include <stdlib.h>


//Definicija tipova
typedef int TIP;
typedef struct cvor_st
{
  TIP inf;
  struct cvor_st *sledeci;
} SCVOR;

//1.Push funkcija
void push(TIP inf, SCVOR **vrh)
{
  SCVOR *novi;
  novi = (SCVOR *)malloc(sizeof(SCVOR));
  novi->inf = inf;
  novi->sledeci = *vrh;
  *vrh = novi;
}

//2.Pop funkcija
int pop(SCVOR **vrh){
SCVOR* del = *vrh;
*vrh = (*vrh)->sledeci;
int i = del->inf;
free(del);
return i;
}

//3.Top funkcija
TIP top(SCVOR *vrh)
{
  if (vrh == NULL)
    return -1;
  return vrh->inf;
}

//4.Brisanje steka
void obrisi_stek(SCVOR *vrh)
{
  if (vrh!= NULL)
  {

    obrisi_stek(vrh->sledeci);
    printf("brisemo element: %i\n", vrh->inf);
    free(vrh);
  }
}

//5.Ispis steka
void ispisi_stek(SCVOR *vrh)
{
  if (vrh != NULL)
  {
    printf("element: %i\n", vrh->inf);
    ispisi_stek(vrh->sledeci);
    printf("Sam sebe cekam");
  }
}






//Funkcije za drugi zadatak
struct cvor{
char podatak[100];
struct cvor* next;
};
typedef struct cvor Red;
void Enqueue(Red** red, const char* podatak){
Red* newCvor = malloc(sizeof(Red));
strcpy(newCvor->podatak, podatak);
newCvor->next = NULL;
if(*red==NULL){
    *red = newCvor;
    return;
}
Red* pomoc = *red;
while(pomoc->next!=NULL){
    pomoc = pomoc->next;
}
pomoc->next = newCvor;

}
void display(Red* red){
while(red!=NULL){
    printf("%s\n", red->podatak);
    red = red->next;
}
}


int main()
{
  /* vrh steka je lokalna promenljiva */
  SCVOR *vrh;
  TIP i, odg;

  /* inicijalizacija praznog steka*/
  vrh = NULL;

  do {

    printf("\n   Opcije:\n");
    printf("\t1. Smestanje na stek - push.\n");
    printf("\t2. Skidanje sa steka - pop.\n");
    printf("\t3. Pristup prvom elementu - top.\n");
    printf("\t4. Prikaz sadrzaja celog steka.\n");
    printf("\t5. Kraj.\n");
    printf("\n\t>> ");
    scanf("%d", &odg);

    switch( odg ) {
        case 1: printf("Unesite pozitivan ceo broj: ");
                scanf("%d", &i);
                push(i, &vrh);
                break;
        case 2: i = pop(&vrh); /* pokupimo jedan element sa steka */
                printf("Skinuli sa steka: %i\n", i);
                break;
        case 3: printf("Na vrhu steka je %i\n", top(vrh)); /* pogledamo sta je na vrhu steka */
                break;
        case 4: ispisi_stek(vrh); /* ispisemo sadrzaj stabla*/
                break;
    }
  } while ( odg!=5 );

  /* obrisemo stek */
  obrisi_stek(vrh);
  vrh = NULL;
printf("Drugi zadatak:\n");
Red* red = NULL;
Enqueue(&red, "Jovan");
Enqueue(&red, "Polovina");
display(red);
  return 0;
}
