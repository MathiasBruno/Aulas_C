#include <stdio.h>
#include <string.h>
#define QT 3

struct data{
	int dia,mes,ano;
};

struct disciplina{
	char nome[30];
	struct data datai, datat;
};

struct data consulta(char nM[30], struct disciplina vet[]);

int main(){
	struct disciplina dis[QT];
	struct data di;
	char nomeN[30];
	int x;
	
	for(x=0;x<QT;x++){
		printf("Digite o nome: ");
		scanf(" %[^\n]s", &dis[x].nome);
		printf("Data de inicio: ");
		scanf("%i%i%i", &dis[x].datai.dia, &dis[x].datai.mes, &dis[x].datai.ano);
		printf("Data de termino: ");
		scanf("%i%i%i", &dis[x].datat.dia, &dis[x].datat.mes, &dis[x].datat.ano);
	}
	
	for(x=0;x<QT;x++){
		printf("Nome: %s\n", dis[x].nome);
		printf("Inicio: %i/%i/%i\n", dis[x].datai.dia, dis[x].datai.mes, dis[x].datai.ano);
		printf("Termino: %i/%i/%i\n", dis[x].datat.dia, dis[x].datat.mes, dis[x].datat.ano);
	}
	
	printf("Digite um nome para consulta: ");
	scanf("%s", &nomeN);
	di = consulta(nomeN,dis);
	printf("%i/%i/%i", di.dia, di.mes, di.ano);
	
	return 0;
}

struct data consulta(char nN[30], struct disciplina vet[]){
	int x;
	for(x=0;x<QT;x++){
		if(!strcmp(nN,vet[x].nome)){
			return vet[x].datai;
		}
	}
}
