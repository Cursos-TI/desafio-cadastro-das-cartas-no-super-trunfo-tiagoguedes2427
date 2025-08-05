
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Teste TIAGO GUEDES


int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigoCarta1[5]; // Ex: A01 (4 caracteres + 1 para o terminador null '\0')
    char nomeCidade1[50]; // Nome da cidade (tamanho arbitrário, pode ser ajustado)
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("\n--- Inserir dados da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é importante para consumir qualquer caractere de nova linha pendente

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1); // %s lê uma string até encontrar um espaço em branco
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin); // Lê a linha inteira, incluindo espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Exibição dos dados da primeira carta
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f formata o float com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\n--- Inserir dados da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta2);
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf anterior

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da segunda carta
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

