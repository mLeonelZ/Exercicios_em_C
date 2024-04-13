#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	// for (inicialização; condição; atualização){}
	int i;
	
	//for(i = 1; i <= 10; i++){
	//	printf("%d \n", i);
	//}
	
	
	// ex 1
	
	int num,contagem,resultado, idade;
	float altura;
	num = 0;
	contagem = 0;
	
	/*printf("Digite um numero: \n");
	scanf("%d", &num);
	if((num >= 0) && ( num <= 10)){
		do{
			resultado = num * contagem;
			printf(" %d * %d = %d \n", num, contagem, resultado);
			++contagem;
		} while(contagem <= 10);
	} else {
		printf("Errou!");
	}*/
	
	/* printf("Digite um numero: \n");
	scanf("%d", &num);
	
	while(contagem <= 10){
		++contagem;
		resultado = num * contagem;
		printf("%d * %d = %d \n", num, contagem, resultado);
	}*/
	
	/*printf("Digite um numero \n");
	scanf("%d", &num);
	for (contagem = 1;  contagem <= 10;contagem++){
		resultado = num * contagem;
		printf("%d * %d = %d \n " , num , contagem, resultado);
	}*/
	float maior;
	maior = 0;
   
	for(contagem = 1; contagem <= 5; contagem++){
		printf("Digite sua altura \n");
		scanf("%f", &altura);
		if (altura > maior){
			maior = altura;
		}
	}
	printf("A maior altura é %.2f", maior);
	
	
}
