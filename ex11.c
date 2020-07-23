#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;


    printf("\n\tDigite um valor para 'a': ");
    scanf("%d", &a);
    printf("\n\tDigite um valor para 'b': ");
    scanf("%d", &b);
    printf("\n\tDigite um valor para 'c': ");
    scanf("%d", &c);

    if(a < b+c && b < a+c && c < a+b){
        if(a == b && a == c){
            printf("\n\t TRIANGULO EQUILATERO");
        }
        if((a != b && a != c && b==c) || (b != a && b != c && a==c) || (c != a && c != b && a==b) ){
            printf("\n\t TRIANGULO ISOSCELES");
        }
        if(a != b && a != c && b != c){
            printf("\n\t TRIANGULO ESCALENO");
        }
    }
}
