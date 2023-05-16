//
// Created by matev on 25. 04. 2023.
//
#include <stdio.h>
#include "vaja10.h"

#define ST_ZNAKOV 20
#define DOLZINA 5

typedef struct {
    char ime[ST_ZNAKOV+1];
    unsigned long tel;
} vnos;

vnos imenik[DOLZINA] = {
        {"Janez", 41555666},
        {"Tristan", 306845678},
        {"Jasminka", 40758964},
        {"Janko", 5176489},
        {"Tereza", 41888656}
};

void vajaDeset(){
    int dolzina_im = DOLZINA;
    char iskano[ST_ZNAKOV+1];
    char *k_iskano = iskano;
    char *k_imenik_znak;
    vnos *k_imenik = imenik;
    int i, ujemanje;
    do{
        printf("Išči (0-izhod): ");
        scanf("%s",iskano);
        if(iskano[0]=='0' && iskano[1] == 0){
            printf("Nasvidenje\n");
            break;
        }
        printf("Niz za iskanje = %s\n",iskano);
        k_imenik = imenik;
        for(i = 0; i < dolzina_im; i++){
            ujemanje = 1;
            k_iskano = iskano;
            k_imenik_znak = (char *)k_imenik;
            while(*k_iskano){
                if(*k_iskano != *k_imenik_znak){
                    ujemanje = 0;
                }
                *k_iskano++;
                *k_imenik_znak++;
            }
            if(ujemanje){
                printf("\t%s %lu\n",k_imenik->ime,k_imenik->tel);
            }
            k_imenik++;
        }
        printf("---------------\n");
    }while(1);

    printf("Iskanje po struktih");
    return;
}