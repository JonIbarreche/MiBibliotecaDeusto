/*
 * Cliente.h
 *
 *  Created on: 9 abr. 2021
 *      Author: leire
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include "Libro.h"
typedef struct
{

	char nombre;
	int contrasenya;
	int edad;
	char email;
	int puntos;
	Libro libros[];


} Cliente;


#endif /* CLIENTE_H_ */
