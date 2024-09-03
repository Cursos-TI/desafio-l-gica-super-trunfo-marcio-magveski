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

    int escolha1, escolha2;
    do {
        // Menu interativo para escolher dois atributos
        printf("\nEscolha o primeiro atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Sair\n");
        printf("Digite sua escolha (1-5): ");
        scanf("%d", &escolha1);

        if (escolha1 == 5) {
            printf("Saindo...\n");
            break;
        }

        printf("\nEscolha o segundo atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("Digite sua escolha (1-4): ");
        scanf("%d", &escolha2);

        if (escolha2 < 1 || escolha2 > 4) {
            printf("Escolha inválida para o segundo atributo. Tente novamente.\n");
            continue;
        }

        int resultado1 = 0, resultado2 = 0;

        // Comparação do primeiro atributo
        switch (escolha1) {
            case 1:
                resultado1 = (populacao1 > populacao2) - (populacao1 < populacao2);
                break;
            case 2:
                resultado1 = (area1 > area2) - (area1 < area2);
                break;
            case 3:
                resultado1 = (pib1 > pib2) - (pib1 < pib2);
                break;
            case 4:
                resultado1 = (pontos_turisticos1 > pontos_turisticos2) - (pontos_turisticos1 < pontos_turisticos2);
                break;
        }

        // Comparação do segundo atributo
        switch (escolha2) {
            case 1:
                resultado2 = (populacao1 > populacao2) - (populacao1 < populacao2);
                break;
            case 2:
                resultado2 = (area1 > area2) - (area1 < area2);
                break;
            case 3:
                resultado2 = (pib1 > pib2) - (pib1 < pib2);
                break;
            case 4:
                resultado2 = (pontos_turisticos1 > pontos_turisticos2) - (pontos_turisticos1 < pontos_turisticos2);
                break;
        }

        // Lógica de decisão complexa com base nos resultados dos dois atributos
        if (resultado1 > 0 && resultado2 > 0) {
            printf("\nA cidade vencedora é: %s\n", nome_cidade1);
        } else if (resultado1 < 0 && resultado2 < 0) {
            printf("\nA cidade vencedora é: %s\n", nome_cidade2);
        } else if (resultado1 == 0 && resultado2 == 0) {
            printf("\nAs duas cidades empataram.\n");
        } else if (resultado1 > 0 || resultado2 > 0) {
            printf("\nA cidade com vantagem é: %s\n", nome_cidade1);
        } else {
            printf("\nA cidade com vantagem é: %s\n", nome_cidade2);
        }

        // Limpar o buffer de entrada após a escolha
        limpar_buffer();

    } while (escolha1 != 5);

    return 0;
}
