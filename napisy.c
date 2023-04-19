#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
/*
void wyczysc(char *napis) {
    napis[0]=0;
}
*/

int dlugosc(char *napis) {
    int i=0;
    int pom=0;
    while(napis[i]!=0) {
        if(napis[pom]!=32)
            pom++;
            i++;
    }
    return pom;
}

/* nie dziala
char *zlacz(char *napis) {
    char *wynik ="";
    int i=0;
    while(napis[i]!=0) {
        if(napis[i]!=32) {
            wynik+=napis[i];
        }
        i++;
    }
    return wynik;
}
*/
/*
int porownaj(char *napis1, char *napis2) {
    if(napis1==napis2)
        return 1;
    return 0;
}
*/
/*
int porownaj2(char *napis1, char *napis2) {
    int i,x;
    for(i=0;napis1[i]||napis2[i];i++) {
        if(napis1[i]==0 && napis2[i]==0) {
            return 0;
        }
        if(napis1[i]!=0 && napis2[i]!=0) {
            return 1;
        }
        if(napis1[i]==0 && napis2[i]==0) {
            for(x=0;napis1[x];x++) {
                if(napis1[x]<napis2[x] == 0) {
                    return 0;
                }
            }
        }
    }
}
*/
void wypisz(char *napis) {
    printf("%s",napis);
}
/*
void przepisz(char *napis1, char *napis2) {
    int i;
    for(i=0;i<dlugosc(napis1);i++) {
        napis2[i]=napis1[i];
    }
    napis2[dlugosc(napis1)]=0;
}
*/
/*
void przepisz2(char *napis1, char *napis2, int n) {
    int i;
    for(i=0;i<dlugosc(napis1)&&i<n;i++) {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}
*/
/*
void sklej(char *napis1, char *napis2, char *napis3) {
    int i, j;
    for(i=0;i<napis1[i]!=0;i++) {
        napis3[i] = napis1[i];
    }
    for(j=0;napis2[j]!=0;i++,j++) {
        napis3[i]=napis2[j];
    }
    napis3[i]=0;
}
*/
/*
void podmien(char *napis) {
    int i;
    for(i=0;i<dlugosc(napis);i++) {
        if(napis[i]>=97&&napis[i]<=122) {
            napis[i] -=32;
        }
    }
    napis[i]=0;
}
*/
void wytnij(char * napis,unsigned int n,unsigned int m) {
    int i;
    for(i=0;i<dlugosc(napis);i++) {
        if(i<n||i>m) {
            printf("%s",napis[i]);
        }
    }
}
int main()
{

    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(wchar_t));
    printf("%d\n",'A');
    printf("%d\n",'z');


    /*
    char *napis = "piec";
    printf(napis);
    printf("\n");
    wyczysc(napis);
    printf(napis);
    free(napis);
    */

    /*
    char *napis = "pieczywo jest";
    printf("%d\n",dlugosc(napis));
    */

    /*
    char *napis = "pieczywo jest";
    printf("%d\n",zlacz(napis));
    */

    /*
    char *napis = "pieczywo jest";
    char *napis2 = "pikczywo jest";
    printf("%d\n",porownaj(napis,napis2));
    */

    /*
    char *napis = "pieczywo jest";
    char *napis2 = "pikczywo jest";
    printf("%d\n",porownaj2(napis,napis2));
    */


    /*
    char *napis = "student";
    char napis2[30] = "gsfgstgerg";
    printf("\n");
    wypisz(napis);
    printf("\n");
    wypisz(napis2);
    printf("\n");
    przepisz2(napis,napis2,4);
    wypisz(napis);
    printf("\n");
    wypisz(napis2);
    printf("\n");
    */

    /*
    char *napis = "brzeczy";
    char *napis2 = "szczykiewicz";
    char napis3[40];
    printf("\n");
    wypisz(napis);
    printf("\n");
    wypisz(napis2);
    printf("\n");
    wypisz(napis3);
    printf("\n");
    sklej(napis,napis2,napis3);
    wypisz(napis3);
    printf("\n");
    */

    /*
    char napis[30] = "PaiNt!$#:";
    wypisz(napis);
    printf("\n");
    podmien(napis);
    wypisz(napis);
    printf("\n");
    */

    char napis[30] = "Informatyka";
    wypisz(napis);
    printf("\n");
    wytnij(napis,3,6);
    printf("\n");

    return 0;
}
