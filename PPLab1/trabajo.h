#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include "fecha.h"
typedef struct{
int id; // (autoincremental)
int idNotebook; // (debe existir) Validar
int idServicio; // (debe existir) Validar
eFecha fecha; // ( Validar d�a, mes y a�o )
int isEmpty;
}eTrabajo;


#endif // TRABAJO_H_INCLUDED
int initTrabajos(eTrabajo listt[], int tam);
