#include <stdio.h>	
#include <locale.h>

int main(){

setlocale(LC_ALL,"Portuguese");

int idade;

printf("digite sua idade: \n");
scanf("%d", &idade);

if(idade>=18){
	printf ("de maior, pode dirigir");
}
else{
	printf("de menor");
}
}
