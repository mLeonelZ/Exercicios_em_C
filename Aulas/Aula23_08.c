#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float preco, resultado,porcento ;
	
	printf("Digite o valor da gasolina \n");
	scanf("%f", &preco);
	printf("Digite a porcentagem de aumento \n");
	scanf("%f", &porcento);
	
	resultado = preco * (porcento / 100)+ preco;
	
	printf("A gasolina com o preco de R$%.2f e o aumento for de %.0fcv v  v  %% o resultado vai ser de R$%.2f",preco,porcento, resultado);
	
}
