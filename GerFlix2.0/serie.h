#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED



typedef struct{
    int idSerie;
    char nombre[50];
    char genero[50];
    int status ;
}eSerie;


void mostrarSerie(eSerie [] ,int);
int mostrarSerieVacio(eSerie [], int);
void CrearListadoSeries(eSerie[],int );
void cargarSerie(eSerie [],int );
void setStatusSerie(eSerie [], int,int);
int buscarSerieId(eSerie [],int ,int );

#endif // SERIE_H_INCLUDED
