#ifndef USUARIO_USUARIO_H_
#define USUARIO_USUARIO_H_

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

void eliminarPerfil(usuario);

usuario devolverUsuario(char *usuario);

#endif /* USUARIO_USUARIO_H_ */
