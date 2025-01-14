
#pragma once
#define MAX_PLATAFORMAS 50
#include "Hombre.h"
//#include "Enemigo.h"
#include "Pared.h"

class ListaPlataformas
{
private:
	Pared* lista[MAX_PLATAFORMAS];
	Pared pared;
	int numero;

public:

	//Metodos inicializacion
	ListaPlataformas();
	virtual ~ListaPlataformas();

	//Metodos GLUT
	void Dibuja();

	//Metodos Set

	//Mertodos Get
	int GetNumero();
	Pared GetPlataforma(int j);

	//Metodos a�adir nuevas paredes

	bool Agregar(Pared* e);


	//REBOTE
	void Rebote(Hombre&);
	//void Rebote(Enemigo& r);

	//DESTRUCTOR
	void DestruirContenido();
	void Eliminar(int index);
	void Eliminar(Pared* e);


};