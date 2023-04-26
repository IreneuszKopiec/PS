#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <wchar.h>
#include <string.h>
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
void wytnij(char * napis, int n, int m) {
    int i, j;
    for(j=0;napis[j]!=0;j++) {}
        if(j+1>m) {
            for(i=0;i+m<j;i++) {
                napis[n+i]=napis[m+i+1];
            }
        } else if((n<j)&&(j+1<=m)) {
            napis[n]=0;
    }
}
bool p(char* napis1, char* napis2, int n) {
    int i;
    for(i=0;(napis1[i]!=0)&&(napis2[i]!=0);i++) {
        if(napis1[n+1]!=napis2[i]) {
            return false;
        }
        if(napis2[i]==0) {
            return true;
        }
        else {
            return false;
        }
    }
}
void wytnij2(char *napis1, char* napis2) {
    int i, dl;
    for(dl=0;napis2[dl]!=0;dl++) {
        for(i=0;napis1[i]!=0;i++) {
           if(p(napis1, napis2, i)) {
            wytnij(napis1,i,i+dl-1);
            return;
           }
        }
    }
}
void zad13(char *napis1, char* napis2) {
    int i;
    for(i=0;napis1[i]!=0;i++) {
        if(napis1[i]!=napis2[i]) {
            printf("%c",napis1[i]);
        }
    }
}
void zad13v2(char *napis1, char* napis2) {
    int i,j;
    for(i=0,j=0;napis1[i]!=0;i++) {
        if(napis1[i]!=napis2[i]) {
            napis1[j]=napis1[i];
            j++;
        }
    }
    napis1[j]=0;
}
char* zad20(int godz, int min, int sek) {
    char * wynik=malloc(9*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;
}
void zad26(char * napis) {
    int i;
    for(i=0;napis[i]!=0;i++) {
        napis[i]=towupper(napis[i]);
    }
}
char* zad22(char * napis1, char * napis2, char * napis3) {
    char* wynik=malloc((strlen(napis1)+strlen(napis2)+strlen(napis3))*sizeof(char));
    strcpy(wynik,napis1);
    strcat(wynik,napis2);
    strcat(wynik,napis3);
    return wynik;
}
int main()
{

    //printf("%d\n",sizeof(char));
    //printf("%d\n",sizeof(wchar_t));
    //printf("%d\n",'A');
    //printf("%d\n",'z');


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

    /*
    char napis[30] = "z tego napisu cos wyciac";
    wypisz(napis);
    printf("\n");
    printf("%c",wytnij(napis,5,15));
    printf("\n");
    */

    /*
    char napis1[40] = "napis z ktorego wycinamy";
    char napis2[40] = "ktorego";
    wytnij2(napis1, napis2);
    printf(napis1);
    */

    /*
    char napis1[40] = "arbuz";
    char napis2[40] = "orbit";
    zad13(napis1, napis2);
    zad13v2(napis1, napis2);
    */

    /*
    printf("%c",zad20(10,10,10));
    */

    /*
    char napis[40] = "arbuz";
    zad26(napis);
    printf(napis);
    */

    char* napisa="arbuz";
    char* napisb="baobab";
    char* napisc="czekolada";
    char* napis;
    napis=zad22(napisa,napisb,napisc);
    printf(napis);

    return 0;
}
