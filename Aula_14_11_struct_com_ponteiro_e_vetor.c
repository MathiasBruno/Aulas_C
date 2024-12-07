#include <stdio.h>
#define TAM 3

struct aluno{
	float ve[3];
};

void media(struct aluno v[TAM]);

int main(){
	struct aluno vet[TAM];
	int i;
	
	media(vet);
	for(i=0;i<TAM;i++){
		printf("\nNota 1: %.1f \nNota 2: %.1f \nMedia: %.1f\n", vet[i].ve[0], vet[i].ve[1], vet[i].ve[2]);
	}
	return 0;
}

void media(struct aluno v[TAM]){
	int i;
	
	for(i=0;i<TAM;i++){
		printf("\nDigite as notas: ");
		scanf("%f%f", &v[i].ve[0], &v[i].ve[1]);
		v[i].ve[2] = (v[i].ve[0] + v[i].ve[1])/2;
	}
	
}
