#include <stdio.h>

int main() {
char Estado[50];
char Cidade[50];
char Codigo[50];
int População;
float Área;
float Pib;
int ponto_turisticos; 

printf("Estado: \n");
scanf("%s",&Estado);

printf("Cidade: \n");
scanf("%s",&Cidade);

printf("Codigo: \n");
scanf("%s",&Codigo);

printf("População: \n");
scanf("%d",&População);

printf("Digite a Área: \n");
scanf("%f",&Área);

printf("Digite o Pib: \n");
scanf("%f",&Pib);

printf("Digite o Número de pontos turisticos: \n");
scanf("%d",&ponto_turisticos);

printf("Estado: %s\n", Estado);
printf("Cidade: %s\n", Cidade);
printf("Codigo: %s\n", Codigo);
printf("População: %d - Área: %f\n", População, Área);
printf("Pib: %f - ponto_turisticos: %d\n", Pib, ponto_turisticos);

return 0;
} 
