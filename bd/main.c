
#include <stdlib.h>

int main()
{
    int n, i, brojac;
    brojac=0;
    printf("Unesite prirodan broj: \n");
    scanf("%i", &n);
    while(n!=0)
    {
        i=n%10;
        if(i%2==1)
            ++brojac;
        n=n/10;

    }
    printf("U unetom broju ima %i neparnih cifara", brojac);

    return 0;
}

