#include "serie.h"


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
     strcpy(Series[0].nombre,"Los muertos vivos");
     strcpy(Series[1].nombre,"Los vickingos");
     strcpy(Series[2].nombre,"Los extraterrestres");
     strcpy(Series[3].nombre,"Los Hacker");
     strcpy(Series[4].nombre,"Los perdidos");

}

void mostrarSeries(eSerie Series[], int cantidad)
{

        int i;
        //cantidad=5;
        for(i=1;i<cantidad;i++)
        {
            if(Series[i].idSerie!=0)
            {
                printf("%s\n",Series[i].nombre);

            }
        }
}


