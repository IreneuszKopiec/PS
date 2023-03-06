#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max, min, suma, srodek;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c) {
        max=a;
    } else if(b>=a&&b>=c) {
        max=b;
    } else {
        max=c;
    }
    if(a<=b&&a<=c) {
        min=a;
    } else if(b<=a&&b<=c) {
        min=b;
    } else {
        min=c;
    }
    suma=a+b+c;
    srodek=suma-min-max;
    printf("%d",srodek);

    return 0;
}
