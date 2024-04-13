#include <stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("%d + %d é igual a %d \n", 2,2,(int)2+2);
	printf("%d * %d é igual a %d \n", 2,2,(int)2*2);
	printf(" a média aritmética de %d + %d + %d é igual a %.0f \n", 9,10,5, (float)((9+10+5)/3));
	printf("%d° celsius para fahrenheit é %.0f° \n",40,(float)(1.8*40)+32);
	printf("%c é igual a %.0f\n",'x',(float)(25+32)*10/2);
	printf("a area do triângulo é %.2f",(float)(7*5)/2);
}
