#include <stdio.h>

int main(){
    // Criação das variáveis da carta 1
    char estado1[10];
    char codigo1[3] = "C1";
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pturistico1;

    // Criação das variáveis da carta 2
    char estado2[10];
    char codigo2[3] = "C2";
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pturistico2;

    printf("\n-----------------------------------------------------\n");
    // Preenchimento da carta 1 pelo usuário
    printf("\nVamos preencher as cartas do Super Trunfo\n");
    printf("\n-----------------------------------------------------\n");
    printf("Digite o Estado. \nOpões:  RJ / SP / MG / ES / BA / SE / AL / PE: ");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a População ( Número de Habitantes): ");
    scanf("%d", &populacao1);
    printf("Digite a área da Cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturistico1);
    
    // Solicitando os dados da carta 2

    printf("\n-----------------------------------------------------\n");
   
    // Preenchimento da carta 2 pelo usuário
    printf("\nVamos preencher os dados da carta 2\n");
    printf("\n-----------------------------------------------------\n");
    printf("Digite o Estado. \nOpões:  RJ / SP / MG / ES / BA / SE / AL / PE: ");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a População ( Número de Habitantes): ");
    scanf("%d", &populacao2);
    printf("Digite a área da Cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturistico2);
    
    
    // Imprimindo a carta 1
    printf("\n-----------------------------------------------------\n");
    printf("CARTA 1 %s - %s", cidade1, codigo1);
    printf("\n-----------------------------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População %d\n",populacao1);
    printf("Área da cidade: %.2f\n",area1);
    printf("PIB da Cidade: %.2f\n",PIB1);
    printf("Número de pontos turísticos da cidade: %d\n", pturistico1);
        
    // Imprimindo a carta 2
    printf("\n-----------------------------------------------------\n");
    printf("CARTA 2 %s - %s", cidade2, codigo2);
    printf("\n-----------------------------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População %d\n",populacao2);
    printf("Área da cidade: %.2f\n",area2);
    printf("PIB da Cidade: %.2f\n",PIB2);
    printf("Número de pontos turísticos da cidade: %d\n", pturistico2);
    printf("\n-----------------------------------------------------\n");

    return 0;

}