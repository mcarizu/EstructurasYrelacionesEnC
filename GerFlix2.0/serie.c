#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>

#include"serie.h"


int buscarSerieVacio(eSerie Series[], int cantidad)
{

    int i;
    for(i=0;i < cantidad; i++)
    {
        if(Series[i].status== 0)
        {
            return i;
        }
    }
    return -1;

}
void cargarSerieId(eSerie Series[],int cantidad)
{

}
int buscarSerieId(eSerie Serie[],int cantidad,int id)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(Serie[i].idSerie[i]=id && Serie[i].status==1)
        {
            return i;
        }
    }return -1;

}
void CrearListadoSeries(eSerie Series[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        Series[i].idSerie=i;
        if(i%2==0)
        {
            strcpy(Series[i].genero,"Terror");
        }else{
             strcpy(Series[i].genero,"Humor");
        }

    }
     strcpy(Series[0].nombre,"\nLos muertos vivos");
     strcpy(Series[1].nombre,"\nLos vickingos");
     strcpy(Series[2].nombre,"\nLos extraterrestres");
     strcpy(Series[3].nombre,"\nLos Hacker");
     strcpy(Series[4].nombre,"\nLos perdidos");

}

void mostrarSeries(eSerie Series[], int cantidad)
{

        int i;
        //cantidad=5;
        for(i=1;i<cantidad;i++)
        {
            if(Series[i].idSerie!=0)
            {
                printf("%s --- %s \n",Series[i].nombre,Series[i].genero);

            }
        }
}
void setStatusSerie(eSerie Series[], int tamanio ,int valor){

    int i;
    //CrearListadoSeries(Series, tamanio);
    for(i=0;i<tamanio;i++)
    {
        // printf("%s ",Series[i].nombre);
         Series[i].status=valor;
         //printf(" --- %d \n",Series[i].status);
    }

}



