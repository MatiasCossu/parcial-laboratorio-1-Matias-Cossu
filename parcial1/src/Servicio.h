/*
 * Servicio.h
 *
 *  Created on: 13 may. 2021
 *      Author: cossu
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

typedef struct
{
	int id;
	char descripcion[25];
	int precio;
}eServicio;
void hardcodearServicios(eServicio listado[]);
void mostrarListadoServicios(eServicio listado[],int tam);
void mostrarUnServicio(eServicio unServicio);


#endif /* SERVICIO_H_ */
