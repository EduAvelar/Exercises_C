#include <stdio.h>
#include <stdlib.h>

int main(){

    /* 3-Faça um algoritmo que leia um número real e verifique se ele está dentro do intervalo -1 e 1*/
    /* Make an algorithm that reads a real number and check if it is within the range -1 and 1*/

    float num;
    printf("\n\t Enter a real number: ");
    scanf("%f", &num);

    if( num > -1 && num < 1 ){
        printf("\n\tThe number is between -1 e 1\n");
    }else{
        printf("\n\tThe number is not between -1 e 1\n");
    }
}
