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


bool devolverUsuario(char* usuario){


	FILE *f;

		f = fopen(fichero, "r");

		int counter = 0;
		char linea;

		for (linea = getc(f); linea != EOF; linea = getc(f))
			if (linea == '\n') // Increment count if this character is newline
				counter = counter + 1;

		fclose(f);

		f = fopen(fichero, "r");

		char *ptr;
		char c[256];

		int i = 0;
		char **nombres;

		nombres = (char**) malloc(counter * sizeof(char*));

		while (fgets(c, sizeof(c), f)) {

			printf("%s\n", c);

			ptr = strtok(c, ";");
			printf("%s\n", ptr);

			ptr = strtok(ptr, ":");
			printf("%s\n", ptr);

			while (ptr != NULL) {

				ptr = strtok(NULL, ":");

				printf("%s\n", ptr);

				if (ptr != NULL) {

					nombres[i] = ptr;
					printf("valor i %i\n", i);
					printf("Antes de cerrar el fichero %s\n", nombres[i]);
					printf("El usuario %s\n", usuario);

				}

			}
			i++;
		}

		int j ;
			for ( j = 0; j < counter; ++j) {

				if (strcmp(nombres[j], usuario) == 0) {

					printf("Este usuario ya existe\n");

				} else {

					printf("Valor de j %i\n", j);
					printf("EL usuario %s \n", nombres[j]);
					printf("Este usuario esta disponible\n");

				}
			}


		fclose(f);








}
