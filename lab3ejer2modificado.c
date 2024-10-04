#include<stdio.h>

long long int factorial(int n){

	if(n<0){
		printf("Funcion no definida para numeros negativos. \n"); //lo incluyo por si ponen numeros negativos
		return -1; //valor de error
	}
	if(n == 0) return 1; //para que no de error el factorial de cero

	long long int i = 1; //uso long long para numeros muy grandes
	while(n > 1){
		i = i * n;
		n = n - 1;

	}
	return i;


}

int main(int argc, char *argv[]){

	int num; //la variable a imprimir

	//solicitamos el numero al usuario
	printf("Introduce un numero para calcular su factorial: ");
	scanf("%d", &num); // lee el número

	long long int result = factorial(num); // Calcular el factorial

	if (result != -1) { // solo imprimir si no hay error
        	printf("%d! = %lld\n", num, result); // Imprimir resultado
	}


	return 0;

}

