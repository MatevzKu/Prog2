//
// Created by matev on 11. 04. 2023.
//
#include <stdio.h>
#include <string.h>
#include "vaja8.h"

char *odlomiNiz(char niz[], char locilo){
    static char *k_znak;
    if(niz != NULL) k_znak = niz;
    char *k_start;
    k_start = k_znak;
    if (*k_znak == 0){
        return NULL;
    }
    while(*k_znak != locilo){
        if(*k_znak == 0){
            break;
        }
        k_znak++;
    }
    *k_znak = 0;
    k_znak++;
    return k_start;
}






void vaja8(){
    printf("Danes pa nakladamo..\n");
    char znak = 'c';
    char tekst[100] = "Tole je danes moj doooolgi tekst\n";
    printf("En sam znak = %c\n", znak);
    printf("Znakovni niz = %s\n", tekst);
    printf("%c **** %s", tekst[3], tekst+6);  // *(tekst+5) <-> tekst[5]
    char *pNiz;
    //pNiz = &tekst;
    pNiz = tekst;
    printf("Niz z drugim kazalcem = %s\n",pNiz);
    pNiz[10] = 'g';
    printf("Niz z drugim kazalcem = %s\n",pNiz);
    char demo[] = "ena,dva,tri,štiri,pet,šest";
    char *k_demo;
    char *demo2;
    demo2 = demo;
    k_demo = odlomiNiz(demo,',');
    while(k_demo){
        printf("%s\n",k_demo);
        k_demo = odlomiNiz(NULL,',');
    }

    for(int i = 0; i < 5; i++) {
        while (*demo2 != 0) {
            printf("%c", *demo2);
            demo2++;
        }
        demo2++;
    }




    return;
}
