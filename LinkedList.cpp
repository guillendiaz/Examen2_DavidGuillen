#include "LinkedList.h"
#include "ADTList.h"
#include "Ciudadano.h"
#include "nodo.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

LinkedList::LinkedList(){
}

LinkedList::~LinkedList(){
	if(head){
		delete head;
	}
}

bool LinkedList::insert(Ciudadano* e, int p){
	if(p < 0 || p > size){
		return false;
	}
	nodo* neo = new nodo(e);
	if(!head){
		head = neo;
	}else if(p==0){
		neo->next = head;
		head = neo;
	}else{
		nodo* temp = head;
		for (int i = 1; i < p; ++i){
			temp = temp -> next;

		}
		neo -> next = temp ->next;
		temp -> next = neo;
	}
	size++;
	return true;
}

Ciudadano* LinkedList::remove(int p){
	if (p < 0 || p >= size){
        return 0;
	}
    nodo* temporal;
    if (p == 0){
    	temporal = head;
        head = temporal->next;
        Ciudadano* retVal = temporal -> elemento;
       	//temporal ->elemento = 0;
        delete temporal;
        temporal = 0;
        delete retVal;
        size--;
        return retVal;
    }else if (p == size-1){
        temporal = head;
        for (int i=1; i<p; i++){
           temporal = temporal->next;
        }
        Ciudadano* retValDos = temporal ->next-> elemento;
        temporal -> next -> elemento = NULL;
        delete temporal ->next;
        temporal-> next = 0;
        size--;
        return retValDos;
    }else {
        temporal = head;
        for (int i=1; i<p; i++){
           temporal = temporal -> next;
        }
        nodo* guardar = temporal->next->next;
        Ciudadano* retValTres = temporal->next->elemento;
        temporal->next->elemento = 0;
        delete temporal ->next;
        temporal->next =0;
        temporal->next = guardar;
        size--;
        return retValTres;
    }
}

Ciudadano* LinkedList::first()const {
	if(head){
		return head -> elemento;
	}
	return 0;
}

Ciudadano* LinkedList::last()const{
	if(head == 0){
		return 0;
	}
	nodo* temp = head;
	for (int i = 0; i < size; ++i){
		temp = temp->next;
	}
	return temp ->elemento;
	return 0;
}

void LinkedList::clear(){
	if(head){
		delete head;
	}
	head = 0;
	size = 0;
}

int LinkedList::indexOf(Ciudadano* e)const {
	nodo* temp = head;
    for (int i=0; i < size; i++){
        if (temp->elemento->equals(e)){
                return i;
        }
        temp = temp->next;
    }
	return -1;
}

Ciudadano* LinkedList::get(int p){
	if (p < 0 || p >= size){
		return 0;
	}
	nodo* temp = head;
	for (int i=0; i < p; i++){
		temp = temp->next;
	}
	return temp->elemento;
}

int LinkedList::Capacity()const {
	return -1;
}

bool LinkedList::isEmpty()const {
	if (size == 0){
		return true;
	}
	return false;
}

bool LinkedList::isFull()const {
	return false;
}
