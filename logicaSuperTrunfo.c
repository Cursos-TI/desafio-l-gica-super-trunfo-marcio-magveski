
#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis para armazenar as propriedades de duas cidades
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado: ");
    fgets(estado1, sizeof(estado1), stdin);

    printf("Digite o código da carta: ");
    fgets(codigo1, sizeof(codigo1), stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Limpar o buffer de entrada antes de usar fgets novamente
    getchar();

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Digite o código da carta: ");
    fgets(codigo2, sizeof(codigo2), stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

  
    // Exibe os dados cadastrados para a Carta 1
    printf("\nDados cadastrados da Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibe os dados cadastrados para a Carta 2
    printf("\nDados cadastrados da Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);


        // Comparação das populações das duas cidades
    if (populacao1 > populacao2) {
        printf("\nA cidade com maior população é: %s com %d habitantes.\n", nome_cidade1, populacao1);
    } else if (populacao2 > populacao1) {
        printf("\nA cidade com maior população é: %s com %d habitantes.\n", nome_cidade2, populacao2);
    } else {
        printf("\nAs duas cidades têm a mesma população: %d habitantes.\n", populacao1);
    }





    return 0;
}
