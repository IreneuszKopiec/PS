#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int *zwroc(int n, int*tab) {
    int ile=0;
    int i;
    int l;
    int k;
    int m;
    int p=tab[0];
    for(i=1; i<n; i++){
        if(p!=tab[i]) {
            m++;
        }
        p=tab[i];
    }
    int *tab2=malloc((m+1)*sizeof(int));
    for(i=0;i<n;i=i+ile) {
        int liczba=tab[i];
        int j;
        ile=0;
        for(j=i;j<n;j++) {
            if(liczba==tab[j]) {
                ile++;
            } else {
                break;
            }
        }
        l=0;
        k=1;
        tab2[l]=ile;
        tab2[k]=liczba;
        l=l+2;
        k=k+2;
    }
    for(i=0;i<m;i++){
        printf("%d\n", tab2[i]);
    }
    return tab2;
}
void dodajtablice(int n,int *tab1,int *tab2,int *tab3) {
    int i;
    for(i=0;i<n;i++){
        if(tab1[i]>tab2[i])
        tab3[i]=tab1[i];
        else
        tab3[i]=tab2[i];
        printf("%d\t",tab3[i]);
    }
}
void swap(int n,int *tab1,int *tab2,int *tab3) {
    int i;
    int temp;
    for(i=0;i<n;i++){
            temp=tab2[i];
            tab2[i]=tab1[i];
            tab1[i]=tab3[i];
            tab3[i]=temp;
    }
    for(i=0;i<n;i++){
            printf("%d %d %d\t",tab1[i],tab2[i],tab3[i]);
    }
}
void polacz(int n,int *tab1,int *tab2,int *tab3) {
    int i;
    for(i=0;i<2*n;i++) {
        if(i<n) {
            tab3[i]=tab1[i];
        } else {
            tab3[i]=tab2[i-n];
        }
    }
    for(i=0;i<2*n;i++) {
        printf("%d\t",tab3[i]);
    }
}
void polacz2(int n,int *tab1,int *tab2,int *tab3) {
    int i;
    for(i=0;i<2*n;i++) {
        if(i%2==0) {
            tab3[i]=tab2[i/2];
        } else {
            tab3[i]=tab1[(i-1)/2];
        }
    }
    for(i=0;i<2*n;i++) {
        printf("%d\t",tab3[i]);
    }
}
void sortuj1(unsigned int n,int *tab1,int *tab2,int *tab3) {
    int i;
    for(i=0;i<n;i++) {
        if(tab1[1]>tab2[i]&&tab1[i]>tab3[i]) {
            tab1[i]=tab1[i];
        } else if(tab2[1]>tab1[i]&&tab2[i]>tab3[i]) {
            tab1[i]=tab2[i];
        } else {
            tab1[i]=tab3[i];
        }
    }
    for(i=0;i<n;i++) {
        printf("%d\t",tab1[i]);
    }
}
void sortuj2(unsigned int n,int *tab1,int *tab2,int *tab3) {
    int i;
    for(i=0;i<n;i++) {
        if((tab1[i]>tab2[i]&&tab1[i]<tab3[i])||(tab1[i]<tab2[i]&&tab1[i]>tab3[i])) {
            tab2[i]=tab1[i];
        } else if((tab2[i]>tab1[i]&&tab2[i]<tab3[i])||(tab2[i]<tab1[i]&&tab2[i]>tab3[i])) {
            tab2[i]=tab2[i];
        } else {
            tab2[i]=tab3[i];
        }
    }
    for(i=0;i<n;i++) {
        printf("%d\t",tab2[i]);
    }
}
void sortuj3(unsigned int n,int *tab1,int *tab2,int *tab3) {
    int i;
    for(i=0;i<n;i++) {
        if(tab1[1]<tab2[i]&&tab1[i]<tab3[i]) {
            tab3[i]=tab1[i];
        } else if(tab2[1]<tab1[i]&&tab2[i]<tab3[i]) {
            tab3[i]=tab2[i];
        } else {
            tab3[i]=tab3[i];
        }
    }
    for(i=0;i<n;i++) {
        printf("%d\t",tab3[i]);
    }
}
int *zad10a(unsigned int n,int *tab) {
    int max=tab[0];
    int i;
    for(i=1;i<n;i++) {
        if(max<tab[i]) {
            max=tab[i];
        }
    }
    return max;
}
int *zad10b(unsigned int n,int *tab) {
    int min=tab[0];
    int i;
    for(i=1;i<n;i++) {
        if(min>tab[i]) {
            min=tab[i];
        }
    }
    return min;
}
int *zad10c(unsigned int n,int *tab) {
    int max=tab[0];
    int indeks=0;
    int i;
    for(i=1;i<n;i++) {
        if(max<tab[i]) {
            max=tab[i];
            indeks=i;
        }
    }
    return indeks;
}
int *zad10d(unsigned int n,int *tab) {
    int min=tab[0];
    int indeks=0;
    int i;
    for(i=1;i<n;i++) {
        if(min>tab[i]) {
            min=tab[i];
            indeks=i;
        }
    }
    return indeks;
}
int zad11(unsigned int n,int *tab1, int *tab2) {
    int wynik=0;
    int i;
    for(i=0;i<n;i++) {
        wynik += tab1[i]*tab2[i];
    }
    return wynik;
}
void przesun(unsigned int n,int *tab) {
    int i, temp=tab[0];
    for(i=0;i<n;i++) {
        tab[i]=tab[i+1];
    }
    tab[n-1]=temp;
    for(i=0;i<n;i++) {
        printf("%d\t",tab[i]);
    }
}
int main()
{
    /*
    int tab[5] = {4,2,1,1,2};
    int n=5;
    printf("%d", zwroc(n,&tab));
    */

    /*
    int tab1[3]={1,8,3};
    int tab2[3]={4,5,6};
    int tab3[3];
    int n=3;
    dodajtablice(n,tab1,tab2,tab3);
    */

    /*
    int tab1[3]={1,2,3};
    int tab2[3]={4,5,6};
    int tab3[3]={7,8,9};
    int n=3;
    swap(n,tab1,tab2,tab3);
    */

    /*
    int tab1[3]={1,2,3};
    int tab2[3]={4,5,6};
    int tab3[3];
    int n=3;
    polacz(n,tab1,tab2,tab3);
    */

    /*
    int tab1[3]={1,2,3};
    int tab2[3]={4,5,6};
    int tab3[3];
    int n=3;
    polacz2(n,tab1,tab2,tab3);
    */

    /*
    int tab1[3]={1,2,10};
    int tab2[3]={4,5,6};
    int tab3[3]={7,1,5};
    int n=3;
    sortuj1(n,tab1,tab2,tab3);
    sortuj2(n,tab1,tab2,tab3);
    sortuj3(n,tab1,tab2,tab3);
    */

    /*
    int tab[3]={5,2,10};
    int n=3;
    printf("a) %d\n",zad10a(n,tab));
    printf("b) %d\n",zad10b(n,tab));
    printf("c) %d\n",zad10c(n,tab));
    printf("d) %d\n",zad10d(n,tab));
    */

    /*
    int tab1[3]={1,2,10};
    int tab2[3]={4,5,6};
    int n=3;
    printf("%d\n",zad11(n,tab1,tab2));
    */

    int tab[3]={1,2,10};
    int n=3;
    przesun(n,tab);

    return 0;
}
