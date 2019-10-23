#include <stdio.h>
#include  <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int lado = 0, base = 0, area = 0, valorarea = 0, preco = 0;
	
	printf("Digite o lado: \n");
	scanf("%i", &lado);
	printf("Digite a base: \n");
	scanf("%i", &base);
	
	area = base * lado;
	
	printf("Digite o preco do metro quadrado: \n");
	scanf("%i", &preco);

    valorarea = area * preco;
    
    printf("O valor da area e: %i \n\n", valorarea);
    
system("pause");
}
