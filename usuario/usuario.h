#ifndef USUARIO_USUARIO_H_
#define USUARIO_USUARIO_H_

#include <stdbool.h>
#include <stdio.h>



void registrarUsuario(char nombreUsuario[], char contrasenya[], char correo[],
		int edad, int tipo);

bool comprobarUsuario(char* usuario, char* contrasenya);


#endif /* USUARIO_USUARIO_H_ */
