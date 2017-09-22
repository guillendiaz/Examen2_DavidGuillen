#ifndef ADTLIST_H
#define ADTLIST_H
#include "Ciudadano.h"

class ADTList{
		protected:
			int size;
		public:
			ADTList();
			virtual ~ADTList();
			int Size()const;
			virtual bool insert(Ciudadano*, int)=0;
			virtual Ciudadano* remove(int)=0;
			virtual Ciudadano* first()const=0;
			virtual Ciudadano* last()const=0;
			virtual void clear()=0;
			virtual int indexOf(Ciudadano*)const=0;
			virtual Ciudadano* get(int)=0;
			virtual int Capacity()const=0;
			virtual bool isEmpty()const=0;
			virtual bool isFull()const=0;

};

#endif
