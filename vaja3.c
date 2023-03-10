//
// Created by matev on 7. 03. 2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "vaja3.h"

void vajaTri() {
    srand(time(NULL));
    printf("Tretja vaja\n");
    int i = 0;
    do {
        printf("%d\n", 1 + rand() % 6);
        i++;
    } while (i < 15);

    int stevilo, desetice, enice;
    printf("Vpiši prosim številko med 30 in 99:");
    scanf("%d", &stevilo);

    desetice = stevilo / 10;
    enice = stevilo % 10;
/*
    if(enice == 1){
        printf("ena");
    }
    else if(enice == 2){
        printf("dva");
    }
    else if(enice == 3){
        printf("tri");
    }*/
    switch (enice) {
        case 1:
            printf("ena");
            break;
        case 2:
            printf("dva");
            break;
        case 3:
            printf("tri");
            break;
        case 4:
            printf("štiri");
            break;
        case 5:
            printf("pet");
            break;
    }
    if (enice != 0) {
        printf("in");
    }
    switch (desetice) {
        case 3:
            printf("tri");
            break;
        case 4:
            printf("štiri");
            break;
        case 5:
            printf("pet");
            break;
    }
    printf("deset");

    int x;
    printf("Eno število med 1 in 6 prosim:");
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("Tule bom nakladal\n");
            printf("Pa še malo teksta\n");
            x = x * 10 - 2;
            printf("Nova vrednost x = %d\n", x);
            break;
        case 2:
            printf("Tole naj bi bila druga možnost\n");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Tole pa šesta možnost\n");
            break;
        default :
            printf("a ne poznaš cifer med 1 in 6???\n");
    }

    if(x<0){
        x = 1;
    }else{
        x = 0;
    }

    switch(x<0){
        case 1: x = 1; break;
        case 0: x = 0; break; // default: x = 0;
    }


    return;


}
