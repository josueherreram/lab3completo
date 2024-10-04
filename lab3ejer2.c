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

	long long int fact4 = factorial(4);
	long long int fact5 = factorial(5);
	printf("4! = %lld, 5! =  %lld\n", fact4, fact5); //la funcion long long ocupa poner %lld
	return 0;

}

