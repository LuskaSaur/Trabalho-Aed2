#include "Vetor.h" 
#include "Lista.h"
#define tamanho 1000000
int main(){
	int *v = (int*)malloc(tamanho*sizeof(int));
	getchar();
	PreencheVetorOrdenado(tamanho, v);
	getchar();
	return 0;
}
