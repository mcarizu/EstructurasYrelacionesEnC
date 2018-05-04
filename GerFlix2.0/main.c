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

int op;
int lugarVacio;

    printf("\t\t\t\tMatias Carizu\n");
    setStatusSerie(Series,TAM,0);

    CrearListadoSeries(Series, TAM);
    mostrarSeries(Series,TAM);
    do{
        op=getInt("\n\t1)Alta de series\n\t2)Baja de serie\n\t3)Modificacion de Serie\n\t4)Ordenar\n\t5)Salir\n");
        system("cls");
        switch(op){
            case 1:printf("\nIngrese una Serie\n");
                    lugarVacio=buscarSerieVacio(Series,TAM);
                    if(lugarVacio==-1)
                        {
                            printf("No Hay Lugar Vacio");
                        }
                    printf("\nALTA\n");
                    if(!get)
            break;
            case 2:printf("\nBorrar una Serie\n");

            break;
            case 3:printf("\nModificar una Serie\n");

            break;
            case 4:printf("\nOrdenar Series\n");

            break;
            case 5:printf("\nSalir de las Series\n");

            break;

            }
    }while(op!=5);

    CrearListadoSeries(Series, TAM);
    mostrarSeries(Series,TAM);
    return 0;
}
