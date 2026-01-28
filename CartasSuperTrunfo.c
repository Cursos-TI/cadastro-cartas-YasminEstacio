#include <stdio.h>

struct Carta {
    char estado[50];
    char cidade[50];
    char codigo[4];   // A01, A02
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
};

int main() {
    struct Carta cartas[2] = {
        {"", "", "A01", 0, 0, 0, 0, 0, 0},
        {"", "", "A02", 0, 0, 0, 0, 0, 0}
    };

    for (int i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Carta %s ---\n", cartas[i].codigo);

        printf("Estado: ");
        scanf("%s", cartas[i].estado);

        printf("Cidade: ");
        scanf("%s", cartas[i].cidade);

        printf("Populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Area (km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Pontos turisticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        // Cálculos
        if (cartas[i].area > 0)
            cartas[i].densidade = cartas[i].populacao / cartas[i].area;

        if (cartas[i].populacao > 0)
            cartas[i].pib_per_capita = cartas[i].pib / cartas[i].populacao;
    }

    // Exibição das cartas
    for (int i = 0; i < 2; i++) {
        printf("\n===== CARTA %s =====\n", cartas[i].codigo);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Cidade: %s\n", cartas[i].cidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontos_turisticos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidade);
        printf("PIB per capita: %.2f\n", cartas[i].pib_per_capita);
    }

    return 0;
}

