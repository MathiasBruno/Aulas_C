#ifndef CALCULADORA_H
#define CALCULADORA_H

float soma(float x, float y);
float subtracao(float x, float y);
float multiplicacao(float x, float y);
float divisao(float x, float y);

float soma(float x, float y){
	float soma;
	soma = x+y;
	return soma;
}

float subtracao(float x, float y){
	float sub;
	sub = x-y;
	return sub;
}

float multiplicacao(float x, float y){
	float mul;
	mul = x*y;
	return mul;
}

float divisao(float x, float y){
	float div;
	div = x/y;
	return div;
}

#endif

