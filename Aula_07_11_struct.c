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

int main(){
	struct data data1;
	//data data1;  --> Forma de declarar usando o typedef
	printf("Informe a data: ");
	scanf("%d %s %d", &data1.dia,&data1.mes,&data1.ano);
	printf("\nData: %d de %s de %d", data1.dia,data1.mes,data1.ano);
	return 0;
}
