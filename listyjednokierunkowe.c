#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct element {
    int i;
    struct element * next;
};
struct element *utworz() {
    return NULL;
};
void wyczysc(struct element* Lista) {
    struct element *wsk = Lista;
    while(Lista!=NULL) {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
}
struct element * dodajnapoczatek(struct element* Lista, int a) {
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
}
struct element * dodajnakoniec(struct element* Lista, int a) {
    struct element *wsk;
    if(Lista==NULL) {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL) {
        wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
}
int dlugosclisty(struct element* Lista) {
    int l=0;
    while(Lista!=NULL) {
        l++;
        Lista=Lista->next;
    }
    return l;
}
int sumaelementow(struct element* Lista) {
    int sum=0;
    while(Lista!=NULL) {
        sum=sum+Lista->i;
        Lista=Lista->next;
    }
    return sum;
}
void wypiszelementy(struct element* Lista) {
    while(Lista!=NULL) {
        printf("%d\t", Lista->i);
        Lista=Lista->next;
    }
    printf("\n");
}
int minimum(struct element *Lista) {
    int min=Lista->i;
    while(Lista!=NULL) {
        if(Lista->i<min) {
            min=Lista->i;
        }
        Lista=Lista->next;
    }
    return min;
}
struct element *dodajw(struct element* Lista, struct element* elem, int a) {
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    if(elem==NULL) {
        wsk->next=Lista;
        Lista=wsk;
    } else {
        wsk->next=elem->next;
        elem->next=wsk;
    }
    return Lista;
}
struct element *usun(struct element *Lista, int a) {
    struct element *wsk,*wsk2;
    if(Lista==NULL) {
        return Lista;
    }
    wsk=Lista;
    if(Lista->i==a) {
        Lista=Lista->next;
        free(wsk);
    } else {
        while((wsk->next!=NULL)&&(wsk->next->i!=a)) {
            wsk=wsk->next;
        }
        if(wsk->next!=NULL) {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return Lista;
}
struct element *sklej(struct element *Lista1, struct element *Lista2) {
    struct element *wsk=Lista1;
    while(wsk->next!=NULL) {
        wsk=wsk->next;
    }
    wsk->next=Lista2;
    return Lista1;
}
struct element *sklej2(struct element *Lista1, struct element *Lista2) {
    struct element *wsk=Lista1;
    while(wsk->next!=NULL) {
        wsk=wsk->next;
    }
    wsk->next=Lista2;
    return Lista1;
}
int main(){
    struct element *lista=utworz();
    lista=dodajnakoniec(lista, 9);
    lista=dodajnakoniec(lista, 6);
    lista=dodajnakoniec(lista, 2);
    lista=dodajnakoniec(lista, -5);

    wypiszelementy(lista);
    printf("%d\n", dlugosclisty(lista));
    printf("%d\n", sumaelementow(lista));
    printf("%d\n", minimum(lista));
    lista=usun(lista, 6);
    wypiszelementy(lista);

    struct element *lista2=utworz();
    lista2=dodajnakoniec(lista2, 1);
    lista2=dodajnakoniec(lista2, 2);
    lista2=dodajnakoniec(lista2, 3);
    lista2=dodajnakoniec(lista2, 4);
    lista=sklej(lista,lista2);
    wypiszelementy(lista);
    return 0;
}
