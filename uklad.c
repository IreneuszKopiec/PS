#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*int x, y, z;
    scanf("%d%d%d",&x,&y,&z);
    printf("max(%d,%d,%d) = ",x,y,z);
    if(((x>=y)&&(x<=z))||((x<=y)&&(x>=z))) ///Tu porownuje nasze zmienne
    {
        printf("%d",x);
    } else if(((y>=x)&&(y<=z))||((y<=x)&&(y>=z)))
    {
        printf("%d",y);
    } else {
        printf("%d",z);
    }*/

    /*
    int l;
    printf("Podaj 1 gdy masz dana podstawe i wysokosc lub 2 gdy masz dlugosc bokow");
    scanf("%d",&l);
    if(l==1) {
        printf("Podaj dlugosc podstawy i wysokosc\n");
        int a,h;
        scanf("%d%d",&a,&h);
        float w=(a*h)/2.0;
        printf("Pole trojkata wynosi %f",w);
    }
    else if(l==2) {
        printf("Podaj dlugosc bokow\n");
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        float p=(a+b+c)/2.0;
        float w=sqrt((p*(p-a)*(p-b)*(p-c)));
        printf("Pole trojkata wynosi %f",w);
    }*/

    /*
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    printf("%f*x+%f*y=%f\n",a,b,c);
    printf("%f*x+%f*y=%f\n",d,e,f);
    float w=a*e-b*d;
    float wx=c*e-b*f;
    float wy=a*f-c*d;
    if(w!=0) {
        float x=wx/w;
        float y=wy/w;
        printf("Rozwiazaniem jest x = %f\ i y = %f",x,y);
    } else {
        if(wx==0&&wy==0) {
            printf("Uklad nieoznaczony. Nieskonczenie wiele rozwiazan");
        } else {
            printf("Układ sprzeczny. Brak rozwiazan");
        }
    }
    */

    /*
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("Zdefiniowales rownanie kwadratowe\n%f*x^2+%f*x+%f=0\n",a,b,c);
    float delta=(b*b)-(4*a*c);
    if(delta>0) {
        float x1=(-b-sqrt(delta))/(2*a);
        float x2=(-b+sqrt(delta))/(2*a);
        printf("Dwa rozwiazania. x1=%f i x2=%f",x1,x2);
    } else if(delta==0) {
        float x=(-b)/(2*a);
        printf("Jedno rozwiazanie. x0=%f",x);
    } else {
        printf("Brak rozwiazan");
    }
    */

    /*
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<m+1;i++){
        printf("%d ",n*i);
    }
    */

    /*
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=(m/n)*(n+1);i<k;i=i+n){
            printf("%d ",i);
    }*/

    /*
    int n,wynik=1;
    scanf("%d",&n);
    for(int i=0;i<=n;i++) {
        if(i>1) {
            wynik*=i;
        }
    }
    printf("Silnia z liczby %d wynosi %d",n,wynik);
    */

    /*
    int n=0,wynik=1,k=1000,i=2;
    while(wynik<k) {
            wynik+=i*i;
            i++;
            n++;
    }
    printf("Wynik nie przekracza %d dla sumy kwadratow od 1 do %d",k,n);
    */


    /*
    int n,wynik=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2) {
        wynik*=i;
    }
    printf("%d",wynik);
    */

    /*
    int n,temp,p,d=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
            temp=p;
            p=d;
            d=d+temp;
    }
    printf("%d",d);
    */


    int n,m,dzielnik,reszta,max,min,help;
    scanf("%d%d",&n,&m);
    if(m>n){
        max=m;
        min=n;
    } else {
        max=n;
        min=m;
    }

    for(int i=1;i<=n*m;i++) {
            reszta=max%min;
            help=max;
            max=min;
            min=reszta;
            if(reszta>0) {
                dzielnik=reszta;
            }
    }
    printf("%d",dzielnik);


    return 0;
}
