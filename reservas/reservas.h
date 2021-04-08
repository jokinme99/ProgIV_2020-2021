/*
 * reservas.h
 *
 *  Created on: 24 mar. 2021
 *      Author: Suhar
 */

#ifndef RESERVAS_RESERVAS_H_
#define RESERVAS_RESERVAS_H_

typedef struct{

	int idReserva;

	int idHotel;

	char tipoHabitacion[10];

	float precio;

	int dias;
}reserva;

void realizarReserva( int idHotel,char tipoHabitacion,float precio,int dia);




void eliminarReserva(reserva);

#endif /* RESERVAS_RESERVAS_H_ */
