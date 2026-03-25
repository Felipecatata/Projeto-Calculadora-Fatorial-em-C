#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long long calcularFatorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	return n * calcularFatorial(n-1);
}

int main(int argc, char *argv[]) {
	int num;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	if(num<0){
		printf("O fatorial nao eh definido para numeros negativos");
	}
	else{
		printf("O fatorial de %d eh %lld\n", num, calcularFatorial(num));
	}
	return 0;
}