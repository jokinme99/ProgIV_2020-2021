/*
 * main.c
 *
 *  Created on: 24 mar. 2021
 *      Author: Suhar
 */
#include<stdio.h>
#include "usuarios/usuarios.h"

int main(void)
{
	int eleccion;
	do
	{
		fflush(stdin);
	printf("Hola\n\n");
	printf("1. Iniciar sesion\n");
	printf("2. Registrarse\n");
	printf("3. Exit\n");
	fflush(stdout);
	scanf("%i", &eleccion);



	switch (eleccion)
	{
	case 1:/* Iniciar sesion */

		printf("Has seleccionado iniciar sesión. Por favor introduzca el nombre de usuario y contraseña\n");
		fflush(stdout);
		char usuario[];
		char contra[];
		do{
			printf("introduce el nombre de usuario\n");
			fflush(stdout);
			scanf("%s", usuario);
			printf("introduce la contraseña\n");
			fflush(stdout);

			scanf("%s", contra);

			if (devolverUsuario(usuario) == NULL || devolverUsuario(usuario).contrasenya != contra) {
				printf("Ese nombre de usuário no existe o la contraseña no es valida, por favor, vuelva a intentarlo\n");

		}
		}while(devolverUsuario(usuario) == NULL || devolverUsuario(usuario).contrasenya != contra);


	    break;
	case 2:/*Registrarse*/
		printf("Has seleccionado registrarse por favor introduzca los datos de usuario correspondientes\n");
		fflush(stdout);
		char usuario[];
		do{
			printf("introduce el nombre de usuario\n");
			fflush(stdout);
			scanf("%s", usuario);
			if (devolverUsuario(usuario) != NULL) {
				printf("Ese nombre de usuário ya existe, por favor introduzca uno valido\n");

		}
		}while(devolverUsuario(usuario) == NULL);
		printf("introduce la contraseña\n");
		fflush(stdout);
		char contra[];
		scanf("%s", contra);
		printf("introduce nombre\n");
		fflush(stdout);
		char nombre[];
		scanf("%s", nombre);
		printf("introduce apellido\n");
		fflush(stdout);
		char apellido[];
		scanf("%s", apellido);
		printf("introduce correo\n");
		fflush(stdout);
		char correo[];
		scanf("%s", correo);
		printf("introduce edad\n");
		fflush(stdout);
		char edad;
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

	}while(eleccion !=3);


	int choice;
do
{
	fflush(stdin);
printf("Bienvenidos a los Hoteles deusto\n\n");
printf("1. reserva de habitacion\n");
printf("2. eliminar reserva\n");
printf("3. Registro de reservas\n");
printf("4. Exit\n");
fflush(stdout);
scanf("%i", &choice);



switch (choice)
{
case 1:/* Añadir usuario*/
	//HABRA QUE CREAR UNA CARPETA NUEVA LLAMADA MENUS/INTERFACES PARA GUARDAR TODOS ESTOS PROCESOS
	printf("Procediendo al menu de reservas\n");
	fflush(stdout);
    break;
case 2:/*Search Movie*/
	//HABRA QUE CREAR UN MENU MANUAL CON CADA UNA DE LAS RESERVAS PROXIMAS COMO POSIBLES OPCIONES
	printf("selecciona la reserva que quieras eliminar\n");
	fflush(stdout);
    break;
case 3:
	//UTILIZAR FICHEROS PARA GUARDAR LAS RESERVAS DE CADA UNO
	printf("Estas son las reservas que has realizado en nuestra aplicación");
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

}while(choice !=4);

return 0;
}
