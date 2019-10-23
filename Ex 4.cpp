#include <stdio.h>
#include  <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int a = 0, b = 0, c = 0, soma = 0, quad = 0;
	
	printf("Digite o primeiro valor: \n");
	scanf("%i", &a);
	printf("Digite o segundo valor: \n");
	scanf("%i", &b);
	printf("Digite o terceiro valor: \n");
	scanf("%i", &c);

    soma = a + b + c;
    quad = soma * soma;
    
    printf("O valor do quadrados dos valores e: %i \n\n", quad);
    
system("pause");
}


