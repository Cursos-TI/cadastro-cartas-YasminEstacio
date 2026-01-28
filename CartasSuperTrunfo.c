#include <stdio.h>

int main() {
    // ==========================
    // Variáveis da Carta 1 (A01)
    // ==========================
    char estado1[50], cidade1[50], codigo1[4] = "A01";
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;

    // ==========================
    // Variáveis da Carta 2 (A02)
    // ==========================
    char estado2[50], cidade2[50], codigo2[4] = "A02";
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;

    // ==========================
    // Entrada de Dados Carta 1
    // ==========================
    printf("\n--- Cadastro da Carta A01 ---\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // ==========================
    // Entrada de Dados Carta 2
    // ==========================
    printf("\n--- Cadastro da Carta A02 ---\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // ==========================
    // Cálculos
    // ==========================
    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    pib_per_capita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    pib_per_capita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade)
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (densidade1 > 0 ? 1/densidade1 : 0);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (densidade2 > 0 ? 1/densidade2 : 0);

    // ==========================
    // Comparações de Atributos
    // ==========================
    int cmp_populacao   = (populacao1 > populacao2) ? 1 : 0;
    int cmp_area        = (area1 > area2) ? 1 : 0;
    int cmp_pib         = (pib1 > pib2) ? 1 : 0;
    int cmp_pontos      = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    int cmp_densidade   = (densidade1 < densidade2) ? 1 : 0; // menor densidade vence
    int cmp_pib_pc      = (pib_per_capita1 > pib_per_capita2) ? 1 : 0;
    int cmp_super       = (super_poder1 > super_poder2) ? 1 : 0;

    // ==========================
    // Exibição dos Resultados
    // ==========================
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", cmp_populacao);
    printf("Area: Carta 1 venceu (%d)\n", cmp_area);
    printf("PIB: Carta 1 venceu (%d)\n", cmp_pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", cmp_pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", cmp_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", cmp_pib_pc);
    printf("Super Poder: Carta 1 venceu (%d)\n", cmp_super);

    return 0;
}


