#include <stdio.h>
#include <locale.h>

/*
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int n1, n2, resultado;
	
	n1 = 10;
	n2 = 20;
	
	
	resultado = n1 + n2;
	
	printf("a soma de %d e %d é igual a %d\n", n1,n2,resultado);

	
	
}
*/

/*
	int main(){
	int numero1 = 19;
	int numero2 = 2;
	int resultado;
	
	resultado = numero1 % numero2;
	setlocale(LC_ALL,"Portuguese");
	printf("O modulo de %d por %d é: %d \n", numero1,numero2,resultado);
	
	}
*/
/*
int main () {
	float nota1,nota2,media;
	int peso1,peso2;
	
	nota1=5.5;
	nota2=6.3;
	peso1=3;
	peso2=7;
	
	media=(nota1*peso1+nota2*peso2)/(peso1+peso2);
	setlocale(LC_ALL, "Portuguese");
	printf("nota1: %.2f (peso %d)\n", nota1,peso1);
	printf("nota2: %.2f (peso %d)\n", nota2,peso2);
	printf("media ponderada: %.2f\n", media);

	
}
*/

/*

int main (){ 
char conceito= 'A';
float media=9.5;
setlocale(LC_ALL,"Portuguese");
printf("Conceito: %c\n",conceito);
printf("Média:%.1f\n",media);
}
*/

int main(){
	const  float conversao = 3.6;
	int velocidadekmh;
	float resultado;
	
	velocidadekmh = 60;
	
	resultado = velocidadekmh / conversao;
	
	printf("%d km/h em m/s e %.2f",velocidadekmh,resultado);
	
	
}
