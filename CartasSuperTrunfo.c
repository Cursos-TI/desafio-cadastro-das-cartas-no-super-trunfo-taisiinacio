#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    // Variáveis da primeira carta
    char estado1[50];
    char temp[50]; // Variável temporária para conversões de char para outra variável
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibper1;
    float superpoder1;

    // Variáveis da segunda carta
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibper2;
    float superpoder2;

    // Variáveis de comparação de super poder

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
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';

    printf("Digite a Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a População: ");
    fgets(temp, sizeof(temp), stdin);
    // populacao1 = atoi(temp);  // Converte string para int
    populacao1 = strtoul(temp, NULL, 10);

    printf("Digite a Área: ");
    fgets(temp, sizeof(temp), stdin);
    area1 = atof(temp); // Converte string para float

    printf("Digite o PIB: ");
    fgets(temp, sizeof(temp), stdin);
    pib1 = atof(temp); // Converte string para float

    printf("Digite o Número de Pontos Turísticos: ");
    fgets(temp, sizeof(temp), stdin);
    pontos1 = atoi(temp); // Converte string para int

    densidade1 = populacao1 / area1; // Cálculo da Densidade Populacional por área

    if (area1 != 0.0f)
    {
        densidade1 = (float)populacao1 / area1;
    }
    else
    {
        densidade1 = 0.0f;
        printf("⚠️  Atenção: Área da Carta 1 é zero! Densidade Populacional definida como 0.\\n");
    }
    // Exemplo para pibper1:
    if (populacao1 != 0)
    {
        pibper1 = (pib1 * 1000000000.0f) / populacao1;
    }
    else
    {
        pibper1 = 0.0f;
        printf("⚠️  Atenção: População da Carta 1 é zero! PIB per Capita definida como 0.\\n");
    }

    // pibper1 = (pib1 *1000000000)/populacao1; // Cálculo do PIB per Capita e conversão do pib de bilhões para reais

    // Cálculo do super poder1
    float inverso_densidade1 = 0.0f;
    if (densidade1 != 0.0f)
    {
        inverso_densidade1 = 1.0f / densidade1;
    }
    else
    {
        printf("⚠️  Atenção: Densidade da Carta 1 é zero! Inverso da densidade definido como 0.\\n");
    }
    // Recalcule o SUPER PODER, incluindo o inverso da densidade:
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibper1 + inverso_densidade1;

    // CADASTRO DA SEGUNDA CARTA
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");

    printf("Digite a Carta 2: \n");

    printf("Digite o Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o Código: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Digite a Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a População: ");
    fgets(temp, sizeof(temp), stdin);
    populacao1 = strtoul(temp, NULL, 10); // Converte string para int

    printf("Digite a Área: ");
    fgets(temp, sizeof(temp), stdin);
    area2 = atof(temp); // Converte string para float

    printf("Digite o PIB: ");
    fgets(temp, sizeof(temp), stdin);
    pib2 = atof(temp); // Converte string para float

    printf("Digite o Número de Pontos Turísticos: ");
    fgets(temp, sizeof(temp), stdin);
    pontos2 = atoi(temp); // Converte string para int

    densidade2 = populacao2 / area2;            // Cálculo da Densidade Populacional por área
    pibper2 = (pib2 * 1000000000) / populacao2; // Cálculo do PIB per Capita e conversão do pib de bilhões para reais

    // Cálculo do super poder2
    float inverso_densidade2 = 0.0f;
    if (densidade2 != 0.0f)
    {
        inverso_densidade2 = 1.0f / densidade2;
    }
    else
    {
        printf("⚠️  Atenção: Densidade da Carta 1 é zero! Inverso da densidade definido como 0.\\n");
    }
    // Recalcule o SUPER PODER, incluindo o inverso da densidade:
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibper2 + inverso_densidade2;

    // Comparação das cartas

    superPoderPopulacao = populacao1 > populacao2;
    superPoderArea = area1 > area2;
    superPoderPib = pib1 > pib2;
    superPoderPontos = pontos1 > pontos2;
    superPoderDensidade = (densidade1 < densidade2);
    superPoderPibPer = pibper1 > pibper2;
    superPoderCarta = superpoder1 > superpoder2;

    // EXIBIÇÃO DAS CARTAS CADASTRADAS
    printf("\n\n===========================================\n");
    printf("        CARTAS CADASTRADAS\n");
    printf("===========================================\n");

    printf("\n=== DADOS DA PRIMEIRA CARTA ===\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibper1);

    printf("\n=== DADOS DA SEGUNDA CARTA ===\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibper2);

    printf("======= COMPARAÇÕES INDIVIDUAIS =======\n");
    printf("\n Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", superPoderPopulacao);
    printf("Área: Carta 1 venceu (%d) \n", superPoderArea);
    printf("PIB: Carta 1 venceu (%d)\n", superPoderPib);
    printf("Densidade Populacional: Carta 1 venceu(%d)\n", superPoderDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", superPoderPibPer);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCarta);

    // menu comparação
    int opcao;

    printf("===========================================\n");
    printf("=    Menu Comparação de Atributos         =\n");
    printf("===========================================\n");
    printf("Escolha o atributopara comparação:\n");
    printf("1 - Nome do país\n");
    printf("2 - População\n");
    printf("3 - Área \n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    printf("Escolha a Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Comparação escolhida: Nome do país\n");
        printf("Carta 1: %s\n", cidade1);
        printf("Carta 2: %s\n", cidade2);
        printf("Não possui vencedor, apenas exibição!\n");
        break;

    case 2:
        printf("Comparação escolhida: População\n");
        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);

        if (populacao1 > populacao2)
            printf("%s venceu!\n", cidade1);
        else if (populacao2 > populacao1)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");
    break;

    case 3:
        printf("Comparação escolhida: Área\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);

        if (area1 > area2)
            printf("%s venceu!\n", cidade1);
        else if (area2 > area1)
            printf("%s venceu!\n", cidade2);
        else
            printf("Empate!\n");
    break;

     case 4:
        printf("Comparação escolhida: PIB\n");
        printf("%s: R$ %.2f bilhões\n", cidade1, pib1);
        printf("%s: R$ %.2f bilhões\n", cidade2, pib2);

        if (pib1 > pib2) {
            printf("%s venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("%s venceu!\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;

          case 5: 
        printf("Comparação escolhida: Pontos turísticos\n");
        printf("%s: %d pontos\n", cidade1, pontos1);
        printf("%s: %d pontos\n", cidade2, pontos2);

        if (pontos1 > pontos2) {
            printf("%s venceu!\n", cidade1);
        } else if (pontos2 > pontos1) {
            printf(" %s venceu!\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;


            case 6: 
        printf("Comparação escolhida: Densidade demográfica\n");
        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);

        if (densidade1 < densidade2) {
            printf("%s venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("%s venceu!\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;

    }

    return 0;
}