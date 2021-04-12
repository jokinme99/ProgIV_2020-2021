#ifndef HABITACION_HABITACION_H_
#define HABITACION_HABITACION_H_

typedef struct {
	int idHabitacion;

	int numeroHabitacion;

	int plantaHabitacion;

	char tipoHabitacion[30];

	float precioHabitacion;
} habitacion;

void imprimirHabitacion(habitacion h);

#endif /* HABITACION_HABITACION_H_ */
