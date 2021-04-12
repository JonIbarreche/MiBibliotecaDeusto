#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Libro.h"
#include "Cliente.h"
#include "Biblioteca.h"

int main(void){
	setbuf(stdout, NULL);
	int opcion;
	int usuario;
	int contrasena;
	bool bucle = true;
	while (bucle){
		printf("Menu Principal\n\n");
		printf( "\n   Escoge una opci�n:" );
		printf( "\n   1. Iniciar sesi�n como usuario." );
		printf( "\n   2. Iniciar sesi�n como trabajador." );
		printf( "\n   3. Registrarse." );
		printf( "\n   4. Salir.");
		fflush(stdin);
		scanf( "%d", &opcion );

		switch ( opcion )
				{
					case 1: printf( "\n   Introduzca su usuario: ");
							fflush(stdin);
							scanf( "%d", &usuario );
							printf( "\n   Introduzca su contrase�a: ");
							fflush(stdin);
							scanf( "%d", &contrasena );
							printf( "\n   Inicio de sesi�n con exito! ");
							printf( "\n");
							printf( "\n   Seleccione acci�n: ");
							printf( "\n   1. Reservar libro. ");
							printf( "\n   2. Devolver libro. ");
							fflush(stdin);
							scanf( "%d", &opcion );

							switch (opcion){

									case 1: printf("\n Libro reservado");
											break;
									case 2: printf("\n Libro devuelto");
											break;
							}


							break;

					case 2: printf( "\n   Introduzca su usuario: ");
						fflush(stdin);
							scanf( "%d", &usuario );
							printf( "\n   Introduzca su contrase�a: ");
								fflush(stdin);
							scanf( "%d", &contrasena );
							printf( "\n   Inicio de sesi�n con exito! ");
							printf( "\n");
							printf( "\n   Seleccione acci�n: ");
							printf( "\n   1. Reservar libro. ");
							printf( "\n   2. Devolver libro. ");
							printf( "\n   3. A�adir libro. ");
							printf( "\n   4. Eliminar libro. ");
								fflush(stdin);
							scanf( "%d", &opcion );

					switch (opcion){

							case 1: printf("\n Libro reservado.");
									break;
							case 2: printf("\n Libro devuelto.");
									break;
							case 3: printf("\n Libro a�adido.");
									break;
							case 4: printf("\n Libro eliminado.");
									break;
					}

					break;

					case 3: printf( "\n   Introduzca su usuario: ");
						fflush(stdin);
							scanf( "%d", &usuario );
							printf( "\n   Introduzca su contrase�a: ");
								fflush(stdin);
							scanf( "%d", &contrasena );
							printf( "\n   Registro con exito! ");
							printf( "\n");
					break;

					case 4: printf( "\n   Adi�s. ");
							bucle = false;
					break;

					default:
					printf("Opcion no valida vuelva a intentar");

				 }
	}

	return 0;
}
