#include <stdio.h>

int main(){
    char codigo1[10], codigo2[10], cidade1[50], cidade2[50], estado1[10], estado2[10];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2, per1, per2;
    float area1, area2, pib1, pib2;

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
    densidade1 = populacao1 / area1; // Cálcula a densidade populacional da primeira carta
    densidade2 = populacao2 / area2; // Cálcula a densidade populacional da segunda carta

    per1 = pib1 / populacao1; // Cálcula o per capital 1
    per2 = pib2 / populacao2; // Cálcula o per capital 2
    
    // Seção responsável por imprimir as informações da carta 1
    printf("\nCarta 1:\n");

    printf("• Estado: %s\n", estado1);
    printf("• Código: %s\n", codigo1);
    printf("• Nome da Cidade: %s\n", cidade1);
    printf("• População: %d\n", populacao1);
    printf("• Área: %.2f km²\n", area1);
    printf("• PIB: %.2f\n", pib1);
    printf("• Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("• Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("• PIB per Capita: %.2f reais\n", per1);

    // Seção responsável por imprimir as informações da carta 2
    printf("\nCarta 2:\n");

    printf("• Estado: %s\n", estado2);
    printf("• Código: %s\n", codigo2);
    printf("• Nome da Cidade: %s\n", cidade2);
    printf("• População: %d\n", populacao2);
    printf("• Área: %.2f km²\n", area2);
    printf("• PIB: %.2f\n", pib2);
    printf("• Número de Pontos Turísticos: %d", pontos_turisticos2);
    printf("• Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("• PIB per Capita: %.2f reais", per2);

    return 0;
}
