/* 
Leonardo Augustin
Ex : Calcula o maior n�mero de tres numeros digitados
*/




#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	float n1 = 0, n2 = 0, n3 = 0;
	printf("Digite o primeiro n�mero: ");
	
	scanf("%f", &n1);
	printf("Digite o segundo n�mero: ");
	
	scanf("%f", &n2);
	printf("Digite o terceiro n�mero: ");
	
	scanf("%f", &n3);
	if(n1 >= n2 and n1 >= n3){
		
		printf("O maior n�mero � %f. \n", n1);
		
	}else if(n2 >= n1 and n2 >= n3){
		printf("O maior n�mero � %f. \n", n2);
		
	}else{
		printf("O maior n�mero � %f. \n", n3);
		
	}
	system("pause");
}
