#include <stdio.h>
#include <stdlib.h>

int sumar(int );

int main() {

	int vect[100], mayor, nElementos, i;
	printf("ingrese el numero de elementos\n");
	scanf("%d",&nElementos);
	for(i=0; i<nElementos; i++){
		printf("ingrese un numero\n");
		scanf("%d",&vect[i]);
	}
	printf("la suma es: %d\n",sumar(nElementos));

	return 0;
}
//funcion recursiva
int sumar(int n){
	int suma=0;
	if(n==1){
		suma = 1;
	}else{
		suma = n+sumar(n-1);
	}
}
