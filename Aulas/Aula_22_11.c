#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//AULA SOBRE STRUCT -- REGISTROS
	
	// São estruturas que permitem ser armazenada mais de uma variavel de tipos diferentes.
	
	// ex
	//pessoa tem: nome(char),idade(int),altura(float)
	
	// SINTAXE
	
	//struct <nome_tipo>{
		//<tipo> <nome>
		//char nome[50];
		//int idade;
	//};
	
/*	struct pessoa{
		char nome[50];
		int idade;
		float altura;
	};
	
	printf("Digite seus dados: \n");
	printf("Nome: ");
	scanf("%s", pessoa.nome);
	printf("Idade: ");
	scanf("%d", pessoa.idade);
	printf("Altura: ");
	scanf("%f", pessoa.altura);
	
	printf("resultados: \n nome = %s \n idade = %d \n altura = %.2f");
	*/
	
/*	struct produtos{
		char nome[50];
		int quantidade;
		float valor;
	};
	
	struct produtos produto1;
	
	printf("Digite seus dadós: \n");
	printf("Nome: ");
	scanf("%s", produto1.nome);
	printf("Quantidade: ");
	scanf("%d", &produto1.quantidade);
	printf("Valor: ");
	scanf("%f", &produto1.valor);
	
	printf("\nresultados: \n nome = %s \n quantidade = %d \n valor = %.2f", produto1.nome,produto1.quantidade,produto1.valor);
	*/
	int i = 0;
	
	struct produto{
		char nome[50];
		int quantidade;
		float valor;
	};
	
	struct produto produtos[5];
	for(i = 0; i < 5; i++){
		fflush(stdin);
		printf("Digite o nome do produto: \n");
		fgets(produtos[i].nome, 50,stdin);
		printf("Digite a quantidade: \n");
		scanf("%d", &produtos[i].quantidade);
		printf("Digite o valor do produto: \n");
		scanf("%f", &produtos[i].valor);
		printf("\n\n");
	}
	
	for(i = 0; i < 5; i++){
		system("cls");
		printf("\nresultados: \n nome = %s \n quantidade = %d \n valor = %.2f\n", produtos[i].nome,produtos[i].quantidade,produtos[i].valor);
		system("pause");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
