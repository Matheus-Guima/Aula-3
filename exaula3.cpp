//Matheus Guimar�es Rocha - Aula 03 - Recursividade
//C�digo base em C++
#include <iostream> 
#include <stdio.h>
using namespace std;

//fun��o potencia
int potencia(int n, int e){
	if(e == 0 ){
		return 1;
	}else{
		return (n*potencia(n, e - 1));
	}
}

// fun��o principal
int main() {
	//Configura��o
	setlocale(LC_ALL,"portuguese");
	
	//vari�veis (declare aqui os tipos e as vari�veis a usar)
	int n, e, i;
	

    //entrada de dados (comandos atribuindo ou solicitando dados)
    printf("Digite o numerador e o expoente: ");
    scanf("%d%d", &n, &e);
    printf("\nA sequencia das potencias e: \n");
    
	//processamento de dados (c�lculos, testes, verifica��es, etc.)
	


    //saida de dados (exibi��o dos resultados obtidos pelo processamento)
    printf("Resultado de %d elevado a %d: %d\n", n, e, potencia(n,e));
   
    
    return 0;
} // fim do main()
