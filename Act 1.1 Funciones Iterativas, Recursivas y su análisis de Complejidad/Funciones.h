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


int funciones::sumaIterativa{
  int resultado = 0;
	for (int i = 1; i <= n; i++) {
		resultado=resultado+i;
	}
	return resultado;
}

int funciones::sumaRecursiva{
 if (n<=1){
   return 1;
 } else{
   return n+sumaRecursiva(n-1);
 }
}


int funciones::sumaDirecta{
result =0;
result= (n*(n+1))/2;
return result;
}

#endif