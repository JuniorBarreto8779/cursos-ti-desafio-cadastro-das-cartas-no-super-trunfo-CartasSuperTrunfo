#include <stdio.h>

int main(void){

    // Criação das variáveis da carta 1
    char estado1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pturistico1;
        // Variável do nível aventureiro
    float dpop1;
    float PIBc1;
            // Variável do nível Mestre
    double superpoder1;

    // Criação das variáveis da carta 2
    char estado2[10];
    char cidade2[20]; 
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pturistico2;
        // Variável do nível aventureiro
    float dpop2 = 0;
    float PIBc2;
            // Variável do nível Mestre
    double superpoder2;
    int comparapopulacao;
    int comparaarea;
    int comparapib;
    int comparapturistico;
    int comparadensidadepop;
    int comparaPIBc;
    int comparasuperpoder;

    printf("\n-----------------------------------------------------\n");
    
    // Preenchimento da carta 1 pelo usuário
    printf("\nVamos preencher as cartas do Super Trunfo\n");
    printf("\n-----------------------------------------------------\n");
    printf("Digite o Estado.\nExemplo: RJ / SP / MG / ES / BA / SE: ");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a População (Número de Habitantes): ");
    scanf("%d", &populacao1);
    printf("Digite a área da Cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pturistico1);
    
    // Preenchimento da carta 2 pelo usuário
    printf("\n-----------------------------------------------------\n");
       printf("\nVamos preencher os dados da carta 2\n");
    printf("\n-----------------------------------------------------\n");
    printf("Digite o Estado.\nExemplo: RJ / SP / MG / ES / BA / SE: ");
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
    
    // Calculos do nível Aventureiro
    dpop1 = populacao1 / area1;
    PIBc1 = PIB1 / populacao1;

    dpop2 = populacao2 / area2;
    PIBc2 = PIB2 / populacao2;
    
    // Cálculo do Nível Mestre
    superpoder1 = populacao1 + area1 + PIB1 + pturistico1 + PIBc1 + (1/dpop1);
    superpoder2 = populacao2 + area2 + PIB2 + pturistico2 + PIBc2 + (1/dpop2);

    comparapopulacao = populacao1 > populacao2;
    comparaarea = area1 > area2;
    comparapib = PIB1 > PIB2;
    comparapturistico = pturistico1 > pturistico2;
    comparadensidadepop = dpop1 > dpop2;
    comparaPIBc = PIBc1 > PIBc2;
    comparasuperpoder = superpoder1 > superpoder2;

    // Imprimindo a carta 1
    printf("\n-----------------------------------------------------\n");
    printf("CARTA 1 - Código %s01\n",estado1);
    printf("\n-----------------------------------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População %d\n",populacao1);
    printf("Área da cidade: %.2f\n",area1);
    printf("PIB da Cidade: %.2f\n",PIB1);
    printf("Número de pontos turísticos da cidade: %d\n", pturistico1);
    // Incluindo linha de impressão nível aventureiro
    printf("Densidade Populacional: %2.f hab/km2\n",dpop1);
    printf("PIB per Capta: R$%2.f\n",PIBc1);
        // Incluindo linha de impressão nível Mestre
    printf("Super poder: %2.f", superpoder1);

    // Imprimindo a carta 2
    printf("\n-----------------------------------------------------\n");
    printf("CARTA 2 - Código %s01\n",estado2);
    printf("\n-----------------------------------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População %d\n",populacao2);
    printf("Área da cidade: %.2f\n",area2);
    printf("PIB da Cidade: %.2f\n",PIB2);
    printf("Número de pontos turísticos da cidade: %d\n", pturistico2);
   // Incluindo linha de impressão nível aventureiro
    printf("Densidade Populacional: %2.f hab/km2\n",dpop2);
    printf("PIB per Capta: R$%2.f\n",PIBc2);
    // Incluindo linha de impressão nível Mestre
    printf("Super poder: %2.f", superpoder2);
    printf("\n-----------------------------------------------------\n");
    
        //Nível Mestre - Comparando as Cartas
    printf("\nComparando as Cartas:\n");
    printf("População: Carta 1 venceu? >> %d<< (1 = Sim / 0 = Nâo)\n", comparapopulacao);
    printf("Área: Carta 1 venceu? >> %d<< (1 = Sim / 0 = Nâo)\n", comparaarea);
    printf("PIB: Carta 1 venceu? >> %d<< (1 = Sim / 0 = Nâo)\n", comparapib);
    printf("Pontos Turísticos: Carta 1 venceu? >> %d<< (1 = Sim / 0 = Nâo)\n", comparapturistico);
    printf("Densidade Populacional: Carta 1 venceu? >> %d<< (1 = Sim / 0 = Nâo)\n", comparadensidadepop);
    printf("PIB per capta: Carta 1 venceu? >> %d<< (1 = Sim / 0 = Nâo)\n", comparaPIBc);
    printf("Super poder: Carta 1 venceu? >> %d<< (1 = Sim / 0 = Nâo)\n", comparasuperpoder);

    
  

    return 0;

}