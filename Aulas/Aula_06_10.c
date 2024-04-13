#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2,resultado;
	char op;
	
	printf("Digite o primeiro numero \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero \n");
	scanf("%d", &n2);
	
	fflush(stdin);
	printf("Digite a opção: + - / ou *  \n");
	scanf("%c", &op);
	
	switch(op){
		case '+':
			printf("%d", n1 + n2);
			break;
		case '/':
			printf("%d", n1 / n2);
			break;
		case '-':
			printf("%d", n1 - n2);
			break;
		case '*':
			printf("%d", n1 * n2);
			break;
		default:
			printf("Você usou uma opção inválida");	
	}
}
