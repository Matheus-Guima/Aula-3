//Matheus Guimarães Rocha - Aula 03 - Recursividade
//Código base em C++
#include <iostream> 
#include <stdio.h>
using namespace std;

//função fatorial
int fatorial(int n){
	if(n <= 0){
		return 1; //Condição de parada
	}else{
		return n * fatorial(n-1); // 5 * fatorial(4)
		                          // 4 * fatorial(3)
		                          // 3 * fatorial(2)
		                          // 2 * fatorial(1)
		                          // 1 * fatorial(0) c o if -> 1
	}	
}

// função principal
int main() {
	//Configuração
	setlocale(LC_ALL,"portuguese");
	
	//variáveis (declare aqui os tipos e as variáveis a usar)
	int f;

    //entrada de dados (comandos atribuindo ou solicitando dados)
    
    
	//processamento de dados (cálculos, testes, verificações, etc.)
	f = fatorial(5); // chamar função que dará 120


    //saida de dados (exibição dos resultados obtidos pelo processamento)
    printf("%d",f); // %d -> Dígito, Número inteiro
    
    return 0;
} // fim do main()

