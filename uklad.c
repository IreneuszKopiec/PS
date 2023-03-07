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

        printf("%f\n%f",x,y);
    } else {
        if(wx==0||wy==0) {
            printf("Nieskonczenie wiele rozwiazan");
        } else {
            printf("Uklad sprzeczny");
        }
    }




    return 0;
}
