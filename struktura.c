#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct trojkat {
    double a, b, c;
};
double obwod(struct trojkat t) {
    return t.a+t.b+t.c;
}
double pole(struct trojkat t) {
    double p = obwod(t)/2;
    return sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
}
void czydasie(struct trojkat t) {
    double n1, n2, max;
    if(t.a<t.b&&t.a<t.c) {
        n1=t.a;
        if(t.b<t.c) {
            n2=t.b;
            max=t.c;
        } else {
            n2=t.c;
            max=t.b;
        }
    }
    if(t.b<t.a&&t.b<t.c) {
        n1=t.b;
        if(t.a<t.c) {
            n2=t.a;
            max=t.c;
        } else {
            n2=t.c;
            max=t.a;
        }
    } else {
        n1=t.c;
        if(t.b<t.a) {
            n2=t.b;
            max=t.a;
        } else {
            n2=t.a;
            max=t.b;
        }
    }
    if(n1+n2>=max) {
        printf("Tak\n");
    } else {
        printf("Nie\n");
    }
}
void jakitrojkat(struct trojkat t) {
    if((t.a*t.a+t.b*t.b==t.c*t.c)||(t.b*t.b+t.c*t.c==t.a*t.a)||(t.c*t.c+t.a*t.a==t.b*t.b)){
        printf("prostokatny");
    }
}
void przepisz(struct trojkat troj1, struct trojkat *troj2){
    *troj2=troj1;
}
void wypisz(struct trojkat t) {
    printf("%f\n", t.a);
    printf("%f\n", t.b);
    printf("%f\n", t.c);
    printf("\n");
}
struct punkt {
    double a, b, c;
};
double odleglosc(struct punkt p1, struct punkt p2){
    return sqrt((p2.a-p1.a)*(p2.a-p1.a)+(p2.b-p1.b)*(p2.b-p1.b)+(p2.c-p1.c)*(p2.c-p1.c));
}
double minimun(struct punkt tab[], int n){
    int i,j;
    double pom;
    double min=odleglosc(tab[0], tab[1]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            pom=odleglosc(tab[i],tab[j]);
        }
        if(pom<min) {
            min=pom;
        }
    }
    return min;
}
struct zespolone{
    double im, re;
};
void wypiszzespolone(struct zespolone z)
{
    printf("%f+%fi\n",z.re,z.im);
}
void wczytajzespolone(struct zespolone z)
{
    scanf("%lf", z.im);
    scanf("%lf", z.re);
}
struct zespolone dodaj(struct zespolone z1, struct zespolone z2)
{
    struct zespolone wynik;
    wynik.im=z1.im+z2.im;
    wynik.re=z1.re+z2.re;
    return wynik;
}
struct zespolone iloczyn(struct zespolone z1, struct zespolone z2)
{
    struct zespolone wynik;
    wynik.im=z1.re*z2.im+z1.im*z2.re;
    wynik.re=z1.re*z2.re-z1.im*z2.im;
    return wynik;
}
void wypiszsprezenie(struct zespolone z)
{
    printf("%f-%fi\n",z.re,z.im);
}
double cos1(struct zespolone z) {
    return z.im*z.im+z.re*z.re; //pod pierwiastkiem
}
union super_int{
    int i;
    unsigned int u;
};
struct wiele_int{
    int i;
    unsigned int u;
};
int main(){
    /*
    struct trojkat t1;
    t1.a=1;
    t1.b=1;
    t1.c=2;
    printf("Obwod: %f\n", obwod(t1));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(struct trojkat));
    printf("Pole: %f\n", pole(t1));
    czydasie(t1);
    jakitrojkat(t1);
    struct trojkat t2;
    t2.a=10;
    t2.b=10;
    t2.c=20;
    struct trojkat *wsk = &t2;
    wypisz(t1);
    wypisz(t2);
    przepisz(t1,wsk);
    wypisz(t1);
    wypisz(t2);
    */

    /*
    struct punkt p1;
    p1.a=1;
    p1.b=7;
    p1.c=2;
    struct punkt p2;
    p2.a=4;
    p2.b=9;
    p2.c=0;
    printf("%f\n", odleglosc(p1, p2));
    */

    /*
    struct punkt P;
    P.a=1;
    P.b=7;
    P.c=2;
    struct punkt Q;
    Q.a=4;
    Q.b=9;
    Q.c=0;
    struct punkt R;
    R.a=2;
    R.b=5;
    R.c=8;
    struct punkt tab[3]={P,Q,R};
    printf("%f\n", minimun(tab,3));
    */

    /*
    struct zespolone z1;
    z1.im=3;
    z1.re=1;
    struct zespolone z2;
    z2.im=1;
    z2.re=2;
    wypiszzespolone(z1);
    wypiszzespolone(z2);
    struct zespolone z3=dodaj(z1,z2);
    wypiszzespolone(z3);
    struct zespolone z4=iloczyn(z1,z2);
    wypiszzespolone(z4);
    wypiszsprezenie(z4);
    double mianownik=cos1(z4);
    printf("%f", mianownik);
    */

    struct wiele_int X;
    union super_int Y;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(unsigned int));
    //struktura
    printf("%d\n",sizeof(X));
    printf("%p\n",&X);
    printf("%p\n",&X.i);
    printf("%p\n",&X.u);
    //unia
    printf("%d\n",sizeof(Y));
    printf("%p\n",&Y);
    printf("%p\n",&Y.i);
    printf("%p\n",&Y.u);

    return 0;
}
