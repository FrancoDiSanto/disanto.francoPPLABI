#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct{
int id; //comienza en 20000)
char descripcion; // (máximo 25 caracteres)
float precio;

}eServicio;

#endif // SERVICIO_H_INCLUDED

void mostrarServicios(eServicio lista[], int tams);
void mostrarServicio(eServicio servicio);
