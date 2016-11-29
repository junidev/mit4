#include "nodo.h"
#include "nodo.cpp"


int main () {
    //stack
	Stack<int> obj;
	//Nodo
	Nodo<int> *A=crear(100,0);
	Nodo<int> *B=crear(101,1);
	Nodo<int> *C=crear(102,2);

	//metodos....
	cout<<endl;
	cout<< "-" << endl;
	obj.push_back(A);
	obj.push_back(B);
	obj.push_back(C);

	obj.imprimir();
	cout<<endl;
	cout<<" elemento top " << endl;
	cout<<obj.top()<<endl;
	return 0;
}
