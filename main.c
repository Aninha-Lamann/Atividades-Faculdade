#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int magic = 0;
	int guess;
	int opcao = 0;  // inicializa opcao
	int contador = 0;

	srand(time(NULL));  // inicializa gerador de nC:meros aleatC3rios

	while (opcao != 4) {
		printf("\n***** JOGO DE ADIVINHACAO****\n\n");
		printf("1 - Sortear um novo numero\n\n");
		printf("2 - Digitar adivinhacao\n\n");
		printf("3 - Mostrar o segredo\n\n");
		printf("4 - sair\n\n");
		printf("As opcoes validas sao 1 ou 2 ou 3 ou 4\n");
		printf("Digite sua opcao: ");
		scanf("%d",&opcao);
		switch (opcao) {
		case 1:
			magic = rand() % 100 + 1;  // nC:mero entre 1 e 100
			printf("Foi sorteado um novo numero.\n");
			break;
		case 2:
			printf("Digite sua adivinhacao: ");
			scanf("%d",&guess);
			if(guess == magic) {
				printf("* * * PARABENS, ACERTOU! * * *\n");
			} else {
				printf("ERROU, vou contar mais um erro!\n");
				contador = contador +1;
			}
			break;
		case 3:
			printf("O segredo e: %d\n",magic);
			break;
		case 4:
			printf("Vou encerrar o programa\n");
			printf("Voce errou %d vezes.\n",contador);
			break;
		default:
			printf("As opcoes validas sao 1 ou 2 ou 3 ou 4\n");
		}
	}
	return 0;
}