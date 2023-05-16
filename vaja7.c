//
// Created by matev on 4. 04. 2023.
//
#include <stdio.h>
#include "vaja7.h"
#include <time.h>
#include <stdlib.h>
#define DIM 5000

int varDeljenje(int a, int b, float *r){
    if(b == 0){
        *r = 0;
        return 0;
    }
    else{
        *r = (float)a/b;
        return 1;
    }
}

typedef struct student{
    int visina;
    int starost[200];
    float teza;
    char spol;
    char ime[200];
    char priimek[200];
} student;

student ekipa[DIM];
student *pEkipa[DIM];
clock_t zacetek;

void vaja7(){
    printf("Še več kazalcev");

    float rezultat;
    int x = 3, y = 8;
    if(varDeljenje(x,y,&rezultat)){
        printf("\nDeljenje uspešno, rezultat = %f",rezultat);
    }
    else{
        printf("\nZaj... si, deljenje z ničlo ne špila...");
    }

    student demoStudent;
    demoStudent.visina = 120;
    demoStudent.teza = 78.10;
    demoStudent.spol = 'm';
    printf("\nVisina studenta = %d", demoStudent.visina);
    student *pStudent;
    pStudent = &demoStudent;
    printf("\nTeža študenta = %f", pStudent->teza);// (*pStudent).teza
    printf("\nTeža študenta = %f\n", demoStudent.teza);



    int i, urejeno;
    student tmp, *pTmp;

    for(i = 0; i < DIM; i++){
        ekipa[i].visina = rand()%21 + 160;
        pEkipa[i] = &ekipa[i];
    }


    zacetek = clock();
    do {
        urejeno = 1;
        for(i = 1; i < DIM; i++){
            if(pEkipa[i-1]->visina > pEkipa[i]->visina)  //(*pEkipa[i]).visina
            {
                pTmp = pEkipa[i-1];
                pEkipa[i-1] = pEkipa[i];
                pEkipa[i] = pTmp;
                urejeno = 0;
            }
        }
    }while(!urejeno);
    printf("Cas s kazalci je %2fs\n", (double)(clock()-zacetek)/CLOCKS_PER_SEC);

    zacetek = clock();
    do {
        urejeno = 1;
        for(i = 1; i < DIM; i++){
            if(ekipa[i-1].visina > ekipa[i].visina)
            {
                tmp = ekipa[i-1];
                ekipa[i-1] = ekipa[i];
                ekipa[i] = tmp;
                urejeno = 0;
            }
        }
    }while(!urejeno);
    printf("Cas brez kazalcev je %2fs\n", (double)(clock()-zacetek)/CLOCKS_PER_SEC);




return;
}