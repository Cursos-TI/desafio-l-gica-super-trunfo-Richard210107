#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países - Nível Aventureiro

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1[3];
    char codigoCarta1[20];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Carta 2
    char estado2[3];
    char codigoCarta2[20];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Cadastro das Cartas:
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (sigla): ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (sigla): ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Primeira comparação (população)
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("A cidade vencedora é: %s\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("A cidade vencedora é: %s\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cidades possuem a mesma população.\n");
    }

    // Desafio Aventureiro - Menu Interativo
    int opcao;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha o atributo para comparar (1-5): ");
    scanf("%d", &opcao);

    printf("\n=== Comparando %s vs %s ===\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1:
            printf("População:\n%s: %d habitantes\n%s: %d habitantes\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área:\n%s: %.2f km²\n%s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB:\n%s: %.2f milhões\n%s: %.2f milhões\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos turísticos:\n%s: %d pontos\n%s: %d pontos\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedora: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedora: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1, nomeCidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Vencedora: %s (menor densidade)\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Vencedora: %s (menor densidade)\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Por favor, escolha uma opção de 1 a 5.\n");
            break;
    }

    return 0;
}

