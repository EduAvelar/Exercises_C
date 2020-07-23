#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade1, idade2, idade3, res;

    printf("\n\t Enter three ages: ");
    scanf("%d %d %d", &idade1, &idade2, &idade3);
    //dentro esse scanf é pego tres entradas, para que seja feita a soma logo abaixo
    res = idade1 + idade2 + idade3;

    //dentro do if ele compara se a soma das tres idades, é maior ou igual a 100
    if(res >= 100){
        printf("\n\t The sum of ages is greater/equal to 100\n");
    }else{
        printf("\n\t The sum of ages is less than 100\n");
    }
}
