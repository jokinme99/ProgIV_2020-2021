#include<stdio.h>

#include "usuario/usuario.h"

#include <string.h>
#include <stdlib.h>
#include <dirent.h>


void menu();

void menu() {


	  DIR *d;
	  struct dirent *dir;
	  d = opendir("../progIV_Cplus");
	  if (d) {
	    while ((dir = readdir(d)) != NULL) {
	      printf("%s\n", dir->d_name);
	    }
	    closedir(d);
	  }

	int eleccion;
	do {
		fflush(stdin);
		printf("Hola. Elije la opción de que quieras\n\n");
		printf("1. Registrarse como usuario\n");
		printf("2. Registrarse como administrador\n");
		printf("3. Iniciar sesion en HOTELANDIA C++\n");
		printf("4. Exit\n");
		fflush(stdout);
		scanf("%i", &eleccion);

		switch (eleccion) {
		case 1:/* Registrarse como usuario */
			printf(
								"Has seleccionado registrarse Como Usuario por favor introduzca los datos de usuario correspondientes\n");
						fflush(stdout);
						char usuarioR[15];

						printf("introduce el nombre de usuario\n");
						fflush(stdout);

						scanf("%s", usuarioR);
						if (devolverUsuario(usuarioR)) {


							//if(strcmp(usuarioR, 'usuario')==0){
							//printf("Ese nombre de usuário ya existe, por favor introduzca uno valido\n");

							//2}
							printf("introduce la contraseña\n");
							fflush(stdout);
							char contraR[10];
							scanf("%s", contraR);
							printf("introduce correo\n");
							fflush(stdout);
							char correo[20];
							scanf("%s", correo);
							printf("introduce edad\n");
							fflush(stdout);
							int edad;
							scanf("%i", &edad);
							registrarUsuario(usuarioR, contraR, correo, edad, 1);

						}
			break;
		case 2:/*Registrarse como administrador*/
			printf(
					"Has seleccionado registrarse como administrador por favor introduzca los datos de usuario correspondientes\n");

			fflush(stdout);

			char usuarioR1[15];

			printf("introduce el nombre de usuario\n");
			fflush(stdout);

			scanf("%s", usuarioR1);
			if (devolverUsuario(usuarioR1)) {

				//if(strcmp(usuarioR, 'usuario')==0){
				//printf("Ese nombre de usuário ya existe, por favor introduzca uno valido\n");

				//2}
				printf("introduce la contraseña\n");
				fflush(stdout);
				char contraR2[10];
				scanf("%s", contraR2);
				printf("introduce correo\n");
				fflush(stdout);
				char correo2[20];
				scanf("%s", correo2);
				printf("introduce edad\n");
				fflush(stdout);
				int edad2;
				char edadc;
					if(scanf("%d%c", &edad2, &edadc) != 2 || edadc != '\n'){
						edad2=0;
						fflush(stdout);
					}

//				scanf("%i", &edad2);
				printf("Edad: %i\n", edad2);
								fflush(stdout);

				registrarUsuario(usuarioR1, contraR2, correo2, edad2, 2);

			}
			break;

		case 3:/*Salir*/
			fflush(stdin);
			printf("Se ha terminado la funcion del programa de C, procedemos a ejecutar el programa en C++ para poder continuar\n");
			fflush(stdout);
			system("..\\progIV_Cplus\\Debug\\progIV_C++.exe");
			fflush(stdout);
			break;
		case 4:/*Salir*/
					fflush(stdin);
					printf("Ha sido un placer\n");
					break;

		default:
			printf("wrong choice.Enter Again");
			break;
		}

	} while (eleccion != 3);


	fflush(stdout);

}

int main() {
	menu();
}

