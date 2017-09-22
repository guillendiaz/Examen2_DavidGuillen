#ifndef NODO_H
#define NODO_H

#include "Ciudadano.h"
class nodo{
	friend class LinkedList;
	protected:
		Ciudadano* elemento;
		nodo* next;
	public:
		nodo(Ciudadano*);
		~nodo();
};

#endif
