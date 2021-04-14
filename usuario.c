#include "usuario/usuario.h"
#include <stdio.h>

FILE *ficheroUsuarios;

void registrarUsuario(char nombreUsuario[], char contrasenya[], char correo[],	int edad) {

	//Realizar el idReserva con el numero de reserva que es

	ficheroUsuarios = fopen("Usuarios.txt", "r");

	int contadorLineas = 1;
	char c;

	while ((c = fgetc(ficheroUsuarios)) != EOF) {

		if (c == '\n') {
			contadorLineas++;
		}
	}

	fclose(ficheroUsuarios);

	ficheroUsuarios = fopen("Usuarios.txt", "a");

	fprintf(ficheroUsuarios,
			"NombreUsuario:%s;contrasenya:%s;correo:%s;Edad:%i;\n",
			nombreUsuario, contrasenya, correo, edad);

	fclose(ficheroUsuarios);

}
