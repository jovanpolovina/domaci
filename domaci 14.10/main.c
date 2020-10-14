#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pojavljivanje(char c)
{
    int brojac = 0;
    FILE *f1 = fopen("primer.txt", "r");
    char filec = fgetc(f1);
    while(filec!=EOF)
    {
        if(filec == c)
            ++brojac;
        filec = fgetc(f1);
    }
    fclose(f1);
    return brojac;
}

void brojR(FILE* f1, FILE* f2)
{

    int brojReci=0;
    char filec = fgetc(f1);
    while(filec!=EOF)
    {
        if((filec>='a' && filec<='z')||(filec>='A' && filec<='Z'))
        {
            while((filec>='a' && filec<='z')||(filec>='A' && filec<='Z') && filec!=EOF)
            {
                filec = fgetc(f1);
            }
            ++brojReci;
        }
        filec = fgetc(f1);
    }

       fprintf(f2, "%i ", brojReci);

}
void najduzarec(FILE* f1, FILE *f2)
{

    int brojSlova = 0;
    int maks= 0;
    char najduzarec[50];
    char s1[50];
    fseek(f1, 0, SEEK_SET);
    char filec = fgetc(f1);
    while(filec!=EOF)
    {
        if((filec>='a' && filec<='z')||(filec>='A' && filec<='Z'))
        {
            while((filec>='a' && filec<='z')||(filec>='A' && filec<='Z') && filec!=EOF)
            {

                s1[brojSlova] = filec;
               ++brojSlova;
                filec = fgetc(f1);
            }
            brojSlova = 0;
            if(strlen(s1)>strlen(najduzarec))
            {
                for(int i=0; i<strlen(s1); ++i)
                {
                    najduzarec[i]=s1[i];
                }
            }
            filec = fgetc(f1);
        }
    }
      fprintf(f2, "%s", najduzarec);


}
void imePrezimeBroj(){

FILE* f1 = fopen("dnevnik.txt", "w");
fprintf(f1, "Jovan Polovina 13");

}
void spojifile(FILE* f1, FILE* f2){
    fseek(f1, 0, SEEK_SET);
    fseek(f2, 0, SEEK_SET);
char s1[100];
printf("Unesi naziv treceg fajla: ");
gets(s1);
strcat(s1,".txt");
FILE* f3 = fopen(s1,"w");

while((fgets(s1,100,f1))!=NULL){
    fprintf(f3, "%s\n", s1);

}
while((fgets(s1,100,f2))!=NULL){
    fprintf(f3, "%s\n", s1);

}
fclose(f3);
}
int main()
{
    //1zad
    imePrezimeBroj();
    //2zad
     printf("%i\n",pojavljivanje('m'));
     //3zad
    char file1[30];
    char file2[30];
    printf("Unesi ime prvog file-a");
    gets(file1);
      strcat(file1, ".txt");
    FILE* f1 = fopen(file1, "r");
    while(f1==NULL){
        printf("Ovaj fajl ne postoji!\n Unesi opet: ");
       gets(file1);
  strcat(file1, ".txt");
        f1 = fopen(file1, "r");
    }

    printf("Unesi ime drugog fajla: ");
    gets(file2);
    strcat(file2, ".txt");
    FILE* f2 = fopen(file2, "a");
 if (f2 == NULL)
    {
        printf("Couldn't open file\n");
        return 1;
    }

   brojR(f1, f2);
    najduzarec(f1, f2);
    fclose(f1);
    fclose(f2);
    //4zad
      printf("Unesi ime prvog file-a");
    gets(file1);
      strcat(file1, ".txt");
  f1 = fopen(file1, "r");
    while(f1==NULL){
        printf("Ovaj fajl ne postoji!\n Unesi opet: ");
       gets(file1);
  strcat(file1, ".txt");
        f1 = fopen(file1, "r");
    }
    printf("Unesi ime drugog file-a");
    gets(file2);
      strcat(file2, ".txt");
  f2 = fopen(file2, "r");
    while(f2==NULL){
        printf("Ovaj fajl ne postoji!\n Unesi opet: ");
       gets(file2);
  strcat(file2, ".txt");
        f2 = fopen(file2, "r");
    }
spojifile(f1, f2);
fclose(f1);
fclose(f2);


    return 0;
}
