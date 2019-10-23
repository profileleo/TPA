#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int area = 0, base = 0, altura = 0;
	
	printf("Digite o valor da base: \n");
	scanf("%i", &base);
	
	printf("Digite o valor da altura: \n");
	scanf("%i", &altura);
	
	area = base * altura;
	printf("A area desse retangulo será: %i \n\n", area);
	system("pause");
}
