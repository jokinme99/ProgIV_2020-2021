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

	int q;
	for (q = 0; q < counter; q++) {

		nombres[q] = (char*) malloc(16 * sizeof(char));

	}

	while (fgets(c, sizeof(c), f)) {

		ptr = strtok(c, ";");

		ptr = strtok(ptr, ":");

		while (ptr != NULL) {

			ptr = strtok(NULL, ":");

			if (ptr != NULL) {

				strcpy(nombres[i], ptr);

				if (strcmp(nombres[i], usuario) == 0) {

					printf("Este usuario ya existe\n");

					free(nombres[i]);

					fclose(f);

					return false;

				}

			}
		}
		i++;

	}
	int contador = 0;
	while (contador < counter) {
		free(nombres[contador]);
	}

	return true;

	fclose(f);

}

void eliminarPerfil(char *nombreUsuario) {

	if (devolverUsuario(nombreUsuario)) {

	}

}

bool comprobarUsuario(char *usuario, char *contrasenya) {

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

	int c_nombres = 0;
	char **nombres;

	nombres = (char**) malloc(counter * sizeof(char*));

	int q;
	for (q = 0; q < counter; q++) {

		nombres[q] = (char*) malloc(16 * sizeof(char));

	}

	while (fgets(c, sizeof(c), f)) {

		ptr = strtok(c, ";");

		ptr = strtok(ptr, ":");

		//printf("%s\n", ptr);
		while (ptr != NULL) {

			ptr = strtok(NULL, ":");

			//printf("%s\n", ptr);
			if (ptr != NULL) {

			//	printf("valor de i %i\n", c_nombres);
				strcpy(nombres[c_nombres], ptr);

			//	printf("Usuario guardado %s\n", nombres[c_nombres]);

			}
		}
		c_nombres++;

	}

	fclose(f);

	f = fopen("Usuarios.txt", "r");

	char **contrasenya1;

	contrasenya1 = (char**) malloc(counter * sizeof(char*));

	int h;
	for (q = 0; h < counter; h++) {

		contrasenya1[h] = (char*) malloc(16 * sizeof(char));

	}

	char *ctr;

	int c_contrasenya = 0;

	while (fgets(c, sizeof(c), f)) {

		//printf("Prueba %s", c);

		ctr = strtok(c, ";");

		//printf("Contraseña1 %s\n", ctr);
		while (ctr != NULL) {

			//	printf("Contrasña2 %s\n", ctr);

			ctr = strtok(NULL, ";");

			//	printf("cotraseña3 %s\n", ctr);

			if (ctr != NULL) {

				const char ch = ':';
				char *ret;

				ret = strchr(ctr, ch);

				//  printf("String after |%c| is - |%s|\n", ch, ret + 1);

				strcpy(contrasenya1[c_contrasenya], ret + 1);

			}
			ctr = NULL;
		}

		c_contrasenya++;

	}

	int j = 0;

	while (j < counter) {

	//	printf("El usuario a comporbar es %s y el de el array  %s y la contra a buscar es %s y la contrra es %s\n", usuario, nombres[j], contrasenya, contrasenya1[j]);

		if (0 == strcmp(usuario, nombres[j])
				&& 0 == strcmp(contrasenya, contrasenya1[j])) {

			printf("El usuario y la contraseña son correctos\n");

			free(nombres[j]);
			free(contrasenya1[j]);

			fclose(f);

			return true;

		}

		j++;

	}

	printf("El usuario y a contraseña no coinciden\n");

	return false;

	fclose(f);

}
