#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("\n\t Enter the number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("\n\tThe number entered is positive\n");
    }else if(num < 0){
        printf("\n\t The number entered is negative\n");
    }else{
        printf("\n\t The number entered is equal to zero\n");
    }
}
/*O numero digitado esta sendo comparado para verificar se é positivo, negativo ou zero*/

/*The number entered is being compared to check it is positive, nagative or zero*/
