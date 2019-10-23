/* Leonardo Augusto 
Ex : Faz o calculo do maior numero digitado
*/


#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n1 = 0, n2 = 0;
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	if(n1 > n2){
		
		printf("O maior número é %f \n\n", n1);
	}else if(n2 > n1){
		
		printf("O maior número é %f \n\n", n2);
	}else{
		
		printf("Os números são iguais \n\n");
	}
	
	system("pause");
}
