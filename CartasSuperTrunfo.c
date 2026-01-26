#include <stdio.h>

int main() {
int População;
float Área;
float Pib;
int ponto_turisticos; 

printf("Digite o numero da população: \n");
scanf("%d",&População);

printf("Digite a Área: \n");
scanf("%f", &Área);

printf("Digite o Pib: \n");
scanf("%f",&Pib);

printf("Digite o Número de pontos turisticos: \n");
scanf("%d",&ponto_turisticos);

printf("População: %d - Área: %f\n", População, Área);
printf("Pib: %f - ponto_turisticos: %d\n", Pib, ponto_turisticos);

return 0;
} 
