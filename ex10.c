#include<stdio.h>
#include<stdlib.h>

int main(){
    float salarioAtual, novoSalario;

    printf("\n\t============Reajuste de salario================\n\n");
    printf("\n\tSalario menor que 500 reaiss, reajuste de 15 por cento");
    printf("\n\tSalario entre 500 e 1000 reais, reajuste de 10 por cento");
    printf("\n\tSalario maior que 1000 reais, reajuste de 5 por cento");
    printf("\n\n\n");

    printf("\n\t Digite a valor do salario: ");
    scanf("%f", &salarioAtual);

    if(salarioAtual < 500){
        novoSalario = (salarioAtual * 15)/100;
        salarioAtual = salarioAtual + novoSalario;
        printf("\n\t O salario eh %.2f reais\n", salarioAtual);
    }
    else if(salarioAtual >= 500 && salarioAtual <= 1000){
        novoSalario = (salarioAtual * 10)/100;
        salarioAtual = salarioAtual + novoSalario;
        printf("\n\t O salario eh %.2f reais\n", salarioAtual);
    }
    else if(salarioAtual > 1000){
        novoSalario = (salarioAtual * 5)/100;
        salarioAtual = salarioAtual + novoSalario;
        printf("\n\t O salario eh %.2f reais\n", salarioAtual);
    }
}
