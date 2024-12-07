/*Devem ser constru�das fun��es para as opera��es de adi��o, subtra��o, multiplica��o e divis�o de n�meros reais.
Cada fun��o de receber como par�metro dois n�meros reais e retornar o resultado do c�lculo da opera��o.
Utilize um arquivo .h para fazer a biblioteca de fun��es. Em um arquivo .c implemente um programa (aplica��o) para 
uma calculadora que utilizar� as fun��es desta Biblioteca. Este programa deve conter somente a fun��o main,
todas as outras fun��es dever�o estar implementadas no arquivo da biblioteca. Permita que o usu�rio realiza a 
quantidade de opera��es que ele desejar.*/

#include <stdio.h>
#include "calculadora.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float som=0.0, sub=0.0, mult=0.0, div=0.0, a,b;
	int op=0;
	
	printf("Escolha a operacao que deseja: \n1 - Soma \n2 - Subtracao \n3 - multiplicacao \n4 - Divisao \n0 - Encerrar");
	scanf("%d", &op);
	
	while(op!=0){
	switch(op){
		case 0:
		break;
		case 1:
			printf("\nInforme os valores que deseja somar: ");
			scanf("%f %f", &a, &b);
			som = soma(a,b);
			printf("\nResultado: %.1f", som);
		break;
		case 2:
			printf("\nInforme os valores que deseja subtrair: ");
			scanf("%f %f", &a, &b);
			sub = subtracao(a,b);
			printf("\nResultado: %.1f", sub);
		break;
		case 3:
			printf("\nInforme os valores que deseja multiplicar: ");
			scanf("%f %f", &a, &b);
			mult = multiplicacao(a,b);
			printf("\nResultado: %.1f", mult);
		break;
		case 4:
			printf("\nInforme os valores que deseja dividir: ");
			scanf("%f %f", &a, &b);
			div = divisao(a,b);
			printf("\nResultado: %.1f", div);
		break;
		default:
			printf("\nOpcao invalida!");
		break;
	}
	printf("\nEscolha a operacao que deseja: \n1 - Soma \n2 - Subtracao \n3 - multiplicacao \n4 - Divisao \n0 - Encerrar");
	scanf("%d", &op);
	}
		
	return 0;
}
