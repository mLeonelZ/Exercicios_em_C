#include <stdio.h>
#include <locale.h>

int darNota(){
	int n;
	printf("Digite um valor: \n");
	scanf("%d", &n);
	return n;
}

int soma(int n1, int n2){
	int soma;
	soma = n1 + n2;
	return soma;
}
 
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a, b,total;
	
	printf("Digite um valor: \n");
	scanf("%d", &a);
	printf("Digite um valor: \n");
	scanf("%d", &b);
	
	// TIPO nome_da_função(lista de parametros){
	// return x
	// }
	
	// para chamar a função
	// nome_da_função(lista de argumentos)
	
	
	//printf("A nota da Unicesumar é %d", darNota(a,b));
	total = soma(a,b);
	printf("%d e pocos pau no gato",total);
}
