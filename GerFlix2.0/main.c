#include <stdio.h>
#include <stdlib.h>
#include"serie.h"

#define TAM 5

eSerie Series[TAM];
/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{




    printf("\t\t\t\tMatias Carizu\n");
    mostrarSeries(Series,5);
    return 0;
}
