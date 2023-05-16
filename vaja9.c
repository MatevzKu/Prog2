//
// Created by matev on 18. 04. 2023.
//
#include <stdio.h>
#include "vaja9.h"

char *prilepiNiz(char niz_a[],char niz_b[]){
    char *k_znak_a,*k_znak_b;
    k_znak_a = niz_a;
    k_znak_b = niz_b;
    //printf("\nVelikost niz_a = %d\n", sizeof niz_a);
    while(*k_znak_a != 0) k_znak_a++;
    printf("\nPorabil sem že %d znakov\n", k_znak_a-niz_a);
    do{
        *k_znak_a = *k_znak_b;
        k_znak_a++;
        k_znak_b++;
    }while(*k_znak_b != 0);
//Tudi slepa kura0
//                zrno0
//Tudi slepa kura zrno
    *k_znak_a = 0;
    return niz_a;
}

char *dvaVenem(char *niz, char znak){
    char *k_znak;
    k_znak = niz;
    while(*k_znak != znak){
        if(*k_znak == 0){
            break;
        }
        k_znak++;
    }
    return k_znak;
}

void vajaDevet(){
    printf("Nakladamo dalje");
    char pregovor[100] = "Tudi slepa kura";
    // char pregovor2 = "Tudi slepa kura";
    char niz1[] = " zrno";
    printf("\nMoj pregovor ima na voljo %d mest \n", sizeof pregovor);
    printf("Pregovor = %s \n", pregovor);
    printf("%s \n", niz1);
    prilepiNiz(pregovor,niz1);
    printf("%s",pregovor);
    prilepiNiz(pregovor, " najde.");
    printf("\n%s\n",pregovor);
    char *nasel;
    nasel = pregovor;
    do{
        nasel = dvaVenem(++nasel,'a');
        printf("%s\n", nasel);
    }while(*nasel);
    printf("Po vsem nakladanju ti lahko povem da ima pregovor %d znakov\n",nasel-pregovor);
    /*
    nasel = dvaVenem(pregovor,'r');
    printf("%s\n", nasel);
    nasel = dvaVenem(++nasel,'r');
    printf("%s\n", nasel);*/
    char *dolzina = dvaVenem(pregovor,0);
    printf("\nDolžina je %d", dolzina-pregovor);
    return;
}