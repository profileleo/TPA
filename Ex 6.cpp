#include <stdio.h>
#include  <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int pres = 0, valor = 0, temp = 0, taxa = 0;
	
	printf("Digite a prestacao: \n");
	scanf("%i", &pres);
	printf("Digite a taxa: \n");
	scanf("%i", &taxa);
	printf("Digite os dias em atraso: \n");
	scanf("%i", &temp);
	
	pres = valor*(valor*(taxa/100)*temp);
	
	printf("O valor da prestacao sera: %i \n\n", pres);
    
system("pause");
}
