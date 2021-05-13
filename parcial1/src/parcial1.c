/*
 ============================================================================
 Name        : parcial1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Menu.h"
#include "Servicio.h"
#include "Trabajo.h"
#define TAMANIO 4



int main(void) {
	int opcion;
	setbuf(stdout, NULL);
	eServicio listadoDeServicios[TAMANIO];
	hardcodearServicios(listadoDeServicios);
	do
	{
		menu();
		scanf("%d",&opcion);
		switch(opcion)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				mostrarListadoServicios(listadoDeServicios,TAMANIO);
				break;
			case 6:
				break;
		}
	}while(opcion!=7);
	return EXIT_SUCCESS;
}
