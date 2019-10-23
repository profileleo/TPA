#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	int  num = 0;

	printf("Digite o numero: \n");
	scanf("%i", &num);
    
    if(num > 0){
	printf("O numero e positivo \n");
	}
    else if(num < 0);{
	printf("O numero e negativo \n");
	}

	
system("pause");
}


