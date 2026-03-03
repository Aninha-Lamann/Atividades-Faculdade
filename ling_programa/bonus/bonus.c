#include <stdio.h>
#include <stdlib.h>
int main () {
	float salario, salarioFinal;
	int pontuacao;
	printf("Escreva o seu salario: \n");
	scanf("%f", &salario);
	printf("Escreva sua pontuacao: \n");
	scanf("%f", &pontuacao);
	if(pontuacao >= 2000) {
		salarioFinal = salario + 1000;
		printf("Parabens, voce recebeu R$ 1.000 de bonus.\n");
	}
	else if(pontuacao >= 1000 && pontuacao <= 1999) {
		salarioFinal = salario + 500;
		printf("Parabens, voce recebeu R$ 500.00 de bonus.\n");
	}
	else if(pontuacao >= 500 && pontuacao <= 999) {
		salarioFinal = salario + 250;
		printf("Parabens, voce recebeu R$ 250.00 de bonus.\n");
	}
	else if(pontuacao >= 100 && pontuacao <=499) {
		salarioFinal = salario + 100;
		printf("Parabens, voce recebeu R$ 100.00 de bonus.\n");
	}
	printf("Seu salario final e: R$ %.2f\n", salarioFinal);
	return 0;


}