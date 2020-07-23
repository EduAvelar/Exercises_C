#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b;
    char op;

    printf("\n\t Digite um valor para 'a': ");
    scanf("%d", &a);
    printf("\n\t Digite um valor para 'b': ");
    scanf("%d", &b);
    printf("\n\t Digite qual operacao deseja: + | - | * | / : ");
    fflush(stdin);
    scanf("%c", &op);

    printf("\n\n\n");

    if(op == '+'){
        printf("\t\t%d", a);
        printf("\n\t\t%c", op);
        printf("\n\t\t%d", b);
        printf("\n\t\t------------");
        printf("\n\t\t%d", a+b);
    }
    if(op == '-'){
        printf("\t\t%d", a);
        printf("\n\t\t%c", op);
        printf("\n\t\t%d", b);
        printf("\n\t\t------------");
        printf("\n\t\t%d", a-b);
    }
    if(op == '*'){
        printf("\t\t%d", a);
        printf("\n\t\t%c", op);
        printf("\n\t\t%d", b);
        printf("\n\t\t------------");
        printf("\n\t\t%d", a*b);
    }
    if(op == '/'){
        printf("\t\t%d", a);
        printf("\n\t\t%c", op);
        printf("\n\t\t%d", b);
        printf("\n\t\t------------");
        printf("\n\t\t%d", (float)a/b);
    }
}
