#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "Libro.h"
#include "Cliente.h"
#include "Biblioteca.h"

int main(void){
	setbuf(stdout, NULL);
	int opcion;
	int opcion1;
	bool bucle = true;


	char nombre[20];
	char clave[20];
	char cadena[100];
	FILE *fichero;
	char nombre_buscar[20];
	char clave_buscar[20];
	bool encontrado;

	while (bucle){
		printf("Menu Principal\n\n");
		printf( "\n   Escoge una opci?n:" );
		printf( "\n   1. Iniciar sesi?n como usuario." );
		printf( "\n   2. Iniciar sesi?n como trabajador." );
		printf( "\n   3. Registrarse." );
		printf( "\n   4. Salir.");
		fflush(stdin);
		scanf( "%d", &opcion );

		switch ( opcion )
				{
					case 1: printf( "\n   Introduzca su usuario: ");
							fflush(stdin);
							scanf( "%s", nombre_buscar );
							printf( "\n   Introduzca su contrase?a: ");
							fflush(stdin);
							scanf( "%s", clave_buscar );

							if ((fichero = fopen( "usuarios.txt", "rt" )) == NULL) {
								printf( "No se puede abrir el fichero.\n" );
								exit( 1 );
							}

							encontrado = false;
							while(fscanf(fichero, "%s %s", nombre, clave) != EOF ) {
								if (strcmp(nombre, nombre_buscar) == 0 && strcmp(clave, clave_buscar) == 0) {
									encontrado = true;
								}
							}

							fclose( fichero );

							if (encontrado) {
								printf( "\n   Inicio de sesi?n con exito! ");
								printf( "\n");
								printf( "\n   Seleccione acci?n: ");
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
								printf( "\n\n\n");
							} else {
								printf( "\n   Usuario - Contrase?a no registrado! ");
								printf( "\n\n\n");

								printf( "\n   ?Desea recordar la contrase?a?:" );
								printf( "\n   1. Si." );
								printf( "\n   2. No." );

								fflush(stdin);
								scanf( "%d", &opcion1 );

								switch ( opcion1 )
												{
										case 1:

									printf( "\n\n" );
									printf( "Nombre usuario a buscar: " );
									fflush(stdin);
									fgets(cadena, 20, stdin);
									sscanf(cadena, "%s", nombre_buscar);
		if ((fichero = fopen( "usuarios.txt", "rt" )) == NULL) {
			printf( "No se puede abrir el fichero.\n" );
			exit( 1 );
		}

				while(fscanf(fichero, "%s %s", nombre, clave) != EOF ) {
			if (strcmp(nombre_buscar, nombre) == 0) {
				printf( "Nombre usuario: %s\n",   nombre );
				printf( "Clave: %s\n", clave);
			}
		}

		fclose( fichero );

											break;
										case 2:
											fclose( fichero );
											break;
							}
							}
							break;

					case 2: printf( "\n   Introduzca su usuario: ");
							fflush(stdin);
							scanf( "%s", nombre_buscar );
							printf( "\n   Introduzca su contrase?a: ");
							fflush(stdin);
							scanf( "%s", clave_buscar );

							if ((fichero = fopen( "usuarios.txt", "rt" )) == NULL) {
								printf( "No se puede abrir el fichero.\n" );
								exit( 1 );
							}

							encontrado = false;
							while(fscanf(fichero, "%s %s", nombre, clave) != EOF ) {
								if (strcmp(nombre, nombre_buscar) == 0 && strcmp(clave, clave_buscar) == 0) {
									encontrado = true;
								}
							}

							fclose( fichero );

							if (encontrado) {
								printf( "\n   Inicio de sesi?n con exito! ");
								printf( "\n");
								printf( "\n   Seleccione acci?n: ");
								printf( "\n   1. Reservar libro. ");
								printf( "\n   2. Devolver libro. ");
								printf( "\n   3. A?adir libro. ");
								printf( "\n   4. Eliminar libro. ");
									fflush(stdin);
								scanf( "%d", &opcion );

								switch (opcion){

									case 1: printf("\n Libro reservado.");
											break;
									case 2: printf("\n Libro devuelto.");
											break;
									case 3: printf("\n Libro a?adido.");
											break;
									case 4: printf("\n Libro eliminado.");
											break;
								}
								printf( "\n\n\n");
							} else {
								printf( "\n   Usuario - Contrase?a no registrado! ");
								printf( "\n\n\n");

								printf( "\n   ?Desea recordar la contrase?a?:" );
																printf( "\n   1. Si." );
																printf( "\n   2. No." );

																fflush(stdin);
																scanf( "%d", &opcion1 );

																switch ( opcion1 )
																				{
																		case 1:

																	printf( "\n\n" );
																	printf( "Nombre usuario a buscar: " );
																	fflush(stdin);
																	fgets(cadena, 20, stdin);
																	sscanf(cadena, "%s", nombre_buscar);
										if ((fichero = fopen( "usuarios.txt", "rt" )) == NULL) {
											printf( "No se puede abrir el fichero.\n" );
											exit( 1 );
										}

												while(fscanf(fichero, "%s %s", nombre, clave) != EOF ) {
											if (strcmp(nombre_buscar, nombre) == 0) {
												printf( "Nombre usuario: %s\n",   nombre );
												printf( "Clave: %s\n", clave);
											}
										}

										fclose( fichero );

																			break;
																		case 2:
																			fclose( fichero );
																			break;
															}
							}

					break;

					case 3:

						if ((fichero = fopen( "usuarios.txt", "at" )) == NULL) {
										printf( "No se puede abrir el fichero.\n" );
										exit( 1 );
									}



									do {
										printf( "\n\n" );
										printf( "Introduzca su usuario: " );
										fflush(stdin);
								 		fgets(cadena, 20, stdin);
										sscanf(cadena, "%s", nombre);

										if (strcmp(nombre,"fin") != 0) {
											printf( "Introduzca su contrase?a:  " );
											fflush( stdin );
											fgets(cadena, 20, stdin);
											sscanf(cadena, "%s", clave);
											printf( "\n   Registro con exito! ");

											/* Guarda el registro en el fichero */
											fprintf(fichero, "%s %s\n", nombre, clave);

										}
									} while (strcmp(nombre,"fin")!= 0);

									fclose( fichero );




					break;

					case 4: printf( "\n   Adi?s. ");
							bucle = false;
					break;

					default:
					printf("Opcion no valida vuelva a intentar");

				 }
	}

	return 0;


		return EXIT_SUCCESS;
}
