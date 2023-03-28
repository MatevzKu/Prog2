//
// Created by matev on 28. 03. 2023.
//
#include <stdio.h>
#include "vaja6.h"

int povecaj(void){
    static int x = 0;
    x++;
    return x;
}

void dodajStevilo(int x){
    int static vejica = 0;
    if(x==0){
        vejica = 0;
    }else{
        if(vejica == 0){
            printf("%d",x);
            vejica = 1;
        }
        else{
            printf(", %d",x);
        }
    }
    return;
}

int varnoDeljenje(int x,int y, float *r){
    if(y == 0){
        *r = 0;
        return 0;
    }else{
        *r = (float)x/y;
        return 1;
    }
}


void vaja6(){
    printf("Danes pa kažemo s prstom...\n");
/*    float x,y,*p,*q;
    p = &x;
    y = 10;
    printf("%f %f %d %d\n", x,y,p,q);
    *p = y; // x = y
    printf("%f %f %d %d\n", x,y,p,q);
    *p + 10; // x + 10;
    printf("%f %f %d %d\n", x,y,p,q);
    q = p;
    printf("%f %f %d %d\n", x,y,p,q);
    *p = *q;
    printf("%f %f %d %d\n", x,y,p,q);
/*
    int z,*k = &z;
    z = 10;

    k++; // kazalec gre za en int naprej
    *k++;  // isto kot zgoraj
    (*k)++; //  z++ -> z = 11
    (&k)++; //  system error
    *k *= 20; // z *= 10 -> z = 200
    k = &x;
    *k + 1;
*/

    int i;
    for(i = 0; i < 15; i++){   //for(int i = 0; i < 15; i++) {}
       printf("%d\n",povecaj());
    }

    dodajStevilo(12);
    dodajStevilo(34);
    dodajStevilo(56);
    dodajStevilo(0);
    printf("\n");
    dodajStevilo(32);
    dodajStevilo(45);

    float rezultat;
    int a, b;

    a = 3;
    b = 4;

    if(varnoDeljenje(a,b,&rezultat)){
        printf("\n%d / %d = %f",a,b,rezultat);
    }else{
        printf("\nDeliš z ničlo, fail!");
    }

    return;
}
