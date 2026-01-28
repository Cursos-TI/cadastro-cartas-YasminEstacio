#include <stdio.h>

int main() {
    char estado[50];
    char cidade[50];
    char codigo[10];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    float densidade;
    float pib_per_capita;

    printf("Estado: ");
    scanf("%s", estado);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("Codigo da carta: ");
    scanf("%s", codigo);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (km²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    // Calculos
    densidade = populacao / area;
    pib_per_capita = pib / populacao;

    printf("\n--- CARTA SUPER TRUNFO ---\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f\n", pib_per_capita);

    return 0;
}
