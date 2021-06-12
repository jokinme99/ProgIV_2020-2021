#include "usuario/usuario.h"
#include <stdio.h>

FILE *ficheroUsuarios;

void registrarUsuario(char nombreUsuario[], char contrasenya[], char correo[],
		int edad, int tipo) {

	//Realizar el idReserva con el numero de reserva que es

	FILE *f = fopen("../progIV_Cplus/Usuarios.txt", "r");

	int counter = 0;
	char linea;

	for (linea = getc(f); linea != EOF; linea = getc(f))
		if (linea == '\n') // Increment count if this character is newline
			counter = counter + 1;

	fclose(f);
//	ficheroUsuarios = fopen("../progIV_Cplus/Usuarios.txt", "r");
//
//	int contadorLineas = 1;
//	char c;
//
//	while ((c = fgetc(ficheroUsuarios)) != EOF) {
//
//		if (c == '\n') {
//			contadorLineas++;
//		}
//	}
//
//	fclose(ficheroUsuarios);

	ficheroUsuarios = fopen("../progIV_Cplus/Usuarios.txt", "a");



	if(tipo == 1){

		fprintf(ficheroUsuarios,
			"Id:%i;NombreUsuario:%s;contrasenya:%s;correo:%s;Edad:%i;TipoUsuario:usuario\n",
			counter+1,nombreUsuario, contrasenya, correo, edad);

	}else{
		fprintf(ficheroUsuarios,
			"Id:%i;NombreUsuario:%s;contrasenya:%s;correo:%s;Edad:%i;TipoUsuario:admin\n",
			counter+1,nombreUsuario, contrasenya, correo, edad);
	}
	fclose(ficheroUsuarios);

}

bool devolverUsuario(char *usuario) {

	FILE *f;

	f = fopen("../progIV_Cplus/Usuarios.txt", "r");

	int counter = 0;
	char linea;

	for (linea = getc(f); linea != EOF; linea = getc(f))
		if (linea == '\n') // Increment count if this character is newline
			counter = counter + 1;

	fclose(f);

	fflush(stdin);

	printf("contador: %i\n", counter);

	fflush(stdout);



	f = fopen("../progIV_Cplus/Usuarios.txt", "r");

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

//		fflush(stdin);
//
//		printf("Nombre0: %s \n", ptr);
//
//		fflush(stdout);

		ptr = strtok(NULL, ";");

		ptr = strtok(ptr, ":");



//
//		fflush(stdin);
//
//		printf("Nombre1: %s \n", ptr);
//
//		fflush(stdout);


		while (ptr != NULL) {


			ptr = strtok(NULL, ":");
//
//			ptr = strtok(c, ";");
//
//			ptr = strtok(ptr, ":");

//			fflush(stdin);
//
//			printf("Nombre2: %s \n", ptr);
//
//			fflush(stdout);


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
		contador++;
	}

	fflush(stdin);

	printf("todo en orden\n");

	fflush(stdout);

	return true;

	fclose(f);

}


