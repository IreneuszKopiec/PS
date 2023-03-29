#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void wypisz(unsigned int n, int * tab) {
    int i;
    for(i=0;i<n;i++) {
        printf("%d\t",tab[i]);
    }
    printf("\n");
}
void wyzeruj(unsigned int n, int * tab) {
    //wypisz(n,tab);
    int i;
    for(i=0;i<n;i++) {
        tab[i]=0;
    }
    //wypisz(n,tab);
}
void indeks(unsigned int n, int * tab) {
    wyzeruj(n,tab);
    int i;
    for(i=0;i<n;i++) {
        tab[i]=i;
    }
    //wypisz(n,tab);
}
void podw(unsigned int n, int * tab) {
    int i;
    for(i=0;i<n;i++) {
        tab[i]*=2;
    }
}
void bezw(unsigned int n, int * tab) {
    int i;
    for(i=0;i<n;i++) {
        tab[i]=abs(tab[i]);
    }
}
int suma(unsigned int n, int * tab){
    int wynik=0;
    int i;
    for(i=0;i<n;i++) {
        wynik+=tab[i];
    }
    return wynik;
}
int sumaDo2(unsigned int n, int * tab){
    int wynik=0;
    int i;
    for(i=0;i<n;i++) {
        wynik+=tab[i]*tab[i];
    }
    return wynik;
}
float srednia(unsigned int n, int * tab) {
    float licznik=suma(n,tab);
    return licznik/n;
}
float sredniageometryczna(unsigned int n, int * tab) {
    float wynik=1;
    int i;
    for(i=0;i<n;i++) {
        wynik*=tab[i];
    }
    return pow(wynik,1.0/n);
}
float sredniaharmoniczna(unsigned int n, int * tab) {
    float mianownik=0;
    int i;
    for(i=0;i<n;i++) {
        mianownik+=1.0/tab[i];
    }
    return n/mianownik;
}
int sito(unsigned int n,int a,int b) {
    bool tab[n];
    int i;
    for(i=0;i<n;i++) {
        tab[i]=true;
    }
    int j;
    for(j=2;j<n;j++) {
        if(tab[j]) {
            int k;
            for(k=2*j;k<n;k+=j) {
                tab[k]=false;
            }
        }
    }
    int l;
    int ile=-1;
    int max,min;
    if(a>b) {
        min=b;
        max=a;
    } else {
        min=a;
        max=b;
    }
    for(l=max;l>min;l--) {
        if(tab[l]) {
            ile++;
        }
    }
    return ile;
}

void przepisz(unsigned int n, int * tab1,int * tab2) {
    int help;
    int i;
    for(i=0;i<n;i++) {
        help=tab1[i];
        tab1[i]=tab2[i];
        tab2[i]=help;
    }
    wypisz(n,tab1);
    wypisz(n,tab2);
}

void przepisz2(unsigned int n, int * tab1,int * tab2) {
    int help;
    int i;
    for(i=0;i<n;i++) {
        tab2[i]=tab1[n-i-1];
    }
    wypisz(n,tab1);
    wypisz(n,tab2);
}

int main()
{
    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6;
    tab[1]=2;
    tab[2]=4;
    tab[3]=8;
    wypisz(rozmiar,tab);
    printf("%d\n",*tab);
    int tab2[]={1,2,3,4};
    wypisz(rozmiar,tab2);
    printf("%d\n",tab2[2]);
    */

    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6;
    tab[1]=2;
    tab[2]=4;
    tab[3]=8;
    wyzeruj(rozmiar,tab);
    */

    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6;
    tab[1]=2;
    tab[2]=4;
    tab[3]=8;
    indeks(rozmiar,tab);
    */

    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6;
    tab[1]=2;
    tab[2]=4;
    tab[3]=8;
    wypisz(rozmiar,tab);
    podw(rozmiar,tab);
    wypisz(rozmiar,tab);
    */

    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6;
    tab[1]=-2;
    tab[2]=4;
    tab[3]=-8;
    wypisz(rozmiar,tab);
    bezw(rozmiar,tab);
    wypisz(rozmiar,tab);
    */

    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6;
    tab[1]=2;
    tab[2]=4;
    tab[3]=8;
    printf("Suma elementow tablicy wynosi %d\n",suma(rozmiar,tab));
    */

    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=6;
    tab[1]=2;
    tab[2]=4;
    tab[3]=8;
    printf("Suma kwadratow elementow tablicy wynosi %d\n",sumaDo2(rozmiar,tab));
    */

    /*
    int rozmiar=4;
    int tab[rozmiar];
    tab[0]=3;
    tab[1]=2;
    tab[2]=4;
    tab[3]=8;
    printf("Srednia elementow tablicy wynosi %f\n",srednia(rozmiar,tab));
    */

    /*
    int tab[]= {8,2,5,1,9};
    printf("Srednia geometryczna elementow tablicy wynosi %f\n",sredniageometryczna(5,tab));
    */

    /*
    int tab[]= {8,2,5,1,9};
    printf("Srednia harmoniczna elementow tablicy wynosi %f\n",sredniaharmoniczna(5,tab));
    */

    //printf("%d\n",sito(999999,0,10000));

    /*
    int rozmiar=4;
    int tab1[rozmiar];
    tab1[0]=6;
    tab1[1]=2;
    tab1[2]=4;
    tab1[3]=8;
    int tab2[rozmiar];
    tab2[0]=1;
    tab2[1]=10;
    tab2[2]=3;
    tab2[3]=4;
    wypisz(rozmiar,tab1);
    wypisz(rozmiar,tab2);
    przepisz(rozmiar,tab1,tab2);
    */

    int rozmiar=4;
    int tab1[rozmiar];
    tab1[0]=6;
    tab1[1]=2;
    tab1[2]=4;
    tab1[3]=8;
    int tab2[rozmiar];
    tab2[0]=1;
    tab2[1]=10;
    tab2[2]=3;
    tab2[3]=4;
    wypisz(rozmiar,tab1);
    wypisz(rozmiar,tab2);
    przepisz2(rozmiar,tab1,tab2);

    return 0;
}
