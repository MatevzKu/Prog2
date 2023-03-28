//
// Created by matev on 21. 03. 2023.
//
#include <stdio.h>
#include "vaja5.h"


void vajaPet(){
    printf("petič\n");
    char a = 126;
    printf("%d %hhd", a, a+5);
    unsigned char b = 254;
    printf("\n%hhu %hhu", b, b+300);

    int c;
    c = 10;
    printf("\nVrednost spremenljivke c = %d", c);
    int *p;
    p = &c;
    printf("\nVrednost kazalca je p = %d",p);
    printf("\nNaslov sprem. c je %d", &c);
    printf("\nVrednost kamor kaže p pa je *p = %d",*p);
    *p = 33;
    printf("\nVrednost spremenljivke c = %d", c);
    int *r = &c;
    *r = 44;
    printf("\nVrednost kazalca *p = %d", *p);
    /*int *k;
    *k = 2234;
    k = &c;
    printf("\nVrednost kazalca *p = %d", *p);*/
    p++;
    printf("\nVrednost kazalca je p = %d",p);
    printf("\nNaslov sprem. c je %d", &c);
    printf("\nVrednost kamor kaže p pa je *p = %d",*p);

    return;
}