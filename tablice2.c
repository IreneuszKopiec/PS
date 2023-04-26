#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <wchar.h>
#include <string.h>
int** alokuj(unsigned int n, unsigned int m) {
    int **t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++) {
        t[i]=malloc(n*sizeof(int));
    }
    return t;
}
/*
int(* alokuj2(unsigned int n, unsigned int m))[]{
    return malloc(n*sizeof(int(m)));
}
*/
void wypisz(int **t,unsigned int n, unsigned int m) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
                printf("%d\t")
        }
    }
}
int main()
{
    
    return 0;
}
