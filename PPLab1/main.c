#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"
#include "fecha.h"
#include "marca.h"
#include "tipo.h"
#include "servicio.h"
#include "trabajo.h"
#include "menu.h"
#define TAMM 4
#define TAMT 4
#define TAMS 4
#define TAM 10
#define TAMTRAB 10

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    eMarca marcas[TAMM]={ {1000, "Compaq"}, {1001, "Asus"},{1002, "Acer"},{1003, "HP"}};

    eTipo tipos[TAMT]= { {5000, "Gamer"}, {5001, "Disenio"},{5002, "Ultrabook"},{5003, "Normalita"}};

    eServicio servicios[TAMS]= { {20000, "Bateria", 250}, {20001, "Antivirus", 300},{20002, "Actualizacion", 400},{20003, "Fuente", 600}};

    eNotebook notebooks[TAM];

    eTrabajo trabajos[TAMTRAB];

    initNotebooks(notebooks, TAM);
    initTrabajos(trabajos, TAMTRAB);
    int idNotebook = 100;



    char salir ='n';
    do
    {

        switch(menu())
        {
        case 1:
            if(altaNotebook(notebooks, TAM, marcas, TAMM,tipos , TAMT, &idNotebook ))
            {
                printf("1- Alta empleado Exitosa\n");

            }
            else
            {
                printf("1-Hubo un error,  Alta empleado fallida\n");

            }

            break;
        case 2:


            break;
        case 3:
            if(bajaNotebook(notebooks, TAM, marcas, TAMM, tipos, TAMT))
            {
                printf("Se borro correctamente \n");
                break;
            }
            else
            {
                printf("No se encontro notebook \n");

            }
            bajaNotebook(notebooks, TAM, marcas, TAMM, tipos, TAMT);
            break;
        case 4:
            mostrarNotebooks(notebooks, TAM, marcas, TAMM, tipos, TAMT);
            break;
        case 5:
            mostrarMarcas(marcas, TAMM);

            break;
        case 6:
            mostrarTipos(tipos, TAMT);

            break;
        case 7:

            mostrarServicios(servicios, TAMS);
            break;
        case 8:
            printf("cls");

            break;


        }

        system("pause");
    }
    while(salir=='n');






}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
