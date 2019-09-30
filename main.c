#include <stdio.h>
#include <stdlib.h>

int main()
{

int nota;
int um = 0, dois = 0, cinco = 0, dez = 0, vinte = 0, cinquenta = 0, cem = 0;
int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, valor5 = 0, valor6 = 0, valor7 = 0;

printf("Nota: "); scanf("%d", &nota);

if(nota > 0 && nota < 1000000){

cem = nota/100;
valor1 = nota - (100 * cem);

cinquenta = valor1/50;
valor2 = valor1 - (50 * cinquenta);

vinte = valor2 / 20;
valor3 = valor2 - (20 * vinte);

dez = valor3 / 10;
valor4 = valor3 - (10 * dez);

cinco = valor4 / 5;
valor5 = valor4 - (5 * cinco);

dois = valor5 / 2;
valor6 = valor5 - (2 * dois);

um = valor6 / 1;
valor7 = valor6 - (1 * um);

 printf("%d", nota);
 printf("\n%d notas de R$ 100,00", cem);
 printf("\n%d notas de R$ 50,00", cinquenta);
 printf("\n%d notas de R$ 20,00", vinte);
 printf("\n%d notas de R$ 10,00", dez);
 printf("\n%d notas de R$ 5,00", cinco);
 printf("\n%d notas de R$ 2,00", dois);
 printf("\n%d notas de R$ 1,00", um);
}
    return 0;
}
