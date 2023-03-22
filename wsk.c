#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int podwoj(int *x) {
    *x=2*(*x);
    return *x;
}
int func1(int *a,int *b) {
    if(*a<*b) {
        return *a;
    }
    return *b;
}
int func2(int *a,int *b) {
    if(*a<*b) {
        return a;
    }
    return b;
}
void func3(int *a,int *b) {
    int help=*a;
    *a=*b;
    *b=help;
    //printf("%d %d\n",*a,*b);
}
void func4(int *a,int *b) {
    if(*b<*a) {
        int help=*a;
        *a=*b;
        *b=help;
    }
}
int suma(const int *a,const int *b) {
    return *a+*b;
}
void przepisz(int n,int *x) {
    *x=n;
}
float* rezerwuj() {
    return malloc(sizeof(float));
}
int* rez(int n) {
    return malloc(n*sizeof(int));
}
void prze(const int* x,int *y) {
    *y=*x;
}
double f(int x) {
    return x*x;
}
double g(double (*fun)(int x),int n) {
    return fun(n);
}
double g1(int x) {
    return 3*x;
}
double h(double (*f1)(int x),double (*f2)(int x),int n) {
    if(f1(n)==f2(n)) {
        printf("tak\n");
        return 1;
    }
    printf("nie");
    return 0;
}
int main()
{
    /*
    int a=7;
    printf("%d\n",podwoj(&a));
    printf("%d\n",a);
    */

    /*
    int a=3,b=4;
    printf("%d\n",func1(&a,&b));
    */

    /*
    int a=3,b=4;
    printf("%p %p\n",&a,&b);
    printf("%p\n",func2(&a,&b));
    */

    /*
    int a=3,b=4;
    printf("%p %p\n",&a,&b);
    printf("%d %d\n",a,b);
    func3(&a,&b);
    printf("%p %p\n",&a,&b);
    printf("%d %d\n",a,b);
    */

    /*
    int a=7,b=6;
    printf("%p %p\n",&a,&b);
    printf("%d %d\n",a,b);
    func4(&a,&b);
    printf("%p %p\n",&a,&b);
    printf("%d %d\n",a,b);
    */

    /*
    const int a=3, b=4;
    printf("%d\n",suma(&a,&b));
    */

    /*
    int n=4;
    printf("%d \n",n);
    przepisz(15,&n);
    printf("%d \n",n);
    */

    /*
    float* wsk=rezerwuj();
    printf("%p\n", wsk);
    printf("%d", sizeof(long));
    */

    /*
    int* wsk=rez(5);
    printf("%p\n", wsk);
    printf("%d", sizeof(long));
    */

    /*
    const int a=3;
    int b=2;
    printf("a = %d\n",a);
    printf("b = %d\n\n",b);
    prze(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    */

    /*
    int x=5;
    printf("%f\n",f(x));
    double (*wsk)(int);
    wsk=&f;
    printf("%p\n",wsk);
    printf("%f\n",g(wsk,8));
    */

    int x=5;
    printf("%f\n",f(x));
    double (*wsk1)(int);
    double (*wsk2)(int);
    wsk1=&f;
    wsk2=&g1;
    printf("%p %p\n",wsk1,wsk2);
    printf("%f\n",h(wsk1,wsk2,3));


    return 0;
}
