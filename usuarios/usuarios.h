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

	char usuario[];

	char contrasenya[];

	char nombre[];

	char apellidos[];

	char correo[];

	char edad[];

}usuario;

void registrarUsuario(char usuario[], char contrasenya[],char nombre[], char apellidos[],char correo[],char edad[]);

void modificarDatos();

void eliminarPerfil();



#endif /* USUARIOS_USUARIOS_H_ */
