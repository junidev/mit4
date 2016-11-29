#include "nodo.h"

/*. Nodoo*/

template<class T>
Nodo<T>* crear(T a,int_sh b) {
	Nodo<T> *n=new Nodo<T>(a,b);
	return n;
}

template<class T>
Nodo<T>::Nodo(): key(0), id(0), next(NULL) {}

template<class T>
Nodo<T>::Nodo(T a,int_sh b): key(a), id(b), next(NULL) {}


template<class T>
Nodo<T>::Nodo(const Nodo<T> *n) {
	this->key=n->getKey();
	this->id=n->getID();
	this->next=n->next;
}

template<class T>
void Nodo<T>::setKey(T a) {
	this->key=a;
}

template<class T>
T Nodo<T>::getKey() {	return this->key;}

template<class T>
void Nodo<T>::setID(int_sh b) {
	this->id=b;
}

template<class T>
int_sh Nodo<T>::getID() {	return this->id;}

/*...STACK..*/

template<class T>
Stack<T>::Stack() {
	head=NULL;
}

template<class T>
void Stack<T>::push_back(Nodo<T>* n) {
	if(head==NULL){
		head=n;
	}
	else{
		Nodo<T>* prev, *cur;
		prev=head;
		cur=head->next;
		while(cur!=NULL){
			prev=cur;
			cur=cur->next;
		}
		prev->next=n;
		delete cur;
	}
}

template<class T>
void Stack<T>::pop(){
	Nodo<T> *prev, *cur;
	prev=head;
	cur=head->next;
	this->setLen();
	int_sh i=1;
	while(true){
		if(i==(this->getLen()-1)){
			prev->next=NULL;
			delete cur;
			break;
		}
		prev=cur;
		cur=cur->next;
		i++;
	}
}

template<class T>
void Stack<T>::setLen(){
	Nodo<T> *n;
	n=head;
	int_sh conta=0;
	while(n!=NULL){
		conta++;
		n=n->next;
	}
	delete n;
	size=conta;
}

template<class T>
void Stack<T>::imprimir(){
	Nodo<T> *n;
	n=head;
	while(n!=NULL){
		cout<<n->getKey()<<"->";
		n=n->next;
	}
	delete n;
}

template<class T>
int_sh Stack<T>::getLen() {
	this->setLen();
	return size;
}

template<class T>
bool Stack<T>::empty(){
	this->setLen();
	if(this->getLen()==0){
		return true;
	}
	return false;
}

template<class T>
T Stack<T>::top() {
	if(head==NULL){
		return -1;
	}
	else{
		Nodo<T>* prev, *cur;
		prev=head;
		cur=head->next;
		while(cur!=NULL){
			prev=cur;
			cur=cur->next;
		}
		delete cur;
		return prev->getKey();
	}
}



