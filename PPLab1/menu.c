#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"


int menu()
{
    int opcion;


    system("cls");
    printf("******menu de opciones********\n");
    printf("1- Alta notebook\n");
    printf("2- Modificar notebook\n");
    printf("3- Baja notebook\n");
    printf("4- Listar notebooks\n");
    printf("5- Listar marcas\n");
    printf("6- Listar tipos\n");
    printf("7- Listar servicios \n");
    printf("8- ALta trabajo \n");
    printf("8- Listar trabajo \n");

    printf("9- Salir \n");
    printf("ingrese su opcion : ");
    scanf("%d", &opcion );

    return opcion;
}
