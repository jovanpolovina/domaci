#include <iostream>
#include <time.h>
using namespace std;




int main()
{

    FILE* f1 = fopen("stanje.txt", "r");
    int stanjeNaRacunu;
    fscanf(f1, "%i", &stanjeNaRacunu);
    fclose(f1);

    while(1==1)
    {
         ovde:

        int p1=0, p2=0, p3=0, p4=0, p5=0;
        printf("1.Kladionica\n2.Bingo\n3.Tocak\n4.APARAT\n5.STANJE NA RACUNU\n6.EXIT");
        int i, n, v;
        printf("\nIzaberi igru(1=kladza, 2=bingo, 3=tocak, 4=aparat, 5=novac na kartici, 6=IZACI CES)\n");
        scanf("%i", &i);
        while (i<1 || i>6)
        {
            printf("Izaberi broj od 1 do 6\n");
            scanf("%i", &i);
        }
        int dobitak=0;
        double kvota=1;

        if(i==1)
        {
            while(1==1)
            {



                int ulog;


                printf("Ponuda:\n1.EURO pobednik\n2.NBA MVP\n3.ROLAN GAROS\n4.NBA MECEVI.");
                printf("Izaberi igru (1=EURO, 2=NBA MVP, 3=ROLAN GAROS, 4=NBA MECEVI)\n");
                scanf("%i", &n);
                while (n<1 || n>4)
                {
                    printf("Izaberi broj od 1 do 4\n");
                    scanf("%i", &n);
                }
                if(n==1)


                {
                    printf("Ko osvaja EURO?\n1.FRANCUSKA(kvota 6), 2.ENGLESKA(kvota 6), 3.BELGIJA(kvota 10)\n");
                    scanf("%i", &v);

                    while (v<1 || v>3)
                    {
                        printf("Izaberi broj od 1 do 3.\n");
                        scanf("%i", &v);
                    }
                    if(v==1 || v==2)

                        kvota*=6;
                    else kvota*=10;
                    if(v>0 && v<4)
                        p1++;



ponovo:
                    if(p1>1 || p2>1 || p3>1 || p4>1 || p5>1)
                    {


                        printf("Ne moze dvaput da se igra ista igra.\n");
                        break;
                    }
                    printf("Da li zelite da igrate jos nesto iz nase ponude?\n1.DA\n2.NE\n");
                    int sigurni, dobitak;

                    scanf("%i", &sigurni);
                    while (sigurni<1 || sigurni>2)

                    {
                        printf("Izaberi broj od 1 do 2.\n");
                        scanf("%i", &sigurni);
                    }
                    if(sigurni==1)
                        continue;
                    if(sigurni==2);
                    {
                        printf("Unesi ulog(ulog mora biti veci od 20 dinara).\n");
                        int ulog;
                        scanf("%i", &ulog);
                        while (ulog<20)
                        {

                            printf("Ulog mora biti veci od 20 dinara.\n");
                            scanf("%i", &ulog);

                        }
                        dobitak=ulog*kvota;
                        stanjeNaRacunu=stanjeNaRacunu-ulog;


                        printf("Vas zahtev je prihvacen, potencijalni dobitak je %i dinara.\n", dobitak);
                        goto ovde;
                    }



                }


                if(n==2)
                {

                    int mvp;


                    printf("Ko ce biti NBA MVP?\n1.JOKIC(kvota 1.10), 2.CURRY(kvota 10), 3.EMBID(kvota 15)\n");
                    scanf("%i", &mvp);
                    while (mvp<1 || mvp>3)
                    {
                        printf("Izaberi broj od 1 do 3.\n");
                        scanf("%i", &mvp);
                    }
                    if(mvp==1)
                    {
                        printf("Belezio oko 11 skokova, 8 asistenicja i 26 poena, 3. mesto na zapadu.\n");
                        kvota*=1.10;
                    }
                    if(mvp==2)
                    {
                        printf("Belezio 32 poena, oko 5 skokova i 6 asistenicja, nije usao u plej of.\n");
                        kvota*=10;
                    }
                    if(mvp==3)
                    {
                        printf("Nije odigrao skoro trecinu utakmica, belezio oko 28 poena, 11 skokova i 3 asistencije, prvo mesto na Istoku.\n");
                        kvota*=15;
                    }
                    if(mvp>0 && mvp<4)
                        ++p2;
                    goto ponovo;
                    printf("Unesi ulog(ulog mora biti veci od 20 dinara)\n");
                    int ulog;
                    scanf("%i", &ulog);
                    while (ulog<20)
                    {
                        printf("Ulog mora biti veci od 20 dinara\n");
                        scanf("%i", &ulog);
                    }
                    printf("Da li ste sigurni?\n1.DA\n2.NE\n");
                    int sigurni;
                    scanf("%i", &sigurni);
                    while (sigurni<1 || sigurni>2)
                    {
                        printf("Izaberi broj od 1 do 2\n");
                        scanf("%i", &sigurni);
                    }

                    if(sigurni==1)
                    {
                        int dobitak;
                        dobitak=ulog*kvota;
                        printf("Vas zahtev je prihvacen, potencijalni dobitak je %i dinara\n", dobitak);
                    }
                    else continue;



                }
                if(n==3)
                {
                    int osvajac;
                    int ulog;
                    int dobitak;
                    printf("Ponuda:1.NOLE(2), 2.NADAL(2), 3.FEDERER(10)\n");
                    scanf("%i", &osvajac);
                    while (osvajac<1 || osvajac>3)
                    {
                        printf("Izaberi broj od 1 do 3.\n");
                        scanf("%i", &osvajac);
                    }
                    if(osvajac==1 || osvajac==2)
                    {

                        printf("Jedan od favorita.\n");
                        kvota*=2;
                    }
                    if(osvajac==3)
                    {
                        printf("Vratio se sa velike pauze, outsajder.\n");

                        kvota*=10;
                    }
                    if(osvajac>0 && osvajac<4)
                        p3++;
                    goto ponovo;
                    printf("Unesi ulog(ulog mora biti veci od 20 dinara).\n");

                    scanf("%i", &ulog);
                    while (ulog<20)
                    {
                        printf("Ulog mora biti veci od 20 dinara\n");
                        scanf("%i", &ulog);
                    }
                    printf("Da li ste sigurni?\n1.DA\n2.NE\n");
                    int sigurni;
                    scanf("%i", &sigurni);
                    while (sigurni<1 || sigurni>2)
                    {
                        printf("Izaberi broj od 1 do 2\n");
                        scanf("%i", &sigurni);
                    }

                    if(sigurni==1)
                    {
                        int dobitak;
                        dobitak=ulog*kvota;
                        printf("Vas zahtev je prihvacen, potencijalni dobitak je %i dinara\n", dobitak);
                    }
                    else
                        continue;

                }
                if(n==4)
                {
                    int g;
                    int v;
                    printf("PONUDA:\n1.BRUKLIN-MILVOKI\n2.FILADELFIJA-ATLANTA\n");
                    scanf("%i", &g);
                    while (g<1 || g>2)
                    {
                        printf("Izaberi broj od 1 do 2\n");
                        scanf("%i", &g);
                    }
                    if(g==1)
                    {
                        printf("Ko pobedjuje? 1=Bruklin(1.7), 2=MILVOKI(2.2)\n");
                        scanf("%i", &v);
                        while (v<1 || v>2)
                        {
                            printf("Izaberi broj od 1 do 2.\n");
                            scanf("%i", &v);
                        }
                        if(v==1 || v==2)
                            p4++;
                        printf("Hoces da igras jos nesto iz nase ponude?\n");
                        if(v==1)

                            kvota*=1.7;
                        else kvota*=2.2;

                        goto ponovo;


                    }
                    if(g==2)
                    {
                        printf("Ko pobedjuje? 1=FILADELFIJA(1.8), 2=ATLANTA(2.6).\n");
                        scanf("%i", &v);
                        while (v<1 || v>2)
                        {
                            printf("Izaberi broj od 1 do 2\n");
                            scanf("%i", &v);
                        }
                        if (v==1)
                            kvota*=1.8;
                        else kvota*=2.6;
                        if(v==1 || v==2)
                            p5++;
                        printf("Hoces da igras jos nesto iz nase ponude?\n");
                        goto ponovo;

                    }
                }
            }
        }
        if(i==2)
        {

            printf("Hoces bingo ili bingo+(1=bingo, 2=bingo+)\n");
            int i;
            scanf("%i", &i);
            while (i<1 || i>2)
            {
                printf("Izaberi broj od 1 do 2\n");
                scanf("%i", &i);
            }
            if(i==1)
            {
                int kombinacija=78;
                int kombinacijaIgraca;
                int novcanica;
                int kusur;
                int ulog;
                if(stanjeNaRacunu<200)
                {
                    printf("Brate svorc si, pali odavde.\n");
                    continue;
                }
                int suma=ulog*2;

                printf("Unesi svoju kombinaciju(HINT! broj je dvocifren)\n");
                scanf("%i", &kombinacijaIgraca);
                if(kombinacija==kombinacijaIgraca)
                {
                    printf("Dobio si 10 000 dinara!\n");
                    stanjeNaRacunu=stanjeNaRacunu+10000;
                    continue;
                }
                else
                {
                    printf("Unlucky, ovaj promasaj te kosta 200 dinara\n");

                    stanjeNaRacunu=stanjeNaRacunu-200;
                    continue;
                }
            }
        }
        if(i==2)
        {
            int kombinacija=922;
            int kombinacijaIgraca;
            int novcanica;
            int kusur;
             if(stanjeNaRacunu<200)
                {
                    printf("Brate svorc si, pali odavde.\n");
                    continue;
                }

            printf("Unesi svoju kombinaciju(HINT! broj je trocifren)\n");
            scanf("%i", &kombinacijaIgraca);
            if(kombinacija==kombinacijaIgraca)
            {
                stanjeNaRacunu=stanjeNaRacunu+300000;
                printf("Dobio si 300 000\n");
            }
            else
            {
                printf("Unlucky, ovaj promasaj te kosta 1000 dinara\n");

                stanjeNaRacunu=stanjeNaRacunu-1000;
            }
            continue;
        }


        if(i==3)
        {

            printf("Da li zelis tocak kao rulet(duplo ili nista) ili malo ludji tocak\n");
            int d;
            printf("Ukucaj 1 za tocak-rulet, a 2 za malo ludji\n");
            scanf("%i", &d);
            while (d<1 || d>2)
            {
                printf("Izaberi broj od 1 do 2\n");
                scanf("%i", &d);
            }
            if(d==1)
            {
                printf("Dobro dosao na tocak-rulet!\n");
                printf("Koliko zelis para da stavis?\n");
                int ulog, dobitak, x=2;
                int niz[x];
                scanf("%i", &ulog);
                if(stanjeNaRacunu<ulog)
                {
                    printf("Brate svorc si, pali odavde.\n");
                    continue;
                }
                int suma=ulog*2;

                niz[0]=0;
                niz[1]=0;
                srand(time(0));
                dobitak=rand()%2;
                if(dobitak==0)
                {

                    stanjeNaRacunu=stanjeNaRacunu-ulog;
                    printf("Krompir\n");
                    continue;
                }
                if(dobitak==1)
                {

                    stanjeNaRacunu=stanjeNaRacunu+suma;
                    printf("Bravo dobio si %i dinara\n", suma);
                    continue;

                }

            }
            if(d==2)
            {
                int n=4, ulog, dobitak, dobit;
                printf("Dobro dosao na tocak srece!\n");
                printf("Koliko zelis para da stavis?\n");
                scanf("%i", &ulog);

                if(stanjeNaRacunu<0)
                {
                    printf("Brate svorc si, pali odavde\n");
                    continue;
                }
                int niz[n];
                niz[0]=0;
                niz[1]=0;
                niz[2]=0.5*ulog;
                niz[3]=4*ulog;
                srand(time(0));
                dobitak=rand()%4;
                if(dobitak==0)
                {
                    stanjeNaRacunu=stanjeNaRacunu-ulog;
                    printf("Krompir\n");
                }
                if(dobitak==1)
                {
                    stanjeNaRacunu=stanjeNaRacunu-ulog;
                    printf("Krompir\n");
                }
                if(dobitak==2)
                {
                    int suma=ulog*0.5;
                    printf("Dobio si %i dinara (pola novca koje su uplatio\n)", suma);
                    stanjeNaRacunu=stanjeNaRacunu-suma;
                }
                if(dobitak==3)

                {


                    dobit=ulog*4;
                    printf("Dobio si %i dinara\n", dobit);
                    stanjeNaRacunu=stanjeNaRacunu+dobit;
                }
            }
        }

            if(i==4)
            {
                int i, n, v, ulog;
                printf("Dobro dosao na vockice(samo sto nema voca nego brojeva).\n");
                printf("Unesi ulog\n");
                scanf("%i", &ulog);
                if(stanjeNaRacunu<ulog)
                {
                    printf("Brate svorc si, pali odavde.\n");
                    break;
                }


                n=3;
                int niz[n];
                srand(time(0));
                niz[0]=rand()%3+1;
                niz[1]=rand()%3+1;
                niz[2]=rand()%3+1;
                for(int j=0; j<3; j++)
                {
                    printf("%i ", niz[j]);

                }
                printf("\n");

                if (niz[0]==niz[1] && niz[1]==niz[2])
                {
                    i=ulog*9;
                    printf("Dobio si %i dinara\n", i);
                    stanjeNaRacunu=i+stanjeNaRacunu;
                }
                else
                {
                    printf("Vise srece sledeci put\n");
                    stanjeNaRacunu=stanjeNaRacunu-ulog;
                    continue;
                }
            }
            if(i==5)
            {
                printf("STANJE NA RACUNU: %i dinara\n", stanjeNaRacunu);
                continue;
            }
            if(i==6)
                break;
        }


        f1 = fopen("stanje.txt", "w");
        fprintf(f1, "%i", stanjeNaRacunu);
        fclose(f1);


        return 0;

}
