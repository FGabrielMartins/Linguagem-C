#include <stdio.h>
int main(){
	printf ("Ola, tudo bem?\n");

	printf("Valor inteiro: %d\n", 10);             //especificador %d para números interios em base decimal
	printf("Valor real: %f\n", 3.14159265);        //especificador %f para números reais (pontos flutuantes)
	printf("Valor real: %.2f\n", 3.14159265);      //especificador %.<num> para números reais com casas decimais 
	printf("Dados de texto caracter: %c\n", 'a');  //especificador %c para uma unica caracter 'a'
	printf("Dados de texto: %s\n", "Gabriel");     //especificador %s para texto "texto"
}