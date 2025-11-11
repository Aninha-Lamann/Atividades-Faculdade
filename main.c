//Código feito com auxilio do professor no dia 16/09
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int magic = 0;
    int guess;
    int opcao;
    int sorteado = 0;
    
    srand(time(NULL));

    do {
        printf("\n***** JOGO DE ADIVINHACAO *****\n\n");
        printf("1 - Sortear um novo numero\n");
        printf("2 - Digitar adivinhacao\n");
        printf("3 - Mostrar o segredo\n");
        printf("4 - Sair\n\n");
        printf("As opcoes validas sao 1, 2, 3 ou 4.\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                magic = rand() % 100; 
                sorteado = 1;
                printf("Numero sorteado com sucesso!\n");
                break;
            case 2:
                if (sorteado == 0) {
                    printf("Primeiro sorteie um numero!\n");
                } else {
                    printf("Digite seu palpite: ");
                    scanf("%d", &guess);
                    if (guess == magic)
                        printf("Parabens! Voce acertou!\n");
                    else if (guess < magic)
                        printf("Muito baixo! Tente novamente.\n");
                    else
                        printf("Muito alto! Tente novamente.\n");
                }
                break;
            case 3:
                if (sorteado)
                    printf("O numero secreto e: %d\n", magic);
                else
                    printf("Nenhum numero foi sorteado ainda!\n");
                break;
            case 4:
                printf("Saindo do jogo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 4);
    return 0;
}

