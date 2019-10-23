/*Ex : Ler a media de um aluno e checar se foi aprovado
Leonardo Augusto 

*/

#include <stdio.h>
#include  <windows.h>
#include <locale.h>

int main(){
	
	float media = 0;
	char nome(50);
	setlocale(LC_ALL,"");

	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	
	
	printf("Digite a media do aluno:" );
	scanf("%f", &media);
	
	
	if(media > 7){
		printf("O aluno %s foi aprovado \n\n", &nome);
	}
	
    else if(media < 7){
	printf("O aluno %s foi reprovado \n\n", &nome);
}


system("pause");
}
