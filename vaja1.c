//
// Created by matev on 23. 02. 2023.
//
#include <stdio.h>
#include "vaja1.h"
#define inch_v_cm 2.54

void vajaEna(){
    printf("Pozdravljen svet!");
    printf("\nTole zares deluje\n");
    int cifra = 22;
    cifra = cifra + 10;
    printf("Izracunana vrednost je %d \n", cifra);
    printf("Ce imam torej vrednost %d in %d katerih vsota je %d \n", 1, 2, 33);

    float decimalke = 123.4567;
    printf("Decimalka kar tako %f\n",decimalke);
    printf("Decimalka kar tako %.3f\n",decimalke);
    printf("Decimalka kar tako %12.2f\n",decimalke);

    int prva,druga;
    printf("Vpisi dve celi stevili loceni s presledkom:\n");
    scanf("%d %d",&prva,&druga);  // NIKOLI "%d\n%d\n"
    printf("Vpisal si %d in %d", prva, druga);

    float dol_inch, dol_cm;
    printf("Vpisi dolzino v inch: ");
    scanf("%f",&dol_inch);
    dol_cm = dol_inch * inch_v_cm;
    printf("Vpisana dolzina %5.2f inch = %5.2f cm\n",dol_inch,dol_cm);
    return;
}
