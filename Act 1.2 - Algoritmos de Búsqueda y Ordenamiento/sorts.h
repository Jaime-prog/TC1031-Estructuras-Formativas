#ifndef SORTS_H
#define SORTS_H

class Sorts{
public:

Sorts();
Sorts(int n);

int ordenaSeleccion(vector<int>&);
int ordenaBurbuja(vector<int>&);
int ordenaMerge(vector<int>&);
int busqSecuencial(vector<int>&);
int busqBinaria(vector<int>&);
};

Sorts::Sorts(){
}

int Sorts::ordenaSeleccion(vector<int>&){
int pos;

	for(int i = v.size() - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(v[j] > v[pos]){
				pos = j;
			}
		}

		if (pos != i){
			swap(v, i, pos);
		}
	}
  return v;
}
  


int Sorts::ordenaSeleccion(vector<int>&){


}


int Sorts::ordenaBurbuja(vector<int>&){


}

int Sorts::ordenaMerge(vector<int>&){


}

int Sorts::busqSecuencial(vector<int>&){


}
int Sorts::busqBinaria(vector<int>&){


}

#endif