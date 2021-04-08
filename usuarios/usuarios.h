/*
 * usuarios.h
 *
 *  Created on: 24 mar. 2021
 *      Author: Suhar
 */

#ifndef USUARIOS_USUARIOS_H_
#define USUARIOS_USUARIOS_H_

typedef struct{

	int idUsuadio;

	char usuario[10];

	char contrasenya[10];

	char nombre[10];

	char apellidos[20];

	char correo[20];

	int edad;

}usuario;

void registrarUsuario(char usuario[], char contrasenya[],char nombre[], char apellidos[],char correo[], int edad);

void modificarDatos(usuario);

void eliminarPerfil(usuario);

usuario devolverUsuario(char* usuario);

#endif /* USUARIOS_USUARIOS_H_ */
