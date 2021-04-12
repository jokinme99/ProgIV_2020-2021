#include <stdio.h>
#include "reserva/reserva.h"

FILE *ficheroReservas;

void realizarReserva(int idHotel, char tipoHabitacion, float precio, int dias) {

	//Realizar el idReserva con el numero de reserva que es

	ficheroReservas = fopen("Reservas.txt", "r");

	int contadorLineas = 1;
	char c;

	while ((c = fgetc(ficheroReservas)) != EOF) {

		if (c == '\n') {
			contadorLineas++;
		}
	}

	fclose(ficheroReservas);

	ficheroReservas = fopen("Reservas.txt", "a");

	fprintf(ficheroReservas, "Id:%d;idHotel:%d;Hab:%s;Precio:%f;Dias:%d\n",
			contadorLineas, idHotel, tipoHabitacion, precio, dias);

	fclose(ficheroReservas);

}

