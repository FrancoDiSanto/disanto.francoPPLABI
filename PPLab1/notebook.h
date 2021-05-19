#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED
#include "marca.h"
#include "tipo.h"

typedef struct{
int id;
char modelo[20];
int idMarca;
int idTipo;
float precio;
int isEmpty;

}eNotebook;

#endif // NOTEBOOK_H_INCLUDED
int initNotebooks(eNotebook listt[], int tam);
int altaNotebook(eNotebook noteb[],int  tam,eMarca marc[],int tamm ,eTipo types[] , int tamt, int* pIdNuevanotebook );
void mostrarNotebooks(eNotebook lista[], int tam, eMarca marcas[], int tamm, eTipo tipos[], int tamt);
void mostrarNotebook(eNotebook unaNoteook,eMarca marcas[], int tamm, eTipo tipos[], int tamt);
int bajaNotebook(eNotebook lista[], int tam, eMarca marcass[], int tamm, eTipo tipos[], int tamt);
int buscarLibre(eNotebook lista[],int tam);
