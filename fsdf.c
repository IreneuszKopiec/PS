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
        t[i]=malloc(n*sizeof(int));
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
void zeruj(int **t, unsigned int n, unsigned int m) {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            t[i][j]=0;
        }
    }
}
void zeruj2(unsigned int n, unsigned int m, int t[][m]) {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            t[i][j]=0;
        }
    }
}
int suma(int **t, unsigned int n, unsigned int m) {
    int i, j, suma=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            suma+=t[i][j];
        }
    }
    return suma;
}
int indeks(unsigned int n, unsigned int m, int t[][m]) {
    int i, j, max, suma, indeks;
    max=0;
    for(i=0;i<n;i++) {
        suma=0;
        for(j=0;j<m;j++) {
                suma+=t[i][j];
        }
        if(i==0) {
            max=suma;
            indeks=0;
        }
        if(suma > max) {
            max=suma;
            indeks=i;
        }
        suma=0;
    }
    return indeks;
}
float maxsrednia(unsigned int n, unsigned int m, int t[][m]) {
    int i, j;
    float suma, max;
    max=0;
    for(i=0;i<n;i++) {
        suma=0;
        for(j=0;j<m;j++) {
                suma+=t[i][j];
        }
        if(i==0) {
            max=suma;
        }
        if(suma > max) {
            max=suma;
        }
        suma=0;
    }
    return (float)max/m;
}
void przepisz(int **t1, int **t2, unsigned int n, unsigned int m) {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
                t2[i][j]=t1[i][j];
        }
    }
}
void zamiana(int **t1, int **t2, unsigned int n, unsigned int m) {
    int i, j, p;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
                p=t2[i][j];
                t2[i][j]=t1[i][j];
                t1[i][j]=p;
        }
    }
}
void odwroc(int **t, unsigned int n, unsigned int m) {
    int i, j, p;
    for(i=0;i<n;i++) {
        for(j=0;j<m/2;j++) {
                p=t[i][j+m-1];
                t[i][j+m-1]=t[i][j];
                t[i][j]=p;
        }
    }
}
void zamienwiersze(int **t, unsigned int n, unsigned int m) {
    int i, j, p;
    for(i=0;i<n;i++) {
        p=t[n-1][j];
        for(j=m-1;i>0;j--) {
            t[i][j]=t[i-1][j];
        }
        t[0][j]=p;
    }
}
void jedynka(int **t, unsigned int n, unsigned int m) {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            t[i][j]=1;
        }
    }
}
int **tarczadorzutek(unsigned int n) {
    int **t=alokuj(n,n);
    int ile=n-n/2-1;
    int wstaw=2;
    int i,j;
    if(n==1) {
        t[0][0]=1;
    }
    else if(n==2) {
        jedynka(t,n,n);
    } else {
        jedynka(t,n,n);
        while(ile>0) {
            for(i=wstaw-1;i<n-1;i++) {
                for(j=wstaw-1;j<n-1;j++) {
                    t[i][j]=wstaw;
                }
            }
            wstaw++;
            ile--;
        }
    }
    return t;
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

/*
int **t=alokuj(3,2);
wczytaj(t,3,2);
wypisz(t,3,2);
zeruj2(3,2,t);
wypisz2(3,2,t);
*/
/*
int **t=alokuj(3,2);
wczytaj(t,3,2);
printf("%d", suma(t,3,2));
*/
/*
int **t=alokuj(4,3);
wczytaj2(4,3,t);
printf("%d", indeks(4,3,t));
*/
/*
int **t=alokuj(2,2);
wczytaj2(2,2,t);
printf("%f", maxsrednia(2,2,t));
*/
/*
int **t1=alokuj(2,2);
int **t2=alokuj(2,2);
wczytaj(t1,2,2);
przepisz(t1,t2,2,2);
wypisz(t2,2,2);
*/
/*
int **t1=alokuj(2,2);
int **t2=alokuj(2,2);
wczytaj(t1,2,2);
wczytaj(t2,2,2);
zamiana(t1,t2,2,2);
wypisz(t1,2,2);
wypisz(t2,2,2);
*/
/*
int **t=alokuj(3,3);
wczytaj(t,3,3);
odwroc(t,3,3);
wypisz(t,3,3);
*/

/*
int **t=alokuj(3,3);
wczytaj(t,3,3);
zamienwiersze(t,3,3);
wypisz(t,3,3);
*/
int **t=tarczadorzutek(1);
wypisz(t,1,1);
printf("\n");
int **t2=tarczadorzutek(2);
wypisz(t2,2,2);
printf("\n");
int **t3=tarczadorzutek(3);
wypisz(t3,3,3);
printf("\n");
int **t4=tarczadorzutek(4);
wypisz(t4,4,4);
printf("\n");
int **t5=tarczadorzutek(5);
wypisz(t5,5,5);

return 0;
}
