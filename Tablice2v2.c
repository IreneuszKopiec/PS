/*
#include <stdio.h>
#include <stdlib.h>
int** alokuj(unsigned int n, unsigned int m) {
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++) {
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}

int(* alokuj2(unsigned int n, unsigned int m))[]{
    return malloc(n*sizeof(int[m]));
}

void wypisz(int **t,unsigned int n, unsigned int m) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d\t",&t[i][j]);
        }
        printf("\n");
    }
}
void wypisz2(unsigned int n, unsigned int m, int t[][m]) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}
void wczytaj(int **t,unsigned int n, unsigned int m) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d\t",t[i][j]);
        }
    }
}
void wczytaj2(unsigned int n, unsigned int m, int t[][m]) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d\t",t[i][j]);
        }
    }
}
int main()
{
    //tablica tablic
    //int **t=alokuj(3,3);
    //wczytaj(t,3,3);
    //wypisz(t,3,3);

    //tablica dwuwymiarowa
    int t2[3][3];
    wczytaj2(3,3,t2);
    wypisz2(3,3,t2);

    return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>

///cw 6_2_1
int** alokuj(unsigned int n, unsigned int m){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc(m*sizeof(int));
}
return t;
}

///cw 6_2_2
int(* alokuj2(unsigned int n, unsigned int m))[]{
return malloc(n*sizeof(int[m]));
}

///cw 6_2_18
void wypisz(int **t, unsigned int n, unsigned int m){
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
    printf("%d\t",t[i][j]);
}
printf("\n");
}
}

void wypisz2(unsigned int n,unsigned int m, int t[][m]){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       printf("%d\t",t[i][j]);
    }
    printf("\n");
}
}

///wczytaj
void wczytaj(int** t, unsigned int n,unsigned int m){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       scanf("%d",&t[i][j]);
    }
}
}

///wczytaj2
void wczytaj2(unsigned int n,unsigned int m, int t[][m]){
int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
       scanf("%d",&t[i][j]);
    }
}
}
void zwolnij(unsigned int n, int t[][n]) {
    free(t);
}
int** alokuj3(unsigned int n){
int **t=malloc(n*sizeof(int*));
int i;
for(i=0;i<n;i++)
{
    t[i]=malloc((i+1)*sizeof(int));
}
return t;
}
int** alokujnapierscien(unsigned int n){
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++){
        t[i]=malloc(m*sizeof(int));
    }
    return t;
}
void wypisznapierscien(int **t, unsigned int n, unsigned int m){
    int i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
{
    printf("%d\t",t[i][j]);
}
printf("\n");
}
}
int main(){
    /*
    ///tablica tablic
      int **t=alokuj(3,3);
    wczytaj(t,3,3);
wypisz(t,3,3);
///tablica dwuwymiarowa
int t2[3][3];
wczytaj2(3,3,t2);
wypisz2(3,3,t2);
///inicjalizacja bez wczytywania
int t3[4][4]={{20,2,5,8},{2,8,31,4},{5,6,7,8},{5,6,7,8}};
wypisz2(4,4,t3);
*/
/*
///tablica tablic3
      int **t=alokuj3(3);
    wczytaj(t,3,3);
wypisz(t,3,3);
*/

return 0;
}
