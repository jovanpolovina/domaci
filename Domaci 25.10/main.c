#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
void malauVelika()
{
    char e[60];
    gets(e);
    for(int i=0; i<strlen(e); ++i)
    {
        if(e[i]>='a' && e[i]<='z')
        {
            e[i] = e[i]-32;
        }
    }


    char* d =(char*)malloc(sizeof(char)*(strlen(e)+1));
    int i;
    for( i=0; i<strlen(e); ++i)
    {
        d[i] = e[i];
    }
    d[i]='\0';
    printf("%s\n", d);
    free(d);

}
int prosek()
{
    int n;
    printf("Unesi broj elemenata u niz: ");
    scanf("%i", &n);
    int* niz = malloc(sizeof(int)*n);
    int sum=0;
    for(int i=0; i<n; ++i)
    {
        scanf("%i", &niz[i]);
        sum+=niz[i];
    }
    return sum/n;
}
void niz()
{

    int n=5, i=0;
    int* niz = malloc(sizeof(int)*n);
    printf("Unesi minimalno 5 pozitivnih brojeva: \n");
    int broj = 1;
    while(broj>0)
    {
        scanf("%i", &broj);
        if(broj<=0)
        {
            break;
        }
        if(i==n)
        {
            ++n;
            realloc(niz, sizeof(int)*n);
        }
        niz[i] = broj;
        ++i;


    }
    for(int i=0; i<n; ++i)
    {
        printf("%i, ", niz[i]);
    }
printf("\n");

}

int kvadrat(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}


int Fibonacci(int n)
{
    return kvadrat(5 * n * n + 4) ||
           kvadrat(5 * n * n - 4);
}

void ispisiFibonaci()
{
    int n;
    printf("Unesi broj: ");
    scanf("%i", &n);
    int *niz = malloc(sizeof(int)*0);
    int brojac = 0;
    int velicina = 0;
    for(int i=1; i<=n; ++i)
    {
        if(Fibonacci(i))
        {
            ++velicina;
            realloc(niz, sizeof(int)*velicina);
            niz[brojac] = i;
            ++brojac;
        }
    }
    for(int i=0; i<velicina; ++i)
    {
        printf("%i ", niz[i]);
    }
}

int main()
{
    //1 zad
    malauVelika();
    //2 zad
    printf("%i\n", prosek());
    //3 zad
    niz();
    //4 zad
    ispisiFibonaci();
    return 0;
}
