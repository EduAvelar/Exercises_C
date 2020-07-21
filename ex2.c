#include<stdio.h>
#include<stdlib.h>

int main(){

    /*Suppose three variables integer A, B e C with values 2, 3, 12, respectively*/
    /*What is the result of the arithmetic operations below?*/

    int a=2, b=3, c=12;
    printf("\n\n\n");
    printf("\t=====List of Exercises - Ex 1========\n\n");
    printf("\n\t 100 * (C div B) + A = %d \n ", 100*(c/b)+a );
    printf("\t C / A + B = %d \n", c/a+b);
    printf("\t C rest of the division by A - B = %d\n", (c%a)-b);
    printf("\t C / ( A + B - 1) = %d\n", c/(a+b-1));
    printf("\t A div 2 = %d\n", a/2);
    printf("\t (((A * B)/(C - 9)) * ((B + 3) % B)) + 4 = %d\n", (((a*b)/(c/9))*((b+3)%b))+4);
}
