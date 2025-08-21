
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// TIAGO FELIPE GUEDES


int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("\n--- Inserir dados da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigoCarta1);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao1); // Use %lu para unsigned long int
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\n--- Inserir dados da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigoCarta2);
    getchar();
    printf("Nome da Cidade: ");
    fgets(nomeCidade2, 50, stdin);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // para converter o PIB de bilhões de reais
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    // A soma de todos os atributos numéricos, com o inverso da densidade E O CAST PARA FLOAT
    float superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %lu\n", populacao1); 
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %lu\n", populacao2); 
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação e Exibição dos Resultados
    printf("\n--- Comparação de Cartas ---\n");

    // População (maior vence)
    printf("População: Carta %s venceu (%d)\n", (populacao1 > populacao2) ? "1" : "2", (populacao1 > populacao2));

    // Área (maior vence)
    printf("Área: Carta %s venceu (%d)\n", (area1 > area2) ? "1" : "2", (area1 > area2));

    // PIB (maior vence)
    printf("PIB: Carta %s venceu (%d)\n", (pib1 > pib2) ? "1" : "2", (pib1 > pib2));

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "1" : "2", (pontosTuristicos1 > pontosTuristicos2));

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %s venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? "1" : "2", (densidadePopulacional1 < densidadePopulacional2));

    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? "1" : "2", (pibPerCapita1 > pibPerCapita2));

    // Super Poder (maior vence)
    printf("Super Poder: Carta %s venceu (%d)\n", (superPoder1 > superPoder2) ? "1" : "2", (superPoder1 > superPoder2));

    return 0;
}