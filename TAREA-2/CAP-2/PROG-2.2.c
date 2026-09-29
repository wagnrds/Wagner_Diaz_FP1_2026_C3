#include <stdio.h>
/*Incremento de precio.
El programa, al recibir como dato el precio de un producto importado, incrementa el 11% el mismo si es inferior a $1,500.
PRE Y NPR:variable de tipo deal. */

void main (void)
{
float PRE, NPR;
printf("ingrese el precio del producto:");
scanf("%f", &PRE);
if (PRE> 1500)
{
    NPR = PRE * 1.11;
    printf("\nNuevoprecio: %7.2",NPR);
}
}
