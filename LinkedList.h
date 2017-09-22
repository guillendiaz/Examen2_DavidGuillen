#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "ADTList.h"
#include <iostream>
#include "Ciudadano.h"
#include "nodo.h"

using namespace std;

class LinkedList : public ADTList{
	protected:
		nodo* head;

	public:
		LinkedList();
		virtual ~LinkedList();
		virtual bool insert(Ciudadano*, int);
		virtual Ciudadano* remove(int);
		virtual Ciudadano* first()const;
		virtual Ciudadano* last()const;
		virtual void clear();
		virtual int indexOf(Ciudadano*)const;
		virtual Ciudadano* get(int);
		virtual int Capacity()const;
		virtual bool isEmpty()const;
		virtual bool isFull()const;
};

#endif
