#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int potega(int w) {
    for(int i=1;i<w;i++) {
        if(i*i==w) {
            return i;
        }
    }
    return 0;
}
*/

int modul(int x) {
    if(x>0)
        return x;
    return -x;
}
int silnia(int x) {
    if(x==0)
        return 1;
    return silnia(x-1)*x;
}
float potega(int x) {
    if(x==0)
        return 1;
    if(x>0)
    return 2*potega(x-1);
    return 1/potega(-x);
}
unsigned int podloga(unsigned int x) {
    int i=1;
    while(i*i<=x) {
        i++;
    }
    return i-1;
}
unsigned int suma(unsigned int n) {
    int suma=0,i;
    for(i=1;i<=n;i++) {
        suma+=podloga(i);
    }
    return suma;
}
void trojki(unsigned int n) {
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j++) {
            if(i*i+j*j==n) {
                printf("%d^2+%d^2=%d\n",i,j,n);
            }
        }
    }
}
void zlicz() {
    static int liczba=0;
    liczba++;
    printf("Te funkcje wywolano %d razy\n",liczba);
}
int sum(int dodaj) {
    static int wynik=0;
    static int ile=0;
    ile++;
    wynik+=dodaj;
    printf("Wywolano funkcje %d razy, suma podanych liczb wynosi %d\n",ile,wynik);
    return dodaj;
}
int sil(int n) {
    if(n==0)
        return 1;
    return sil(n-1)*n;
}
int ciag(int n) {
    if(n==0)
        return 1;
    return 2*ciag(n-1)+5;
}
int ciag2(int n) {
    if(n==0||n==1)
        return 1;
    return ciag2(n-1)+2*ciag2(n-2)+3;
}
int ciag3(int n) {
    if(n==0||n==1)
        return 1;
    return ciag3(n-1)+ciag3(n-2);
}
void ograniczenie(int k) {
    int i;
    for(i=0;i<k;i++) {
        if(ciag3(i)<k) {
            printf("%d\n",ciag3(i));
        }
    }
}
int ciag4(int n) {
    if(n==0||n==1||n==2)
        return 1;
    return ciag4(n-1)+ciag4(n-2)+ciag4(n-3);
}
int ciag5(int n) {
    if(n==0)
        return 1;
    if(n==1)
        return 2;
    int wynik=0;
    int i;
    for(i=0;i<n;i++) {
        wynik+=ciag5(i);
    }
    return wynik;
}
int ciag6(int n) {
    if(n==0||n==1)
        return 1;
    if(n%2==0)
        return ciag6(n-1)+n;
    return ciag6(n-1)*n;
}
int ciag7(int n) {
    if(n==0||n==1||n==2) return 1;
    if(n%3==0) return ciag7(n-1)+ciag7(n-2);
    if(n%3==1) return 5*ciag7(n-1)+4;
    return ciag7(n-1)+1;
}
int ciag8(int x, int y, int n) {
    if(n==0)
        return x;
    if(n==1)
        return y;
    return ciag8(x,y,n-1)+ciag8(x,y,n-2);
}
int c9(int n, int x){
    if(n==0) {
        return x;
    }
    if(c9(n-1,x)%2==0) {
        return c9(n-1,x)/2;
    } else {
        return 3*c9(n-1,x)+1;
    }
}
int c10(int n,int m) {
    if(m==0) return n;
    if(n==0) return m;
    return c10(n-1,m)+c10(n,m-1)+c10(n-1,m-1);
}
int main()
{
    /*
    zlicz();
    zlicz();
    zlicz();
    */

    /*
    printf("%d\n",sum(5));
    printf("%d\n",sum(3));
    printf("%d\n",sum(8));
    printf("%d\n",sum(2));
    printf("%d\n",sum(1));
    */

    /*
    printf("Silnia wynosi %d\n",sil(5));
    printf("Silnia wynosi %d\n",sil(1));
    printf("Silnia wynosi %d\n",sil(6));
    */

    /*
    int i;
    for(i=0;i<5;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag(i));
    }
    */

    /*
    int i;
    for(i=0;i<=10;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag2(i));
    }
    */

    /*
    int i;
    for(i=0;i<=15;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag3(i));
    }
    */

    /*
    int x;
    scanf("%d",&x);
    ograniczenie(x);
    */

    /*
    int i;
    for(i=0;i<10;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag4(i));
    }
    */


    /*
    int i;
    for(i=0;i<10;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag5(i));
    }
    */

    /*
    int i;
    for(i=0;i<10;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag6(i));
    }
    */

    /*
    int i;
    for(i=0;i<10;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag7(i));
    }
    */

    /*
    int i,x,y;
    scanf("%d%d",&x,&y);
    for(i=0;i<10;i++) {
        printf("Wyraz nr %d wynosi %d\n",i,ciag8(x,y,i));
    }
    */

    /*
    int i;
    int x=101;
    for(i=0;i<=200000&&c9(i,x)!=1;i++) {
        printf("Wyraz %d\n",c9(i,x));
    }
    */

    /*
    int i;
    for(i=1;i<=20;i++) {
        printf("dla f(%d,%d) wynik to %d\n",2,i,c10(2,i));
    }
    */

    int i,j;
    for(i=1;i<=10;i++) {
        for(j=i;j<=10;j++) {
            printf("dla f(%d,%d) wynik to %d\n",i,j,c10(i,j));
        }
    }





    return 0;
}
