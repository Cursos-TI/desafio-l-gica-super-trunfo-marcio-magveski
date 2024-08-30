#include <stdio.h>
#include <string.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

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

    limpar_buffer();  // Limpar o buffer de entrada

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

    limpar_buffer();  // Limpar o buffer de entrada

    // Remover os caracteres de nova linha que o fgets() pode adicionar
    estado1[strcspn(estado1, "\n")] = 0;
    codigo1[strcspn(codigo1, "\n")] = 0;
    nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

    estado2[strcspn(estado2, "\n")] = 0;
    codigo2[strcspn(codigo2, "\n")] = 0;
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    int escolha;
    do {
        // Menu interativo
        printf("\nEscolha o atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Sair\n");
        printf("Digite sua escolha (1-5): ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // Comparação por população
                if (populacao1 > populacao2) {
                    printf("\nA cidade com maior população é: %s com %d habitantes.\n", nome_cidade1, populacao1);
                } else if (populacao2 > populacao1) {
                    printf("\nA cidade com maior população é: %s com %d habitantes.\n", nome_cidade2, populacao2);
                } else {
                    printf("\nAs duas cidades têm a mesma população: %d habitantes.\n", populacao1);
                }
                break;

            case 2:
                // Comparação por área
                if (area1 > area2) {
                    printf("\nA cidade com maior área é: %s com %.2f km².\n", nome_cidade1, area1);
                } else if (area2 > area1) {
                    printf("\nA cidade com maior área é: %s com %.2f km².\n", nome_cidade2, area2);
                } else {
                    printf("\nAs duas cidades têm a mesma área: %.2f km².\n", area1);
                }
                break;

            case 3:
                // Comparação por PIB
                if (pib1 > pib2) {
                    printf("\nA cidade com maior PIB é: %s com %.2f milhões.\n", nome_cidade1, pib1);
                } else if (pib2 > pib1) {
                    printf("\nA cidade com maior PIB é: %s com %.2f milhões.\n", nome_cidade2, pib2);
                } else {
                    printf("\nAs duas cidades têm o mesmo PIB: %.2f milhões.\n", pib1);
                }
                break;

            case 4:
                // Comparação por pontos turísticos
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("\nA cidade com mais pontos turísticos é: %s com %d pontos.\n", nome_cidade1, pontos_turisticos1);
                } else if (pontos_turisticos2 > pontos_turisticos1) {
                    printf("\nA cidade com mais pontos turísticos é: %s com %d pontos.\n", nome_cidade2, pontos_turisticos2);
                } else {
                    printf("\nAs duas cidades têm o mesmo número de pontos turísticos: %d.\n", pontos_turisticos1);
                }
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Escolha inválida. Tente novamente.\n");
                break;
        }

        // Limpar o buffer de entrada após a escolha
        limpar_buffer();

    } while (escolha != 5);

    return 0;
}
