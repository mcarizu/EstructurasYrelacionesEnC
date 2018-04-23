#include "serie.h"


void CrearListadoSeries(eSerie array[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        array[i].idSerie=i;
        if(i%2==0)
        {
            strcpy(array[i].genero,"Terror");
        }else{
             strcpy(array[i].genero,"Humor");
        }

    }
     strcpy(array[0].nombre,"Los muertos vivos");
     strcpy(array[1].nombre,"Los vickingos");
     strcpy(array[2].nombre,"Los extraterrestres");
     strcpy(array[3].nombre,"Los Hacker");
     strcpy(array[4].nombre,"Los perdidos");

}

void mostrarSeries(eSerie Series[], int cantidad)
{

        int i;
        //cantidad=5;
        for(i=1;i<cantidad;i++)
        {
            if(Series[i].idSerie!=0)
            {
                printf("%s",Series[i].nombre);

            }
        }
}


