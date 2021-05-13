/*
 * Servicio.c
 *
 *  Created on: 13 may. 2021
 *      Author: cossu
 */
#include <stdio.h>
#include <string.h>
#include "Servicio.h"
void hardcodearServicios(eServicio listado[])
{
	 char arrayDescripcion[4][25]={"Limpieza","Parche","Centrado","Cadena"};
	 int arrayPrecio[4]={250,300,400,350};


	 int i;
	 for(i=0;i<4;i++)
	 {
		 strcpy(listado[i].descripcion,arrayDescripcion[i]);
		 listado[i].precio=arrayPrecio[i];
	  }
}

void mostrarUnServicio(eServicio unServicio)
{
    printf("--------------------------------------------------\n");
    printf("%s\t %d\t \n",unServicio.descripcion,unServicio.precio);
}

void mostrarListadoServicios(eServicio listado[],int tam)
{
	 int i;

	 printf("Descripciones  Precio\n");

	 for(i=0;i<tam;i++)
	 {
		mostrarUnServicio(listado[i]);
	 }
}
