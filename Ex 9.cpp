#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int num = 0;
	
	printf("Digite um numero: \n");
	scanf("%i", &num);
	
	if(num > 100){
	num = (num + 150);
	printf("Numero = %i \n\n",num);
	}
	else {
	printf("Numero = %i \n\n",num);
	}
	system("pause");
	}
