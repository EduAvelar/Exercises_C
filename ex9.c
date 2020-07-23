#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2, n3;

    printf("\n\t Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 > n2 && n1 > n3){
        printf("\n\t The biggest number is %d\n", n1);
    } else if(n2 > n1 && n2 > n3){
        printf("\n\t The biggest number is %d\n", n2);
    }else{
        printf("\n\t The biggest number is %d\n", n3);
    }

}
/*comparação de tres numeros, verificando cada um para saber qual é o maior*/
/*Compared three numbers, checking each to find out which one is the biggest*/
