#include <stdio.h>

struct aluno{
	float nota1,nota2,media;
};

void media(struct aluno *aluno1);

int main(){
	struct aluno a1;
	
	media(&a1);
	printf("\nNota 1: %.1f \nNota 2: %.1f \nMedia: %.1f", a1.nota1, a1.nota2, a1.media);
	
	return 0;
}

void media(struct aluno *aluno1){
	printf("Digite duas notas: ");
	scanf("%f%f", &(*aluno1).nota1, &(*aluno1).nota2); //aluno->nota1 ou (*aluno1
	(*aluno1).media = ((*aluno1).nota1 + (*aluno1).nota2)/2;
	
}
