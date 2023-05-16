//
// Created by matev on 9. 05. 2023.
//

#include "vaja11.h"
#include <stdio.h>

const char* byte_to_binary(unsigned short x){
    static char b[sizeof(unsigned short)*8+1 ] = {0};
    int y;
    long long z;
    for(z = 1LL<<sizeof(unsigned short)*8-1,y = 0; z > 0; z >>= 1, y++)
    {
        b[y] = (((x & z) == z) ? '1' : '0');
    }
    b[y] = 0;
    return b;
}
void printAll(unsigned short x){
    printf("\n%d",x);
    printf("\n%04x", x);
    printf("\n%s", byte_to_binary(x));
}

void vajaEnajst(){
    printf("Maske!");
    unsigned short x = 10;
    printAll(x);
    x = 0xF00A;
    printAll(x);
    printf("\n%s", byte_to_binary(x));
    x = x >> 3;
    printf("\n%s", byte_to_binary(x));
    x = x << 3;
    printf("\n%s", byte_to_binary(x));
    x = ~x;
    printf("\n%s", byte_to_binary(x));
    x = 0xF00A;
    printf("\n%s", byte_to_binary(x));
    unsigned short maska, rezultat;
    // & bitni in, && logični in, | bitni ali, || logični ali
    // Vklop bita - operacija ALI
    // maska 0 povsod, 1 kjer vklopim
    maska = 0x0E00;
    printf("\n%s", byte_to_binary(x));
    printf("\n%s", byte_to_binary(maska));
    rezultat = x | maska;
    printf("\n%s", byte_to_binary(rezultat));
    x = rezultat;
    // Izklop bita - operacija IN
    // maska 1 povsod, 0 kjer izklopim
    maska = 0xAFFD;
    rezultat = x | maska;
    printf("\n%s", byte_to_binary(maska));
    rezultat = maska & x;
    printf("\n%s", byte_to_binary(rezultat));
    x = rezultat;
    // Preverim EN bit - operacija IN
    // maska obratno od izklopa
    maska = 0x2000;
    printf("\n%s", byte_to_binary(maska));
    if(x & maska){  //  (x & maska) != 0
        printf("\nBit je prižgan");
    }
    else{
        printf("\nBit je ugasnjen");
    }
    // Preverim VEČ bitov - strogo ali ne?
    maska = 0xC000;
    printf("\n%s", byte_to_binary(maska));
    if(x & maska){  //  (x & maska) != 0  NI STROG
        printf("\nBit(a) je/sta prižgan");
    }
    else{
        printf("\nBit(s) je/nista ugasnjen");
    }
    maska = 0xA000;
    printf("\n%s", byte_to_binary(x));
    printf("\n%s", byte_to_binary(maska));
    if((x & maska) == maska){  //  (x & maska) != 0  JE STROG
        printf("\nBit(a) je/sta prižgan");
    }
    else{
        printf("\nBit(s) je/nista ugasnjen");
    }

    maska = 0xC000;
    printf("\n%s", byte_to_binary(x));
    printf("\n%s", byte_to_binary(maska));
    rezultat = x & maska;
    printf("\n%s", byte_to_binary(rezultat));
    rezultat = x | maska;
    printf("\n%s", byte_to_binary(rezultat));
    rezultat = x ^ maska; // XOR - 1 samo iz kombinacije 1 in 0
    printf("\n%s", byte_to_binary(rezultat));
    return;

}