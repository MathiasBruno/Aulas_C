#include <stdio.h>
#define TAM 3

struct data{
	int dia,ano;
	char mes[15];
};

/*typedef struct {  
	int dia,ano;
	char mes[15];
}data;*/
//uma forma ou outra, não as duas

void imprimir(struct data d1);
int pesquisa(struct data data1[]);

int main(){
	struct data data1[TAM];
	//data data1[3];  --> Forma de declarar usando o typedef
	int i=0,quant=0;
	
	for(i=0;i<TAM;i++){
		printf("Informe a data da posicao %d: ", i);
		scanf("%d %s %d", &data1[i].dia,&data1[i].mes,&data1[i].ano);
	}
	
	for(i=0;i<TAM;i++){
		imprimir(data1[i]);
	}
	
	quant = pesquisa(data1);
	printf("\nQuantidade: %d", quant);
	
	return 0;
}

void imprimir(struct data d1){
	printf("\nData: %d de %s de %d", d1.dia,d1.mes,d1.ano);
}

int pesquisa(struct data data1[]){
	int ano1,i=0,cont=0;
	
	printf("\nDigite o ano: ");
	scanf("%d", &ano1);
	
	for(i=0;i<TAM;i++){
		if(data1[i].ano == ano1){
			cont++;
		}
	}
	return cont;
}
