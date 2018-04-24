#include <stdio.h>
#include <stdlib.h>
#include"serie.h"

#define TAM 5


/**
*
    1. los datos de la serie que ve cada usuario
    2. por cada serie todos los usuarios que la ven
    3. por cada serie cuantos usuarios la ven
*
*/
int main()
{
eSerie Series[TAM];



    printf("\t\t\t\tMatias Carizu\n");
    CrearListadoSeries(Series, TAM);
    mostrarSeries(Series,TAM);
    return 0;
}
