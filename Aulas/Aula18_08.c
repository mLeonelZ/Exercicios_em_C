#include <stdio.h>
#include <locale.h>
int main(){

/*int	numero, num2;

num2 = 0;

printf("Digite qual tabuada voce deseja: \n");
scanf("%d", &numero);
printf("%d x 1 = %d \n", numero,numero*1);
printf("%d x 2 = %d \n", numero,numero*2);
printf("%d x 3 = %d \n", numero,numero*3);
printf("%d x 4 = %d \n", numero,numero*4);
printf("%d x 5 = %d \n", numero,numero*5);
printf("%d x 6 = %d \n", numero,numero*6);
printf("%d x 7 = %d \n", numero,numero*7);
printf("%d x 8 = %d \n", numero,numero*8);
printf("%d x 9 = %d \n", numero,numero*9);
printf("%d x 10 = %d \n", numero,numero*10);
*/
setlocale(LC_ALL,"Portuguese");
int passado, presente, anp, anpr;
float resultado;
printf("Digite um ano passado: \n ");
scanf("%d", &anp);
printf("Digite a população de %d: \n", anp);
scanf("%d", &passado);
printf("Digite o ano atual: \n");
scanf("%d", &anpr);
printf("Digite a população do ano de %d: \n", anpr);
scanf("%d", &presente);
resultado=presente-passado;
resultado=resultado/passado;
resultado=resultado*100;
printf("A população mudou em: %.2f %%",resultado);
}
