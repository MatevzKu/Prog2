//
// Created by matev on 23. 02. 2023.
//
#include <stdio.h>
#include "vaja2.h"

void vajaDve(){
    printf("tudi druga vaja deluje čžš\n");
    int x,y;
    /*printf("Vpiši eno celo število:");
    scanf("%d",&x);
    printf("Vrednost x = %d\n rezultat 2 < x < 5 pa je %d\n", x, 2<x<5);
    printf("Vrednost x = %d\n rezultat 2 < x < 5 pa je %d\n", x, (2<x)&&(x<5));
*/
    x = 5;
    y = 2;
    //printf("%d %d\n", x++,--y);
    //printf("%d %d\n", x, y);
/*
    x = 0;
    y = 10;
    if( x != 0 || ++y > 0){  // if(funkcija1() || funkcija2()){}
        y = y + 10;
    }
    printf("X = %d  in Y =  %d\n", x, y);
    */
    x = -5;
    y = 2;
    //x %= y;  // x = x % y       += -= *= /=
    //x =- y;   // x = -y
    //x =* y;
    //x = 1 + (y == 6);
    //x + 2 - 3 * (y - 1);
    //++x + --y;
    //x + 1 = y;  ALI y = x +1 ALI x = y -1
    //y = y / x;
    //x = x/6*6.0;
    //y = 10 - 6/3/2;
    //y = y && (x -= 5);  // y = y && (x = 0) -> y = 2 && 0  -> y  = 0

    //x = 0 || y++;

    //printf("X = %d  in Y =  %d\n", x, y);

    float t;
    t = (float)y / x;
    printf("Rezultat = %f\n",t);


    return;
}