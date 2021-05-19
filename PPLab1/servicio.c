#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "servicio.h"
void mostrarServicios(eServicio lista[], int tams)
{
    printf("-------------Lista de Servicios------------\n");
    printf(" id        descripcion         precio\n\n");
    for(int i =0; i< tams ; i++)
    {
        mostrarServicio(lista[i]);

    }


}

void mostrarServicio(eServicio servicio)
{
    printf("%d      %s        %f \n", servicio.id, servicio.descripcion, servicio.precio);

}
