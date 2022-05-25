//Matheus Guimar�es Rocha - Aula 03 - Recursividade
//C�digo base em C++
#include <iostream> 
#include <stdio.h>
using namespace std;

//fun��o fatorial
int fatorial(int n){
	if(n <= 0){
		return 1; //Condi��o de parada
	}else{
		return n * fatorial(n-1); // 5 * fatorial(4)
		                          // 4 * fatorial(3)
		                          // 3 * fatorial(2)
		                          // 2 * fatorial(1)
		                          // 1 * fatorial(0) c o if -> 1
	}	
}

// fun��o principal
int main() {
	//Configura��o
	setlocale(LC_ALL,"portuguese");
	
	//vari�veis (declare aqui os tipos e as vari�veis a usar)
	int f;

    //entrada de dados (comandos atribuindo ou solicitando dados)
    
    
	//processamento de dados (c�lculos, testes, verifica��es, etc.)
	f = fatorial(5); // chamar fun��o que dar� 120


    //saida de dados (exibi��o dos resultados obtidos pelo processamento)
    printf("%d",f); // %d -> D�gito, N�mero inteiro
    
    return 0;
} // fim do main()

