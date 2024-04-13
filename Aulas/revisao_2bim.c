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
	
	//funções e voids
	//variaveis locais e globais
	//laços de repetições
	//vetores e matrizes
	//manipulação de arquivos
	//funçoes para strings
	
	
	// #### TODA FUNÇÃO RETORNA UM VALOR #####
	// ARGUMENTO = O QUE É PASSADO PARA A FUNÇÃO
	// PARÂMETRO = O QUE A FUNÇÃO RECEBE 
	
//	int nota();
	
//	printf("A unicesumar é nota %d", nota()); // SEM PASSAGEM DE PARÂMETRO
/*int a, b, total;
printf("Digite um numero \n");
scanf("%d", &a);
printf("Digite outro numero \n");
scanf("%d", &b);

total = soma(a,b);

printf("Resultado = %d", total);
*/


// VOIDS SÃO PROCEDIMENTOS
// VOIDS TEM , MAH NUM TEM RETORNO

int a, b, total;

printf("digite um numero \n");
scanf("%d", &a);
printf("digite outro numero \n");
scanf("%d", &b);

multiplicar(a,b);

}


