#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int wyczysc(char *napis)
{
    napis[0]=0;
}
int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0) {
        i++;
    }
    return i;
}
int porownaj(char *napis1, char *napis2)
{
    int x=dlugosc(napis1);
    int y=dlugosc(napis2);
    if(x==y)
    {
        return 1;
    }
    return 0;
}
int porownaj2(char *napis1, char *napis2)
{
    int i;
    for(i=0;(napis1[i]!=0)&&(napis2[i]!=0);i++)
    {
        if(napis1[i]!=napis2[i])
        {
            if(napis1[i]<napis2[i])
            {
                return 1;
            }
            return 0;
        }
    }
    if(napis1[i]!=0)
        return 0;
    else
        return 1;
}
void wypisz(char *napis) {
    printf("%s",napis);
}
void przepisz(char *napis1, char *napis2) {
    while (*napis1 != '\0') {
        *napis2 = *napis1;
        napis1++;
        napis2++;
    }
    *napis2 = '\0';
}
void przepisz2(char *napis1, char *napis2, int n) {
    int i;
    for(i=0;i<dlugosc(napis1)&&i<n;i++) {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}
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
void podmien(char *napis) {
    int i;
    for(i=0;i<dlugosc(napis);i++) {
        if(napis[i]>=97&&napis[i]<=122) {
            napis[i] -=32;
        }
    }
    napis[i]=0;
}
void wytnij(char * napis,unsigned int n,unsigned int m) {
    int i, dl;
    for(dl=0;napis[dl]!=0;dl++);
    if(dl+1>m)
    {
        for(i=0;i+m<dl;i++)
        {
            napis[n+1]=napis[i+m+1];
        }
    }
    else
    {
        if((n<dl)&&(dl+1<=m))
        {
            napis[n]=0;
        }
    }
}
bool p(char* napis1, char* napis2, int n) {
    int i;
    for(i=0;(napis1[i]!=0)&&(napis2[i]!=0);i++) {
        if(napis1[n+1]!=napis2[i]) {
            return false;
        }
    }
    if(napis2[i]==0) {
        return true;
    }
    else {
        return false;
    }
}
void wytnij2(char *napis1, char* napis2) {
    int i, dl;
    for(dl=0;napis2[dl]!=0;dl++);
    for(i=0;napis1[i]!=0;i++) {
        if(p(napis1, napis2, i)) {
            wytnij(napis1,i,i+dl-1);
            return;
            }
        }
}
char* zad20(int godz, int min, int sek) {
    char * wynik=malloc(9*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;
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
    //char *napis="Hej";
    //printf("%s\n", napis);
    //napis=wyczysc(napis);
    //printf("%s\n", napis);

    //printf("Dlugosc %d\n", dlugosc(napis));

    //char *n2="Witam";
    //char *n3="Siema";
    //printf("1 z 3 %d\n", porownaj(napis, n3));
    //printf("2 z 3 %d\n", porownaj(n2, n3));

    //char *n4="Witaj";
    //printf("2 z 3 %d\n", porownaj2(n2, n3));
    //printf("3 z 4 %d\n", porownaj2(n3, n4));

    //wypisz(napis);

    //char napis1[] = "Przykladowy napis ";
    //char napis2[] = "rzy";
    //przepisz(napis1, napis2);
    //printf("Napis 1: %s\n", napis1);
    //printf("Napis 2: %s\n", napis2);

    //przepisz2(napis1, napis2, 5);
    //printf("Napis 1: %s\n", napis1);
    //printf("Napis 2: %s\n", napis2);

    //char napis1pol[]="pomocniczy";
    //sklej(napis1, napis1pol, napis2);
    //printf("Napis 1: %s\n", napis1);
    //printf("Napis 2: %s\n", napis1pol);
    //printf("Napis 3: %s\n", napis2);

    //podmien(napis1);
    //wypisz(napis1);

    //wytnij(napis1, 5, 10);
    //wypisz(napis1);

    //char *napis1 = "Przykladowy napis";
    //char *napis2 = "rzy";
    //wytnij2(napis1, napis2);
    //wypisz(napis1);


    //printf("%c",zad20(10,10,10));

    char* napisa="arbuz";
    char* napisb="baobab";
    char* napisc="czekolada";
    char* napis;
    napis=zad22(napisa,napisb,napisc);
    printf(napis);

    return 0;

}
