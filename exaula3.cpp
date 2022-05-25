//Matheus Guimarães Rocha - Aula 03 - Recursividade
//Código base em C++
#include <iostream> 
#include <stdio.h>
using namespace std;

//função potencia
int potencia(int n, int e){
	if(e == 0 ){
		return 1;
	}else{
		return (n*potencia(n, e - 1));
	}
}

// função principal
int main() {
	//Configuração
	setlocale(LC_ALL,"portuguese");
	
	//variáveis (declare aqui os tipos e as variáveis a usar)
	int n, e, i;
	

    //entrada de dados (comandos atribuindo ou solicitando dados)
    printf("Digite o numerador e o expoente: ");
    scanf("%d%d", &n, &e);
    printf("\nA sequencia das potencias e: \n");
    
	//processamento de dados (cálculos, testes, verificações, etc.)
	


    //saida de dados (exibição dos resultados obtidos pelo processamento)
    printf("Resultado de %d elevado a %d: %d\n", n, e, potencia(n,e));
   
    
    return 0;
} // fim do main()
