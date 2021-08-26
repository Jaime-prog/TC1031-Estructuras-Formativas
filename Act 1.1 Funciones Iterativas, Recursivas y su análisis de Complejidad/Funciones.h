#ifndef FUNCIONES_H
#define FUNCIONES_H

class funciones{
public:

funciones();
funciones(int n);

int sumaIterativa(int n);
int sumaRecursiva(int n);
int sumaDirecta(int n):

};


int funciones::sumaIterativa (int n){
  int resultado = 0;
	for (int i = 1; i <= n; i++) {
		resultado=resultado+i;
	}
	return resultado;
}

int funciones::sumaRecursiva (int n){
 if (numero<=1){
   return 1;
 } else{
   return numero+sumaRecursiva(numero-1);
 }
}


int funciones::sumaDirecta (int n){
result =0;
result= (n*(n+1))/2;
return result;
}

#endif