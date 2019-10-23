/* 
Leonardo Augustin
Ex : Classificar um nadador de acordo com sua idade
*/


#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int cod = 0;

	printf("Digite sua idade: ");
	scanf("%i", &cod);
	
	if(cod > 5 and  cod <= 12){
			printf("Classe infantil \n");
	}
	else if(cod > 12 and cod < 17){
			printf("Classe juvenil \n");
	}
	else if(cod > 18 and cod <= 99){
			printf("Classe adulto \n");
	}
	else if (cod >= 100){
		printf("Ta morto já \n\n\n\n\n");
	}

system("pause");
}
