/*
 * main.c
 *
 *  Created on: 24 mar. 2021
 *      Author: Suhar
 */
#include<stdio.h>
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

		printf("holakease\n");
		fflush(stdout);
	    break;
	case 2:/*Registrarse*/
		printf("kaixozelan\n");
		fflush(stdout);
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
printf("1. Añadir usuario\n");
printf("2. eliminar usuario\n");
printf("3. Registro de sesiones\n");
printf("4. Exit\n");
fflush(stdout);
scanf("%i", &choice);



switch (choice)
{
case 1:/* Añadir usuario*/

	printf("holakease\n");
	fflush(stdout);
    break;
case 2:/*Search Movie*/
	printf("Kaixozelan\n");
	fflush(stdout);
    break;
case 3:
	printf("Registro de usuarios");
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
