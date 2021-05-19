#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct{
int id; // comienza en 5000
char descripcion[20];
}eTipo;

#endif // TIPO_H_INCLUDED

void mostrarTipos(eTipo tips[], int tamt);
void mostrarTipo(eTipo tipo);

int cargarDescripcionTipo(int id, eTipo tipos[], int tam, char desc[]);
