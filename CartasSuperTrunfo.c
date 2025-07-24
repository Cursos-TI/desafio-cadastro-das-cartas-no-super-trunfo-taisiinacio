#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    
    // Variáveis da primeira carta
    char estado1[50];
    char temp[50];  // Variável temporária para conversões de char para outra variável
    int codigo1;
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibper1;
    float superpoder1;
    
    // Variáveis da segunda carta
    char estado2[50];
    int codigo2;
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibper2;
    float superpoder2;

    //Variáveis de comparação de super poder

    int superPoderPopulacao;
    int superPoderArea;
    int superPoderPib;
    int superPoderPontos;
    int superPoderDensidade;
    int superPoderPibPer;
    int superPoderCarta;
    
    printf("===========================================\n");
    printf("    CADASTRO DE CARTAS\n");
    printf("===========================================\n");
    
    // CADASTRO DA PRIMEIRA CARTA
    printf("\n=== CADASTRO DA PRIMEIRA CARTA ===\n");
    
    printf("Digite a Carta1: \n");
        
    printf("Digite o Estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';
    
    printf("Digite o Código: ");
    fgets(temp, sizeof(temp), stdin);
    codigo1 = atoi(temp);  // Converte string para int
    
    printf("Digite a Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    
    printf("Digite a População: ");
    fgets(temp, sizeof(temp), stdin);
    populacao1 = atoi(temp);  // Converte string para int
    
    printf("Digite a Área: ");
    fgets(temp, sizeof(temp), stdin);
    area1 = atof(temp);  // Converte string para float
    
    printf("Digite o PIB: ");
    fgets(temp, sizeof(temp), stdin);
    pib1 = atof(temp);  // Converte string para float
    
    printf("Digite o Número de Pontos Turísticos: ");
    fgets(temp, sizeof(temp), stdin);
    pontos1 = atoi(temp);  // Converte string para int

    densidade1 = populacao1/area1; //Cálculo da Densidade Populacional por área
    pibper1 = (pib1 *1000000000)/populacao1; // Cálculo do PIB per Capita e conversão do pib de bilhões para reais

    superpoder1=(populacao1 + area1 +pib1 + pontos1 + pibper1 + densidade1 ); // Cálculo do super poder
    
    // CADASTRO DA SEGUNDA CARTA
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    
    printf("Digite a Carta 2: \n");
       
    printf("Digite o Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';
    
    printf("Digite o Código: ");
    fgets(temp, sizeof(temp), stdin);
    codigo2 = atoi(temp);  // Converte string para int
    
    printf("Digite a Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    
    printf("Digite a População: ");
    fgets(temp, sizeof(temp), stdin);
    populacao2 = atoi(temp);  // Converte string para int
    
    printf("Digite a Área: ");
    fgets(temp, sizeof(temp), stdin);
    area2 = atof(temp);  // Converte string para float
    
    printf("Digite o PIB: ");
    fgets(temp, sizeof(temp), stdin);
    pib2 = atof(temp);  // Converte string para float
    
    printf("Digite o Número de Pontos Turísticos: ");
    fgets(temp, sizeof(temp), stdin);
    pontos2 = atoi(temp);  // Converte string para int

    densidade2 = populacao2/area2; //Cálculo da Densidade Populacional por área
    pibper2 = (pib2 *1000000000)/populacao2; // Cálculo do PIB per Capita e conversão do pib de bilhões para reais

    superpoder2=(populacao2 + area2 +pib2 + pontos2 + pibper2 + densidade2); // Cálculo do super poder

    //Comparação das cartas

    superPoderPopulacao = populacao1 > populacao2;
    superPoderArea = area1 > area2;
    superPoderPib = pib1 > pib2;
    superPoderPontos = pontos1 > pontos2;
    superPoderDensidade = densidade1 > densidade2;
    superPoderPibPer = pibper1 > pibper2;
    superPoderCarta = superpoder1 > superpoder2;
    
    // EXIBIÇÃO DAS CARTAS CADASTRADAS
   /* printf("\n\n===========================================\n");
    printf("        CARTAS CADASTRADAS\n");
    printf("===========================================\n");
    
    printf("\n=== DADOS DA PRIMEIRA CARTA ===\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);*/
    
   /* printf("\n=== DADOS DA SEGUNDA CARTA ===\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);*/

    printf("\n Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", superPoderPopulacao);
    printf("Área: Carta 1 venceu (%d) \n", superPoderArea);
    printf("PIB: Carta 1 venceu (%d)\n", superPoderPib);
    printf("Densidade Populacional: Carta 1 venceu(%d)\n", superPoderDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", superPoderPibPer);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCarta);
        
    return 0;
}