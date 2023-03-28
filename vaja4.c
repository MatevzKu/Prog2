//
// Created by matev on 14. 03. 2023.
//
#include <stdio.h>
#include "vaja4.h"
int fibonachi(int maxClen);
// Napaka - int funkcija(int x,y,z)
// Pravilno - int funkcija(int x, int y, int z)
int Maxfibonachi(){
    unsigned long clen_1 = 0, clen_2 = 1, temp;
    int stevec = 2;
    do{
        temp = clen_1+clen_2;
        clen_1 = clen_2;
        clen_2 = temp;
        stevec++;
    }while(clen_1 <= clen_2);

    printf("Zadnji člen je %lu\n",clen_1);
    return stevec;
}



void vajaStiri(){
    printf("Danes bomo pa funkcionalni..\n");

    printf("Izračunal sem %d členov\n",fibonachi(15));
    printf("Izračunal sem %d členov\n",fibonachi(100));
    printf("Izračunal sem %d členov\n",fibonachi(10000));
    printf("Pri danem formatu sem lahko dobil %d členov\n",Maxfibonachi());

    double luna = 7.34767309e22;
    double sonce = 1.989e30;
    printf("Luna =   %40.1lf\n",luna);
    printf("Sonce =  %40.1lf\n",sonce);
    printf("Skupaj = %40.1lf\n",sonce+luna);

    float cifra;
    printf("Eno decimalno cifro prosim:");
    scanf("%f",&cifra);
    if(cifra == (float)0.2){
        printf("Bravo!");
    }
    else{
        printf("Total fail!");
    }


    return;
}

int fibonachi(int maxClen){
    short clen_1 = 0, clen_2 = 1, temp;
    int stevec = 2;
    do{
        temp = clen_1+clen_2;
        clen_1 = clen_2;
        clen_2 = temp;
        stevec++;
    }while(stevec < maxClen);

    printf("Zadnji člen je %d\n",clen_1);
    return stevec;
}