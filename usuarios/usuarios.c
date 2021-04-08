/*
 * usuarios.c
 *
 *  Created on: 7 abr. 2021
 *      Author: 34618
 */
#include <stdio.h>
#include "usuarios.h"

FILE* ficheroUsuarios;

void registrarUsuario(char usuario[], char contrasenya[],char nombre[], char apellidos[],char correo[],int edad){


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


	fprintf(ficheroUsuarios, "Usuario:%c;contraseña:%c;nombre:%c;apellidos:%c;correo:%d;Hora:%d;\n", usuario, contrasenya, nombre,apellidos, correo, edad);

	fclose(ficheroUsuarios);

}
