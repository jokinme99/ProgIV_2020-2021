#ifndef USUARIO_USUARIO_H_
#define USUARIO_USUARIO_H_

#include <stdbool.h>
#include <stdio.h>

typedef struct {

	int idUsuario;

	char nombreusuario[30];

	char contrasenya[10];

	char correo[20];

	int edad;

} usuario;

void registrarUsuario(char nombreUsuario[], char contrasenya[], char correo[],
		int edad);

void modificarDatos(usuario);


bool comprobarUsuario(char* usuario, char* contrasenya);

void eliminarPerfil(char *nombreUsuario);

bool devolverUsuario(char *usuario);

#endif /* USUARIO_USUARIO_H_ */
