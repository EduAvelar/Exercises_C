#include <stdio.h>
#include <stdlib.h>

int main(){
    /*4-Fa�a um algoritmo que leia um caracter e verifique se ele � o caracter 's' ou o caracter 'n'.
    Se n�o for nem 's' nem 'n', informar o usu�rio.*/

    /*Make the algorithm that read a character and check if it's the character 's' or the character 'n'*/

    char letter;

    printf("\n\t Write one letter: ");
    scanf("%c", &letter);
    if(letter == 's' || letter == 'n'){
        printf("\n\t The letter typed is 's' or 'n'\n");
    }else{
        printf("\n\t The letter typed is not 's' or 'n'\n\n");
    }
}
