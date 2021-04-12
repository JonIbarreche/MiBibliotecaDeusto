#ifndef LIBRO_H_
#define LIBRO_H_

//#include <iostream>
//#include <string.h>

typedef struct
{
    int nSerie;
    char autor;
    int fechaLanzamiento;
} Libro;

void print(Libro c);

#endif
