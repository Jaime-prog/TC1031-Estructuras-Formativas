#ifndef FUNCIONES_H
#define FUNCIONES_H

class Funciones{
public:
Funciones();
Funciones(int n);

int sumaIterativa(int n);
int sumaRecursiva(int n);
int sumaDirecta(int n);
};

Funciones::Funciones(){}

int Funciones::sumaIterativa (int n){
  int resultado = 0;
	for (int i = 1; i <= n; i++) {
		resultado=resultado+i;
	}
	return resultado;
}

int Funciones::sumaRecursiva (int n){
 if (n==0){
   return 0;
 } else{
   return n+sumaRecursiva(n-1);
 }
}

int Funciones::sumaDirecta (int n){
return (n*(n+1))/2;
}

#endif