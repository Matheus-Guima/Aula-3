// Aula 03 - Exemplo03
#include <iostream>

// função fibonacci sem recursão
int fibIter(int n){
	int i, k, f;
	i = 1; f= 0;
	for(k = 1; k <= n; k++){
		f += i;
		i = f - i;
	}
	return f;
}

// função principal
int main(){
	int n, i;
	printf("Digite a quantidade de termos da sequencia de Fibonacci: \n");
	scanf("%d", &n);
	printf("\nA sequencia de Fibonacci e: \n");
	for(i=0; i<n; i++){
		printf("%d ", fibIter(i));
	}
}
