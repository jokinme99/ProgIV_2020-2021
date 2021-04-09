/*
 * usuarios.c
 *
 *  Created on: 7 abr. 2021
 *      Author: 34618
 */
#include "usuario.h"

#include <stdio.h>

FILE* ficheroUsuarios;

void registrarUsuario(char nombreUsuario[], char contrasenya[], char correo[],int edad){


	//Realiar el idReserva con el numero de reserva que es

	ficheroUsuarios = fopen("Usuarios.txt", "r");


		int contadorLineas = 1;
		char c;

		while((c = fgetc(ficheroUsuarios)) != EOF){

			if(c == '\n'){
				contadorLineas++;
			}
			}

			fclose(ficheroUsuarios);


	ficheroUsuarios = fopen("Usuarios.txt", "a");


	fprintf(ficheroUsuarios, "NombreUsuario:%c;contrasenya:%c;correo:%d;Hora:%d;\n", nombreUsuario, contrasenya, correo, edad);

	fclose(ficheroUsuarios);

}
