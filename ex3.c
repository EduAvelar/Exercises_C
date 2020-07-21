#include <stdio.h>
#include <stdlib.h>

int main(){
    /*2-Suponha tr�s vari�veis inteiras X, Y e Z com os valores 2, 5 e 9, respectivamente, e a
    //vari�vel caracter A contendo o valor 'F'. Qual o resultado das opera��es l�gicas abaixo?*/

    /*Suppose three variables integer X, Y and Z with values 2, 5 and 9, respectively, and
    variable character A containing the value 'F'. What's the result of the logical operations below */

    int x=2, y=5, z=9;
    char A = 'F';

    printf("\n\t The expression (X + Y > Z) and (A == 'F') is ? \n");
    if( x+y > z && A == 'F'){
        printf("\n\t True\n");
        /*with logical operator AND to be true, both expression should must be true*/
    }else{
        printf("\n\t False\n");
    }
    printf("\n\t==================================================\n");

    printf("\n\t The expression (X + Y > Z) and (A == 'M') is? \n");
    if( x+y > z && A == 'M'){
        printf("\n\t True\n");
    }else{
        printf("\n\t False\n");
    }
    printf("\n\t===================================================\n");

    printf("\n\t The expression (X + Z > Y) and (A == 'F') is?\n");
    if((x+z > y) && (A == 'F')){
       printf("\n\t True\n");
    }else{
        printf("\n\t False\n");
    }
    printf("\n\t===================================================\n");

    printf("\n\t The expression (X + Y > Z) or (A == 'F') is?\n");
    if((x+y>z) || (A=='F')){
        printf("\n\t True \n");
    }else{
        printf("\n\t False \n");
    }
    printf("\n\t===================================================\n");

    printf("\n\t The expression (X + Y > Z) or (A == 'M') is?\n");
    if((x+y>z) ||(A=='M')){
        printf("\n\t True\n");
    }else{
        printf("\n\t False\n");
    }
    printf("\n\t===================================================\n");

    printf("\n\t The expression (X + Z > Y) or (A == 'F') is?\n");
    if((x+z>y) || (A=='F')){
        printf("\n\t True\n");
    }else{
        printf("\n\t False\n");
    }
    printf("\n\t===================================================\n");

    printf("\n\t The expression (X + Y > Z) or (A == 'M') is?\n");
    if((x+y>z) || (A == 'M')){
        printf("\n\tTrue\n");
    }else{
        printf("\n\tFalse\n");
    }
    printf("\n\t===================================================\n");


}
