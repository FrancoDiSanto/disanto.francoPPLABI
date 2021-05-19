#ifndef MARCA_H_INCLUDED
#define MARCA_H_INCLUDED

typedef struct{
int id; // comienza en 1000
char descripcion[20];

}eMarca;


#endif // MARCA_H_INCLUDED
void mostrarMarcas(eMarca lista[], int tam);
void mostrarMarca(eMarca marca);

int cargarDescripcionMarca(int id, eMarca marcas[], int tam, char desc[]);
