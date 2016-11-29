#ifndef NODO_H
#define NODO_H

#include<iostream>
using namespace std;
typedef unsigned short int int_sh;

template<class T>
class Nodo {
private:
	T key;
	int_sh id;
public:
	Nodo<T> *next;

	friend Nodo<T>* crear(T,int_sh);
	Nodo();
	Nodo(T,int_sh);
	Nodo(const Nodo<T> *);
	void setKey(T);
	T getKey();
	void setID(int_sh);
	int_sh getID();
};

template<class T>
class Stack {
private:
	int_sh size;
public:
	Nodo<T> *head;

	Stack();
	void push_back(Nodo<T> *);
	void pop();
	void setLen();
	void imprimir();
	int_sh getLen();
	bool empty();
	T top();
};

#endif
