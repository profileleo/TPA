/* Leonardo Augusto 
Ex : Verificar se um n�mero e maior que 5 e menor que 20, se for, mostrar seu cubo
*/



#include  <iostream>
#include  <locale>

int  main(){
	setlocale (LC_ALL, "");
    int num, cubo;  	
	printf ( "Digite um numero: ");
	scanf ("%i", & num);
	
	if (num > 5  & num < 20) {
	cubo = num * num * num;
	printf ("O cubo do numero �: %i\n\n", cubo);
}

    else {
	printf (" N�o � possivel calcular o cubo\n\n");
}
	system ("pause");
}



////
