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
    
    // Variáveis da segunda carta
    char estado2[50];
    int codigo2;
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    
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
    
    // EXIBIÇÃO DAS CARTAS CADASTRADAS
    printf("\n\n===========================================\n");
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
    
    printf("\n=== DADOS DA SEGUNDA CARTA ===\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
        
    return 0;
}