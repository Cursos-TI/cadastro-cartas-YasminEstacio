#include <stdio.h>

int main() {
    // ==========================
    // Carta 1 (A01)
    // ==========================
    char estado1[50] = "SP";
    char cidade1[50] = "Sao Paulo";
    char codigo1[4] = "A01";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 700000.0;
    int pontos_turisticos1 = 15;
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // ==========================
    // Carta 2 (A02)
    // ==========================
    char estado2[50] = "RJ";
    char cidade2[50] = "Rio de Janeiro";
    char codigo2[4] = "A02";
    unsigned long int populacao2 = 6000000;
    float area2 = 1182.0;
    float pib2 = 400000.0;
    int pontos_turisticos2 = 20;
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    // ==========================
    // Menu do primeiro atributo
    // ==========================
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per capita\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ==========================
    // Menu do segundo atributo (dinamico)
    // ==========================
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for(int i=1;i<=6;i++){
        if(i != atributo1){
            switch(i){
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
                case 6: printf("6 - PIB per capita\n"); break;
            }
        }
    }
    printf("Opcao: ");
    scanf("%d", &atributo2);

    // ==========================
    // Obter valores para o primeiro atributo
    // ==========================
    switch(atributo1){
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
        case 6: valor1_carta1 = pib_per_capita1; valor1_carta2 = pib_per_capita2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // ==========================
    // Obter valores para o segundo atributo
    // ==========================
    switch(atributo2){
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
        case 6: valor2_carta1 = pib_per_capita1; valor2_carta2 = pib_per_capita2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // ==========================
    // Calcular soma dos atributos
    // ==========================
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;

    // ==========================
    // Exibir valores
    // ==========================
    printf("\nComparacao de cartas:\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Carta 2 - %s (%s)\n", cidade2, estado2);

    printf("\nValores do primeiro atributo: %.2f x %.2f\n", valor1_carta1, valor1_carta2);
    printf("Valores do segundo atributo: %.2f x %.2f\n", valor2_carta1, valor2_carta2);

    printf("\nSoma dos atributos: %.2f x %.2f\n", soma_carta1, soma_carta2);

    // ==========================
    // Determinar vencedor
    // ==========================
    printf("\nResultado: ");
    soma_carta1 > soma_carta2 ? printf("Carta 1 (%s) venceu!\n", cidade1) :
    soma_carta1 < soma_carta2 ? printf("Carta 2 (%s) venceu!\n", cidade2) :
    printf("Empate!\n");

    return 0;
}
