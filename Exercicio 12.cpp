/* Leonardo Augusto 
Ex : Faz o calculo do maior numero digitado
*/


#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n1 = 0, n2 = 0;
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	if(n1 > n2){
		
		printf("O maior n�mero � %f \n\n", n1);
	}else if(n2 > n1){
		
		printf("O maior n�mero � %f \n\n", n2);
	}else{
		
		printf("Os n�meros s�o iguais \n\n");
	}
	
	system("pause");
}
