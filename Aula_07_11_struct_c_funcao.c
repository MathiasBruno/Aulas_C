#include <stdio.h>

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

int main(){
	struct data data1;
	//data data1;  --> Forma de declarar usando o typedef(só omitir 'struct')
	printf("Informe a data: ");
	scanf("%d %s %d", &data1.dia,&data1.mes,&data1.ano);
	imprimir(data1);
	return 0;
}

void imprimir(struct data d1){
	printf("\nData: %d de %s de %d", d1.dia,d1.mes,d1.ano);
}
