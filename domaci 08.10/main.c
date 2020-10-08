#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jednaki(char *s1, char *s2){

if(strlen(s1)!=strlen(s2))
{
    return 0;
}

for(int i=0;i<strlen(s1);++i){
    if(s1[i]!=s2[i]){
        return 0;
    }
}
return 1;
}

int pojavljivanje(char *s1, char c){
int brojac = 0;
for(int i=0;i<strlen(s1);++i){
        if(s1[i]==c){
            ++brojac;
        }
}
return brojac;
}

int max(int *niz, int n){
int max=*(niz);
for(int i=0; i<n; i++)
{
    if(*(niz+i)>max)
        max=*(niz+i);
}
return max;
}
void deljivo(int *niz, int n)
{
    for(int i=0;i<n;i++)
    {
        if(*(niz+i)%3==0)
            printf("%i ", *(niz+i));
    }
}
int** KreirajMatricu(int Rows, int Cols){
 int **board = (int **)malloc(Rows * sizeof(int *));
    int row;

    // for each row allocate Cols ints
    for (row = 0; row < Rows; row++) {
        board[row] = (int *)malloc(Cols * sizeof(int));
    }
    return board;
}
int** KreirajiUpisiMatricu(int Rows, int Cols){
int** mat = KreirajMatricu(Rows, Cols);
for(int i=0;i<Rows;++i){
    for(int j=0;j<Cols;++j){
        printf("Unesi %i. clan %i. reda matrice: ", j+1, i+1);
         scanf("%i", &(*(*(mat+i)+j)));
    }
}
    return mat;
}
void ispisiMatricu(int **mat, int m, int n){
for(int i=0;i<m;++i){
    for(int j=0;j<n;++j){
        printf("%i ", *(*(mat+i)+j));

            }
            printf("\n");
}
}

int** SaberiMatrice(int** mat1, int** mat2, int m, int n){

int** mat3 = KreirajMatricu(2,3);
for(int i = 0;i<m;++i){
    for(int j=0;j<n;++j){
*(*(mat3+i)+j) = *(*(mat1+i)+j)+*(*(mat2+i)+j);
    }
}
return mat3;
}
int** Transponuj(int** mat, int m, int n){
int** transponovana = KreirajMatricu(n,m);
for(int j=0;j<m;++j){
for(int i=0;i<n;++i){
   transponovana[i][j]=mat[j][i];
   }
}
return transponovana;
}
int main()
{
  //2 zad
  char s1[20], s2[20];
   printf("Unesi prvi string: ");
   gets(s1);
   printf("Unesi drugi string: ");
   gets(s2);
   if(jednaki(s1, s2)==1){
    printf("Jednaki su");
   }
   else{
    printf("Nisu jednaki");
   }
   //3 zad
   printf("%i\n", pojavljivanje("blblblalbb", 'b'));
    //4 zad
    int niz1[] = {5,6,-10,5,8,2};
    int n = sizeof(niz1)/sizeof(niz1[0]);
   printf("%i \n", max(niz1, n));
   //5 zad
    printf("Unesi velicinu niza: ");
    scanf("%i", &n);
    int niz2[n];
    for(int i=0;i<n;++i){
        printf("Unesi %i. element niza: ", i+1);
        scanf("%i", (niz2+i));
    }
    deljivo(niz2, n);
    //6 Zad
int **mat1 = KreirajiUpisiMatricu(2, 3);
int **mat2 = KreirajiUpisiMatricu(2,3);
int **mat3 = SaberiMatrice(mat1, mat2, 2,3);
printf("Sabrana matrica: \n");
ispisiMatricu(mat3, 2, 3);
//1 zadatak
printf("Transponovana matrica: \n");
int mat4 = Transponuj(mat3, 2,3);
ispisiMatricu(mat4, 3,2);
    return 0;

}
