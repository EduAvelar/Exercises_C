#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        Fa�a um algoritmo que converta uma temperatura em graus Fahrenheit para Celsius. A
        temperatura em Fahrenheit dever� ser lida. Utilize a f�rmula C = (F - 32) * 5/9, onde F � a
        temperatura em Fahrenheit e C � a temperatura em Celsius.

        Make an algorithm that converts a temperature in degrees Fahrenheit to Celsius. The temperature
        in Fahrenheit should be read. Use the formula C = (F - 32) * 5/9, where F is the temperature in
        Fahrenheit and C is the temperature in Celsius.
    */

    float fah, cel;

    printf("\n\t=============FAHRENHEIT TEMPERATURE CONVERTER FOR CELSIUS=================\n");
    printf("\n\t Enter in temperature in Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah - 32) * (float)5/9; /* foi feito um cast pois o resultado entre 5 dividido por � float*/

    printf("\n\t The temperature in Celsius is: %.2f", cel);

}
