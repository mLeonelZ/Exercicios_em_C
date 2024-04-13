#include <stdio.h>
#include <locale.h>

void somar(){
	int n1,n2,resultado;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &n1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &n2);

 	resultado = n1+n2;
 	printf("O resultado é %d", resultado);
}

float converter(){
	float real,dolar,resultado;
	printf("Digite um valor em R$: \n");
	scanf("%f",&real);
	printf("Digite quanto 1 Dolar vale em Reais: \n");
	scanf("%f",&dolar);
	resultado = real / dolar;
	return resultado; 
}

float converter_par(float x, float y){
	float resultado;
	resultado = x / y;
	return resultado; 
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//int n;
	
	//n = somar();
	//printf(n);
	
	float real, dolar, resultado;
	
	printf("Digite um valor em R$: \n");
	scanf("%f",&real);
	printf("Digite quanto 1 Dolar vale em Reais: \n");
	scanf("%f",&dolar);
	
	resultado = converter_par(real,dolar);
	
	printf("%.2f R$ é igual a %.2f $", real, resultado);
	
	
	
}
