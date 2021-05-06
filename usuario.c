#include "usuario/usuario.h"
#include <stdio.h>

FILE *ficheroUsuarios;

void registrarUsuario(char nombreUsuario[], char contrasenya[], char correo[],
		int edad) {

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

bool devolverUsuario(char *usuario) {

	FILE *f;

	f = fopen("Usuarios.txt", "r");

	int counter = 0;
	char linea;

	for (linea = getc(f); linea != EOF; linea = getc(f))
		if (linea == '\n') // Increment count if this character is newline
			counter = counter + 1;

	fclose(f);

	f = fopen("Usuarios.txt", "r");

	char *ptr;
	char c[256];

	int i = 0;
	char **nombres;

	nombres = (char**) malloc(counter * sizeof(char*));

	while (fgets(c, sizeof(c), f)) {

		ptr = strtok(c, ";");

		ptr = strtok(ptr, ":");

		while (ptr != NULL) {

			ptr = strtok(NULL, ":");

			if (ptr != NULL) {

				nombres[i] = ptr;

				if (strcmp(nombres[i], usuario) == 0) {

					printf("Este usuario ya existe\n");
					fclose(f);

					return false;

				}

			}
		}
		i++;

	}

	return true;
	fclose(f);

}

void eliminarPerfil(char *nombreUsuario) {

	if (devolverUsuario(nombreUsuario)) {

	}

}
