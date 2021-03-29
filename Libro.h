#ifndef LIBRO_H_
#define LIBRO_H_

#include <iostream>
#include <string.h>

typedef struct {
	int nSerie;
	char autor;
    int fechaLanzamiento;
} Libro;

void print(Libro c);
/*
using namespace std;

class Libro
{
public: 
    int nSerie;
    string autor;
    int fechaLanzamiento;

public:
    Libro(const int nSerie, const string autor, const int fechaLanzamiento);
    Libro();

    Libro(Libro &j);

    void imprimir();
    int getNSerie() const;
    string getAutor() const;
    int getFechaLanzamiento() const;

    void setNSerie(int nSerie);
    void setAutor(const string &autor);
    void setFechaLanzamiento(int fechaLanzamiento);
}; */
#endif
