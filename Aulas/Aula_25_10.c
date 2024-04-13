#include <stdio.h>
#include <locale.h>

int main(){
	// VETORES E MATRIZES
	
	int numeros[4], i = 0, menor = 0, testar = 0;
	
	for (i = 0; i <= 4; i++){
		printf("Digite um numero: \n");
		scanf("%d", &numeros[i]);
		
		
		if (i == 0){
			menor = numeros[i];	
		} else{
			if(numeros[i] < menor){
				menor = numeros[i];
			}
		}
	}
	
	printf("%d, %d, %d, %d, %d \n", numeros[0], numeros[1], numeros[2],numeros[3],numeros[4]);
	printf("O menor numero eh: %d ", menor);
}
