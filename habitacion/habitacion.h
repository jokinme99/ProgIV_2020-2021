/*
 * habitacion.h
 *
 *  Created on: 9 abr. 2021
 *      Author: jokin
 */

#ifndef HABITACION_HABITACION_H_
#define HABITACION_HABITACION_H_
typedef struct {
	int idHabitacion;

	int numeroHabitacion;

	int plantaHabitacion;

	char tipoHabitacion[];

	float precioHabitacion;
} habitacion;
void imprimirHabitacion(habitacion h);

#endif /* HABITACION_HABITACION_H_ */
