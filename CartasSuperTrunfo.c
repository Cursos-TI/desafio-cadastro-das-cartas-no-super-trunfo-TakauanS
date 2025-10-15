#include <stdio.h>

int main(){
    char codigo1[10], codigo2[10], cidade1[50], cidade2[50], estado1[10], estado2[10];
    int jog1_atr1, jog1_atr2, jog2_atr1, jog2_atr2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, sup1, sup2;
    float densidade1, densidade2, per1, per2;

    unsigned long int populacao1, populacao2;

    // Seção de captura de dados da carta 1
    printf("\nCapturando informações da Carta 1\n\n");
    
    printf("- Estado: ");
    scanf("%s", estado1); // Captura o estado 1

    printf("- Código: ");
    scanf("%s", codigo1); // Captura o código 1

    printf("- Nome da Cidade: ");
    scanf("%s", cidade1); // Captura o nome de cidade 1

    printf("- População: ");
    scanf("%d", &populacao1); // Captura população 1

    printf("- Área: ");
    scanf("%f", &area1); // Captura a área 1

    printf("- PIB: ");
    scanf("%f", &pib1); // Captura o PIB 1

    printf("- Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1); // Captura o números de pontos

    // Seção de captura de dados da carta 2
    printf("\nCapturando informações da Carta 2\n\n");
    getchar(); // Limpar o buffer

    printf("- Estado: ");
    scanf("%s", estado2); // Captura o estado 2

    printf("- Código: ");
    scanf("%s", codigo2); // Captura o código 2

    printf("- Nome da Cidade: ");
    scanf("%s", cidade2); // Captura o nome de cidade 2

    printf("- População: ");
    scanf("%d", &populacao2); // Captura a população 2

    printf("- Área: ");
    scanf("%f", &area2); // Captura a área 2

    printf("- PIB: ");
    scanf("%f", &pib2); // Captura o PIB 2

    printf("- Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2); // Captura o número de pontos 2

    // Seção de Cálculos
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    per1 = pib1 / (float) populacao1;
    per2 = pib2 / (float) populacao2;

    sup1 = area1 + pib1 + per1 + (float) populacao1 + (float) pontos_turisticos1 + (1.0f / densidade1);
    sup2 = area2 + pib2 + per2 + (float) populacao2 + (float) pontos_turisticos2 + (1.0f / densidade2);

    // Seção responsável por imprimir as informações da carta 1
    printf("\nCarta 1:\n\n");

    printf("• Estado: %s\n", estado1);
    printf("• Código: %s\n", codigo1);
    printf("• Nome da Cidade: %s\n", cidade1);
    printf("• População: %lu\n", populacao1);
    printf("• Área: %.2f km²\n", area1);
    printf("• PIB: %.2f\n", pib1);
    printf("• Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("• Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("• PIB per Capita: %.2f reais\n", per1);

    // Seção responsável por imprimir as informações da carta 2
    printf("\nCarta 2:\n\n");

    printf("• Estado: %s\n", estado2);
    printf("• Código: %s\n", codigo2);
    printf("• Nome da Cidade: %s\n", cidade2);
    printf("• População: %lu\n", populacao2);
    printf("• Área: %.2f km²\n", area2);
    printf("• PIB: %.2f\n", pib2);
    printf("• Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("• Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("• PIB per Capita: %.2f reais\n\n", per2);

    // Seção responsável por comparação dos valores
    printf("Seção de Comparação de Cartas\n\n");

    printf("1 - População\n"
           "2 - Área\n"
           "3 - PIB\n"
           "4 - Número de pontos turísticos\n");

    printf("\n- Faça a primeira a escolha do primeiro atributo que deseja comparar (jogador 1): ");
    scanf("%d", &jog1_atr1);

    printf("- Faça a primeira a escolha do primeiro atributo que deseja comparar (jogador 2): ");
    scanf("%d", &jog2_atr1);

    if (jog1_atr1 == jog2_atr1){
        printf("• Aconteceu de que os atributos são iguais, então é empate!");
    } else {
        switch (jog1_atr1){
            case 1:
                printf("\n• O jogador 1 no seu primeiro atributo escolheu: população\n");
                jog1_atr1 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("\n• O jogador 1 no seu primeiro atributo escolheu: área\n");
                jog1_atr1 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                printf("\n• O jogador 1 no seu primeiro atributo escolheu: PIB\n");
                jog1_atr1 = pib1 > pib2 ? 1 : 0;
                break;
            case 4:
                printf("\n• O jogador 1 no seu primeiro atributo escolheu: pontos turísticos\n");
                jog1_atr1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
                break;
        }
        switch (jog2_atr1) {
            case 1:
                printf("• O jogador 2 no seu primeiro atributo escolheu: população\n");
                jog1_atr1 = populacao2 > populacao1 ? 1 : 0;
                break;
            case 2:
                printf("• O jogador 2 no seu primeiro atributo escolheu: área\n");
                jog1_atr1 = area2 > area1 ? 1 : 0;
                break;
            case 3:
                printf("• O jogador 2 no seu primeiro atributo escolheu: PIB\n");
                jog1_atr1 = pib2 > pib1 ? 1 : 0;
                break;
            case 4:
                printf("• O jogador 2 no seu primeiro atributo escolheu: pontos turísticos\n");
                jog1_atr1 = pontos_turisticos2 > pontos_turisticos1 ? 1 : 0;
                break;        
        }
    }

    if (jog1_atr1 > jog2_atr1){
        printf("\n• O jogador 1 ganhou na comparação do primeiro atributo\n");
    } else if (jog1_atr1 < jog2_atr1){
        printf("\n• O jogador 2 venceu na comparação do primeiro atributo\n");
    } else {
        printf("\n• Empate nos valores do primeiro atributo!\n");
    }

    printf("\n- Faça a segunda escolha do segundo atributo que deseja comparar (jogador 1): ");
    scanf("%d", &jog1_atr2);

    printf("- Faça a segunda escolha do segundo atributo que deseja comparar (jogador 2): ");
    scanf("%d", &jog2_atr2);

    if (jog1_atr2 == jog2_atr2){
        printf("• Aconteceu de que os atributos são iguais, então é empate!");
    } else {
        switch (jog1_atr2){
            case 1:
                printf("\n• O jogador 1 no seu segundo atributo escolheu: população\n");
                jog1_atr2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("\n• O jogador 1 no seu segundo atributo escolheu: área\n");
                jog1_atr2 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                printf("\n• O jogador 1 no seu segundo atributo escolheu: PIB\n");
                jog1_atr2 = pib1 > pib2 ? 1 : 0;
                break;
            case 4:
                printf("\n• O jogador 1 no seu segundo atributo escolheu: pontos turísticos\n");
                jog1_atr2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
                break;
        }
        switch (jog2_atr2) {
            case 1:
                printf("• O jogador 2 no seu segundo atributo escolheu: população\n");
                jog1_atr2 = populacao2 > populacao1 ? 1 : 0;
                break;
            case 2:
                printf("• O jogador 2 no seu segundo atributo escolheu: área\n");
                jog1_atr2 = area2 > area1 ? 1 : 0;
                break;
            case 3:
                printf("• O jogador 2 no seu segundo atributo escolheu: PIB\n");
                jog1_atr2 = pib2 > pib1 ? 1 : 0;
                break;
            case 4:
                printf("• O jogador 2 no seu segundo atributo escolheu: pontos turísticos\n");
                jog1_atr2 = pontos_turisticos2 > pontos_turisticos1 ? 1 : 0;
                break;        
        }
    }

    if (jog1_atr2 > jog2_atr2){
        printf("\n• O jogador 1 ganhou na comparação do segundo atributo\n");
    } else if (jog1_atr2 < jog2_atr2){
        printf("\n• O jogador 2 venceu na comparação do segundo atributo\n");
    } else {
        printf("\n• Empate nos valores do segundo atributo!\n");
    }

    return 0;
}