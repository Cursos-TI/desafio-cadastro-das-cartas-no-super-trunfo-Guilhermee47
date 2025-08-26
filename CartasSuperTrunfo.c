#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "Santa Catarina";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio Grande do Sul";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    // Carta 3
    char estado = 'C';
    char codigo3[4] = "C03";
    char nomeCidade3[50] = "Bahia";
    int populacao3 = 23147513;
    float area3 = 1842.53;
    float pib3 = 204.21;
    int pontosTuristico3 = 14;

    // Exibição da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Nome do Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Nome do Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Exibição da Carta 3
    printf("\n=== Carta 3 ===\n");
    printf("Nome do Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade3);
    printf("Populacao: %d\n", populacao3);
    printf("Area: %.2f km²\n", area3);
    printf("PIB: %.2f bilhoes de reais\n", pib3);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristico3);

    return 0;
}
