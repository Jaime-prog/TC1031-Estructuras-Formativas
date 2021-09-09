#ifndef SORTS_H
#define SORTS_H
#include <vector>
#include <iostream>

class Sorts{
public:

Sorts();
Sorts(int n);


void swap (vector<int>&, int, int);
void mergeRip(vector<int> &A, vector<int> &B, int low, int high);
void copyArray(vector<int>&,vector<int>&, int, int);
void mergeArray(vector<int>&,vector<int>&, int, int, int);
vector<int> ordenaSeleccion(vector<int>&);
vector<int> ordenaBurbuja(vector<int>&);
vector<int> ordenaMerge(vector<int>&);
vector<int> busqSecuencial(vector<int>&);
vector<int> busqBinaria(vector<int>&);
};

Sorts::Sorts(){
}


void Sorts::swap(vector<int> &v, int i, int j) {
	aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

vector<int> Sorts::ordenaSeleccion(vector<int>& entrada){
vector<int> vec(entrada);
int pos;
	for(int i = vec.size() - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(vec[j] > vec[pos]){
				pos = j;
			}
		}
		if (pos != i){
			swap(vec, i, pos);
		}
	}
  return vec;
}
  

vector<int> Sorts::ordenaBurbuja(vector<int>& entrada){
  vector<int> vec(entrada);

  for (int i=vec.size()-1;i>0;i--){
        for (int j=0; j<i;j++){

        if (vec[j]>v[j+1]){
          swap(vec,j,j+1);
        }
        }
  }
	return vec;
}


void Sorts::copyArray(vector<int> &A,vector<int> &B, int low, int high){
for (int i=low;i<= high;i++){
A[i]=B[i];
}
}

void Sorts::mergeArray(vector<int> &A, vector<int> &B, int low, int half, int high){

int i, j, k;

i=low;
j=half+1;
k=low;

while(i<=half && j<=high){
if (A[i]< A[j]){
B[k]=A[i];
i++;
}
else{

  B[k]=A[j];
  j++;
}
k++;
}

if (i> half){
for(; j<=half;j++){

  B[k++]=A[j];
}
else{
  for (; i <=half;i++){
  B[k++]=A[i];
}
}
}

}


void Sorts::mergeRip(vector<int> &A, vector<int> &B, int low, int high){
int half;

if ((high-low)<1){

  return;
}
half=((low+high)/2);
mergeRip(A,B,low,half);
mergeRip(A,B,half+1,high);
mergeArray(A,B,low,half,high);
copyArray(A,B,low,high);
}





vector<int> Sorts::ordenaMerge(vector<int>& entrada){
  vector<int> v(entrada);
	vector<int> tmp(v.size());

  mergeRip(v,tmp,0,v.size()-1);
	return v;

}

vector<int> Sorts::busqSecuencial(vector<int>& entrada){


}
vector<int> Sorts::busqBinaria(vector<int>& entrada){


}

#endif