/* 
Leonardo Augustin
Ex : Calcula o maior número de tres numeros digitados
*/




#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n1 = 0, n2 = 0, n3 = 0;
	printf("Digite o primeiro número: ");
	
	scanf("%f", &n1);
	printf("Digite o segundo número: ");
	
	scanf("%f", &n2);
	printf("Digite o terceiro número: ");
	
	scanf("%f", &n3);
	if(n1 >= n2 and n1 >= n3){
		
		printf("O maior número é %f. \n", n1);
		
	}else if(n2 >= n1 and n2 >= n3){
		printf("O maior número é %f. \n", n2);
		
	}else{
		printf("O maior número é %f. \n", n3);
		
	}
	system("pause");
}
