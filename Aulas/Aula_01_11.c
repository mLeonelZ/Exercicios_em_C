#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	
	char numbin[10];
	
	int i = 0, fim, expoente = 0, resultado = 0, auxiliar = 0;
	
	printf("digite um numero binario\n");
	fgets(numbin,10,stdin);
	
	for(i=0; i <=9; i++){
		if((numbin[i] == '\0') || (numbin[i] == '\n')){
			break;
		}
	}
	
	fim = i-1;
	
	// para converter um numero em binário
	
//		[0,0,1,1]
//logica[2^3,2^3,2^1,2^0] e vai somando

	for(i = fim; i >= 0; i--){
		auxiliar = numbin[i] - '0'; // converte um caractere em numero inteiro
		resultado += auxiliar * (auxiliar * pow(2,expoente));
		expoente++;

	}
	printf("resultado = %d", resultado);
	
}
