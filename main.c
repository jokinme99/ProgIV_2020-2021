#include<stdio.h>
#include "hotel/hotel.h"
#include "usuario/usuario.h"
#include "reserva/reserva.h"
#include "habitacion/habitacion.h"
#include <string.h>
#include <stdlib.h>



void menu();
void inicio();



void menu() {
	int eleccion;
	do {
		fflush(stdin);
		printf("Hola\n\n");
		printf("1. Iniciar sesion\n");
		printf("2. Registrarse\n");
		printf("3. Exit\n");
		fflush(stdout);
		scanf("%i", &eleccion);

		switch (eleccion) {
		case 1:/* Iniciar sesion */
			system("clear");
			printf(
					"Has seleccionado iniciar sesión. Por favor introduzca el nombre de usuario y contraseña\n");
			fflush(stdout);
			char *usuario[16];
			char *contra[16];
			printf("introduce el nombre de usuario\n");
			fflush(stdout);
			scanf("%s", &usuario);
			printf("introduce la contraseña\n");
			fflush(stdout);

			scanf("%s", &contra);

			printf("%s\n", usuario);
			printf("%s\n", contra);

		if (comprobarUsuario(&usuario, &contra) == true){

			system("clear");
			fflush(stdout);
			inicio();

		}else{
			fflush(stdout);
			menu();

		}


			break;
		case 2:/*Registrarse*/
			printf(
					"Has seleccionado registrarse por favor introduzca los datos de usuario correspondientes\n");
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
				registrarUsuario(usuarioR, contraR, correo, edad);

			}
			break;

		case 3:/*Salir*/
			printf("goodbye");
			fflush(stdout);
			break;

		default:
			printf("wrong choice.Enter Again");
			break;
		}

	} while (eleccion != 3);
}
int choice;
void inicio() {
	do {
		fflush(stdin);
		printf("Bienvenidos a los Hoteles deusto\n\n");
		printf("1. reserva de habitacion\n");
		printf("2. eliminar reserva\n");
		printf("3. Registro de reservas\n");
		printf("4. Exit\n");
		fflush(stdout);
		scanf("%i", &choice);

		switch (choice) {
		case 1:
			//HABRA QUE CREAR UNA CARPETA NUEVA LLAMADA MENUS/INTERFACES PARA GUARDAR TODOS ESTOS PROCESOS
			printf("Procediendo al menu de reservas\n");
			printf("Elige el hotel");
			//Leer los hoteles que encontraremos en la bbdd y sacarlos por pantalla;
			char habitacion[10];
			printf("Elige el tipo de habitación--> pequenya, mediana, grande");
			scanf("%s", habitacion);
			if (strcmp(habitacion, 'pequenya') == 0
					|| strcmp(habitacion, 'mediana') == 0
					|| strcmp(habitacion, 'grande')==0) {
				printf("Seleccione una de las anteriores");
				scanf("%s", habitacion);
			} else

				printf("Introduzca el numero de dias");
			int dias;
			scanf("%i", dias);

			fflush(stdout);
			// Habria que hacer una funcion que calcule el precio, segun las estrellas del hotel, el tipo de habiatcion y los dias)

			realizarReserva(20, habitacion, 150, dias);

			break;
		case 2:
			//HABRA QUE CREAR UN MENU MANUAL CON CADA UNA DE LAS RESERVAS PROXIMAS COMO POSIBLES OPCIONES
			printf("selecciona la reserva que quieras eliminar\n");
			fflush(stdout);
			break;
		case 3:
			//UTILIZAR FICHEROS PARA GUARDAR LAS RESERVAS DE CADA UNO
			printf(
					"Estas son las reservas que has realizado en nuestra aplicación");

			fflush(stdout);
			break;
		case 4:
			printf("goodbye");
			fflush(stdout);
			break;

		default:
			printf("wrong choice.Enter Again");
			break;
		}

	} while (choice != 4);
}
int main() {
	menu();
}

