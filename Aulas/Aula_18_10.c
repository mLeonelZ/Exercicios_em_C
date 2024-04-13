#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// do...while
	// exexcuta pelo menos 1 vez
	//do{
		//código;
	//} while(condição);
	
	int n;
	
	/*do{
		printf("Digite um numero maior que 0: \n");
		scanf("%d", &n);
	} while(n <= 0);
		printf("Parabéns, seu macaco treinado");
	*/
	
	//             WHILE
	
	// while(condição){
	// //código
	// }
	
	n = -1;
	
	/* while (n <= 0){
		printf("Digite um numero maior que 0: \n");
		scanf("%d", &n);
	}
	printf("Parabéns, primata!");
	*/
	
	
	// for
	
	for (n = 0; n <= 10; n += 5) { 
		printf("%d \n", n);
		
	}
	
	int x, y;
	
	x = 10;
//	y = x++; // Y passa a ser igual a x "5", mas depois x é incrementado + 1 fica igual a "6"
	y = ++x + ++x + ++x;     // X se torna 6, Y se torna 6
	
	printf(" X = %d e Y = %d", x, y);
	
}
