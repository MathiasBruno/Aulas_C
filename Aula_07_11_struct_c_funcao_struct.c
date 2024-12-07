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


struct data ler(){
	struct data d1;
	printf("Digite uma data: ");
	scanf("%d%s%d", &d1.dia,&d1.mes,&d1.ano);
	return d1;
}

int main(){
	struct data data1;
	data1 = ler();
	printf("\n%d %s %d", data1.dia,data1.mes,data1.ano);
}
