#include<stdio.h>
#include <string.h>
#include "hotel/hotel.h"
#include "usuario/usuario.h"
#include "reserva/reserva.h"
#include "habitacion/habitacion.h"

void menu();
void inicio();

void menu(){
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

			printf(
					"Has seleccionado iniciar sesión. Por favor introduzca el nombre de usuario y contraseña\n");
			fflush(stdout);
			char usuario[10];
			char contra[10];
				printf("introduce el nombre de usuario\n");
				fflush(stdout);
				scanf("%s", usuario);
				printf("introduce la contraseña\n");
				fflush(stdout);

				scanf("%s", contra);

//				if ((strcmp(usuario,usuarioDefecto)!=0)//0 si cadenas son iguales
//						|| devolverUsuario(usuario).contrasenya != contra) {
//					printf(
//							"Ese nombre de usuário no existe o la contraseña no es valida, por favor, vuelva a intentarlo\n");
//
//				}

				if((strcmp(usuario,'usuario')==0)||strcmp(contra,'usuario')==0){
					printf("Bienvenido de nuevo UsuarioPorDefecto");
					inicio();
				}else if((strcmp(usuario, 'usuario')==0)|| strcmp(contra,'usuario')!=0){
					printf("Has introducido mal la contrasenya");
					menu();
				}else{
					printf("Este usuario no existe");
					menu();
				}

			break;
		case 2:/*Registrarse*/
			printf(
					"Has seleccionado registrarse por favor introduzca los datos de usuario correspondientes\n");
			fflush(stdout);
			char usuarioR[10];

				printf("introduce el nombre de usuario\n");
				fflush(stdout);
				scanf("%s", usuarioR);
				//if (devolverUsuario(usuarioR) != NULL)
				if(strcmp(usuarioR, 'usuario')==0){
					printf(
							"Ese nombre de usuário ya existe, por favor introduzca uno valido\n");

				}
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
			scanf("%i", edad);
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
	void inicio(){
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
			if (strcmp(habitacion, 'pequenya')==0 || strcmp(habitacion, 'mediana')==0
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
int main(){
	menu();
}

