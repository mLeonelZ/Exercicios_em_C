#include<stdio.h>
#include<locale.h>



int main(){
	setlocale(LC_ALL,"Portuguese"); // colocar para que acentos sejam poss�veis de colocar
	printf("Salve salve, galera � \n"); // para criar uma quebra de linha precias inserir (/n) 
	printf("OAOOA");
	
	/*
	Constantes  de barra invertida \\
	
	\t = para criar um Tab
	\\ = para colocar uma barra simples
	
	
	
	PRINTF() FORMATOS
	
	%c = Caractere *Lembrar de usar ('') para apenas um caractere
	%d = Inteiro
	%f = Reais, ponto flutuante
	%s = String
	*/
	
	
	// FORMATOS //
	
	printf("\nOi! Meu nome � %s, tenho %d anos e %.2f de altura", "Matheus", 29, 1.72); // colocar %.2 para definir quantas casas ter�o ap�s a v�rgula
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

