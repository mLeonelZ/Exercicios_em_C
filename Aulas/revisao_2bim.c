#include <stdio.h>
#include <locale.h>



void multiplicar(int x, int y){
	int resultado;
	resultado = x * y;
	printf("resultado = %d", resultado);
}

int soma(int x, int y){
	int resultado;
	resultado = x + y;
	return resultado;
}

int nota(){
	return 10 ;
}

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	//fun��es e voids
	//variaveis locais e globais
	//la�os de repeti��es
	//vetores e matrizes
	//manipula��o de arquivos
	//fun�oes para strings
	
	
	// #### TODA FUN��O RETORNA UM VALOR #####
	// ARGUMENTO = O QUE � PASSADO PARA A FUN��O
	// PAR�METRO = O QUE A FUN��O RECEBE 
	
//	int nota();
	
//	printf("A unicesumar � nota %d", nota()); // SEM PASSAGEM DE PAR�METRO
/*int a, b, total;
printf("Digite um numero \n");
scanf("%d", &a);
printf("Digite outro numero \n");
scanf("%d", &b);

total = soma(a,b);

printf("Resultado = %d", total);
*/


// VOIDS S�O PROCEDIMENTOS
// VOIDS TEM , MAH NUM TEM RETORNO

int a, b, total;

printf("digite um numero \n");
scanf("%d", &a);
printf("digite outro numero \n");
scanf("%d", &b);

multiplicar(a,b);

}


