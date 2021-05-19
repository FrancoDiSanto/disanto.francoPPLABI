#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"
#include "marca.h"


int initNotebooks(eNotebook listt[], int tam)
{
    for(int i =0; i <tam ; i++)
    {
        listt[i].isEmpty=1;

    }
}


void mostrarNotebooks(eNotebook lista[], int tam, eMarca marcas[], int tamm, eTipo tipos[], int tamt)
{
    int flag=1;
    printf("----------***  LISTA DE NOTEBOOKS  ***------------ \n");
    printf("id    modelo    marca           tipo            precio \n");
    printf("-----------------------------------------------------------\n");
    for(int i =0; i<tam; i++)
    {
        if(!lista[i].isEmpty)
        {
            mostrarNotebook(lista[i],marcas , tamm, tipos, tamt);
            flag=0;
        }

    }

    if(flag)
    {
        printf("\n");
        printf("\n");
        printf("--------No hay notebooks para mostar------ \n");
    }

    printf("\n");
    printf("\n");

}



void mostrarNotebook(eNotebook unaNoteookk,eMarca marcs[], int ttamm, eTipo ttipos[], int ttamt)
{
    char descripcionTipo[20];
    char descripcionMarca[20];
    cargarDescripcionMarca(unaNoteookk.idMarca, marcs, ttamm, descripcionMarca);
    cargarDescripcionTipo(unaNoteookk.idTipo, ttipos, ttamt, descripcionTipo);
    printf("%d   %-10s  %-10s   %-10s    %f",
            unaNoteookk.id , unaNoteookk.modelo , descripcionMarca,
            descripcionTipo, unaNoteookk.precio);
    printf("\n");





}


int bajaNotebook(eNotebook listaa[], int ttam, eMarca marcass[], int ttamm, eTipo ttipos[], int ttamt)
{
    int idABorrar;
    int todoOk=0;
    mostrarNotebooks(listaa, ttam, marcass, ttamm, ttipos, ttamt);
    printf("ingrese el numero de id de la  notebook a eliminar \n");
    scanf("%d", &idABorrar);

    for(int i =0; i<ttam; i++)
    {


        if(listaa[i].id == idABorrar)
        {
            listaa[i].isEmpty=1;
            todoOk=0;
            mostrarNotebook(listaa[i],marcass, ttamm, ttipos, ttamt);

        }
        else
        {
            todoOk=1;
        }

    }

    return todoOk;
}

int buscarLibre(eNotebook lista[],int tam)
{
     int LLibre=-1;
    for(int i =0; i<tam; i++)
    {
        if(lista[i].isEmpty)
        {
            LLibre=i;
            break;
        }
    }
return LLibre;
}


altaNotebook(eNotebook noteb[],int  tam,eMarca marc[],int tamm ,eTipo types[] , int tamt, int* pIdNuevanotebook )
{
    int todoOk=0;
    int i;
    eNotebook nuevaNotebook;
    int idTipo;
    int idMarca;

    system("cls");
    printf("Alta notebook\n");
    printf("id  %d \n", *pIdNuevanotebook);

    if(noteb != NULL && tam >0 && pIdNuevanotebook != NULL)
    {
        i= buscarLibre(noteb, tam);
        printf("%d", i);
        if(i == -1)
        {
            printf("NO hay lugar en el sistema");
        }
        else
        {


            printf("ingrese modelo: ");
            fflush(stdin);
            gets(nuevaNotebook.modelo);

            mostrarMarcas(marc , tamm);
            printf("ingrese id Marca: ");
            scanf("%d", &idMarca);
            while(idMarca < 1000 || idMarca > 10003)
            {
                printf("Error, ingrese id Marca valido: ");
                scanf("%d", &idMarca);
            }

            mostrarTipos(types, tamt );
            printf("ingrese ID tipo: ");
            fflush(stdin);
            scanf("%d", &idTipo);
            while(idTipo< 5000 || idTipo > 5003)
            {
                printf("Error ID tipo: ");
                fflush(stdin);
                scanf("%d", &idTipo);

            }

            printf("ingrese precio: ");
            scanf("%f", &nuevaNotebook.precio);



            //mostrarSectores(sectores, tamsec);

            nuevaNotebook.idTipo = idTipo;
            nuevaNotebook.idMarca = idMarca;
            nuevaNotebook.id= *pIdNuevanotebook;
            (*pIdNuevanotebook)++;
            nuevaNotebook.isEmpty=0;

            noteb[i] = nuevaNotebook;
            todoOk=1;
        }


}
}
