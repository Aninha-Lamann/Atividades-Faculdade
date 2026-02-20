#include<stdio.h>
int main () {
	float nota1, nota2, freq, media;
	printf("Entre com a nota 1:");
	scanf("%f", &nota1);
	printf("Entre com a nota 2:");
	scanf("%f", &nota2);
	printf("Entre com a frequencia: ");
	scanf("%f", &freq);
	media = (nota1+nota2)/2;
	printf("Sua media: %.2f\n", media);
	printf("Sua frequencia: %.2f %%\n", freq);
	if(media >= 6 && freq >= 75){
	    printf("Parabens, APROVADO!!!");
	}
	else if(media >= 2 && media < 6 && freq >= 75) {
        printf("Aluno de RECUPERACAO\n");
	}
	else{
	    printf("Sinto muito, REPROVADO");
	}
	return 0;
}