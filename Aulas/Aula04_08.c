#include <stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("%d + %d � igual a %d \n", 2,2,(int)2+2);
	printf("%d * %d � igual a %d \n", 2,2,(int)2*2);
	printf(" a m�dia aritm�tica de %d + %d + %d � igual a %.0f \n", 9,10,5, (float)((9+10+5)/3));
	printf("%d� celsius para fahrenheit � %.0f� \n",40,(float)(1.8*40)+32);
	printf("%c � igual a %.0f\n",'x',(float)(25+32)*10/2);
	printf("a area do tri�ngulo � %.2f",(float)(7*5)/2);
}
