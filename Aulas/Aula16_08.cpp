#include <stdio.h>
#include <locale.h>
/*
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2, resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	resultado = numero1 + numero2;
	
	printf("A soma de %d + %d é : %d ", numero1, numero2, resultado);
	
}*/

/*
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero1, numero2, modulo;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &numero2);
	
	modulo = numero1 % numero2;
	
	printf("O resto de %d / %d é : %d ", numero1, numero2, modulo);
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota1, nota2, media;
	int peso1, peso2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite o primeiro peso: ");
	scanf("%d", &peso1);
	
	printf("Digite o segundo peso: ");
	scanf("%d", &peso2);
	
	media= (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
	
	printf("A média ponderada é: %.2f",media);
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	char letra;
	int valor;
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	printf("Agora digite um valor inteiro: ");
	scanf("%d", &valor);
	printf("Você digitou a letra: %c\n", letra);
	printf("Você digitou o valor: %d\n", valor);
}
*/

int main(){
	double numero;
	printf("Digite o numero decimal: ");
	fflush(stdin);
	scanf("%lf", &numero);
	printf("Voce digitou: %.8lf\n", numero);

	
}
