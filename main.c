#include <stdio.h>
 
// Função para ler um número inteiro positivo
int lerNumeroPositivo(const char* mensagem) {
    int numero;
    do {
        printf("%s", mensagem);
        scanf("%d", &numero);
        if (numero < 0) {
            printf("Por favor, insira um número positivo.\n");
        }
    } while (numero < 0);
    return numero;
}
 
int main() {
    int total, masc, fem;
    int falecidas, falecidas_masc, falecidas_fem;
    float perc_falecidas;
 
    // Ler o número total de crianças nascidas
    total = lerNumeroPositivo("Digite o numero total de criancas nascidas em 2019: ");
 
    // Ler o número de crianças do sexo masculino
    masc = lerNumeroPositivo("Digite o numero de criancas do sexo masculino: ");
   
    // Calcular o número de crianças do sexo feminino
    fem = total - masc;
    printf("Numero de criancas do sexo feminino: %d\n", fem);
 
    // Ler o número de crianças falecidas até 12 meses
    falecidas = lerNumeroPositivo("Digite o numero de criancas falecidas ate 12 meses: ");
 
    // Validação da quantidade de falecidos masculinos
    do {
        falecidas_masc = lerNumeroPositivo("Digite o numero de criancas falecidas do sexo masculino: ");
        if (falecidas_masc > falecidas || falecidas_masc > masc) {
            printf("Valor invalido! Deve ser menor ou igual ao numero de falecidas e ao total de meninos.\n");
        }
    } while (falecidas_masc > falecidas || falecidas_masc > masc);
 
    // Calcular o número de falecidas do sexo feminino
    falecidas_fem = falecidas - falecidas_masc;
 
    // Calcular o percentual de crianças falecidas
    perc_falecidas = ((float) falecidas / total) * 100.0;
 
    // Exibir os resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Percentual de criancas falecidas ate 12 meses: %.2f%%\n", perc_falecidas);
    printf("Quantidade de meninas falecidas ate 12 meses: %d\n", falecidas_fem);
 
    return 0;
}
 