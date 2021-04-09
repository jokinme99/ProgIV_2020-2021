/*
 * reservas.h
 *
 *  Created on: 24 mar. 2021
 *      Author: Suhar
 */

#ifndef RESERVA_RESERVA_H_
#define RESERVA_RESERVA_H_

typedef struct{

	int idReserva;

	int idHotel;

	char tipoHabitacion[10];

	float precio;

	int dias;
}reserva;

void realizarReserva( int idHotel,char tipoHabitacion,float precio,int dia);




void eliminarReserva(reserva);

#endif /* RESERVA_RESERVA_H_ */
