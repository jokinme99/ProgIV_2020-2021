	/*
 * hoteles.h
 *
 *  Created on: 3 abr. 2021
 *      Author: Suhar
 */

#ifndef HOTEL_HOTEL_H_
#define HOTEL_HOTEL_H_

typedef struct{

	int idHotel;

	char nombreHotel[45];

	char direccionHotel[45];

	int telefonoHotel;

	int estrellas;

	int num_habitaciones_disponibles;

}Hotel;
void imprimirHotel( Hotel h);
#endif /* HOTEL_HOTEL_H_ */
