#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
	
/*int valor;

		printf("Informe um numero: ");
	scanf("%d", &valor);
	
	if (valor % 2 == 0){
		printf("� par!");	
 	}
	else{
		printf("� impar!");
	} 
*/

//Exercicio 4
int numero;

printf("Informe um numero");
scanf("%d", &numero);

if ((numero / 5 && numero / 2 && numero /3) == 0){
	printf("� primo");
}  
else{
	printf("N�o � primo"); 
}
}


