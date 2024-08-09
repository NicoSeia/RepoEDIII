#include<stdio.h>

// Tabla del 8

int main(){

    int num = 8;

    printf("----------Tabla del 8----------\n");

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n", i, num, i * num);
    }

    printf("-------------------------------\n");

    return 0;
}