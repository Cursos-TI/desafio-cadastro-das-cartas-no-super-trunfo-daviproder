#include <stdio.h>

int main() {

    // Carta 1
char estado1 = 'R';
char codigo1[4] = "R01" ; 
int populacao1 = 900;
float area1 = 250.0;
float pib1 = 51.2;
int pontos1 = 4;
    
// Carta 2
char estado2 = 'B';
char codigo2[4] = "B02";
int populacao2 = 750;
float area2 = 180.0;
float pib2 =  32.1;
int pontos2 = 2;
    

printf("Insira os dados da Carta 1:\n");
printf("Estado (uma letra de A a H): ");
scanf(" %c", &estado1);
printf("Código da Carta (ex: A01): ");
scanf("%s", codigo1);
printf("População: ");
scanf("%d", &populacao1);
printf("Área (em km²): ");
scanf("%f", &area1);
printf("PIB (em bilhões): ");
scanf("%f", &pib1); 
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos1);
    

printf("\nInsira os dados da Carta 2:\n");
printf("Estado (uma letra de A a H): ");
scanf(" %c", &estado2);
printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);
printf("População: ");
scanf("%d", &populacao2);
printf("Área (em km²): ");
scanf("%f", &area2);
printf("PIB (em bilhões): ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos2);
    

printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);
    

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);
    
return 0;
}