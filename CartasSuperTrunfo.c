#include <stdio.h>

int main(){
    char codigo1[10], codigo2[10], cidade1[50], cidade2[50], estado1[10], estado2[10];
    int pontos_turisticos1, pontos_turisticos2, atributo;
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

    // Seção responsável pelo o menu interativo de comparações de atributos
    printf("---SEÇÃO DE COMPARAÇÃO DE ATRIBUTOS DE CARTAS---\n");

    printf("\n0 - População\n"
           "1 - Área\n"
           "2 - PIB\n"
           "3 - Número de pontos turísticos\n\n");
    
    printf("- Qual o atributo você deseja comparar: ");
    scanf("%d", &atributo);

    switch (atributo){
        case 0:
            if (populacao1 > populacao2){
                printf("• Carta 1: população -> %d\n", populacao1);
                printf("• Carta 2: população -> %d\n", populacao2);
                printf("- A carta 1 venceu!");
            }
            else if (populacao1 < populacao2){
                printf("• Carta 1: população -> %d\n", populacao1);
                printf("• Carta 2: população -> %d\n", populacao2);
                printf("- A carta 2 venceu!");
            }
            else {
                printf("• Carta 1: população -> %d\n", populacao1);
                printf("• Carta 2: população -> %d\n", populacao2);
                printf("- Os valores das cartas são iguais, deu empate!");
            }
            break;
        case 1:
            if (area1 > area2) {
                printf("• Carta 1: área -> %f\n", area1);
                printf("• Carta 2: área -> %f\n", area2);
                printf("- A carta 1 venceu!");
            }
            else if (area1 < area2) {
                printf("• Carta 1: área -> %f\n", area1);
                printf("• Carta 2: área -> %f\n", area2);
                printf("- A carta 2 venceu!");
            }
            else {
                printf("• Carta 1: área -> %.2f\n", area1);
                printf("• Carta 2: área -> %.2f\n", area2);
                printf("- Os valores das cartas são iguais, deu empate!");
            }
            break;
        case 2:
            if (pib1 > pib2) {
                printf("• Carta 1: pib -> %.2f\n", pib1);
                printf("• Carta 2: pib -> %.2f\n", pib2);
                printf("- A carta 1 venceu!");
            }
            else if (pib1 < pib2){
                printf("• Carta 1: pib -> %.2f\n", pib1);
                printf("• Carta 2: pib -> %.2f\n", pib2);
                printf("- Carta 2 venceu!");
            }
            else {
                printf("• Carta 1: pib -> %.2f\n", pib1);
                printf("• Carta 2: pib -> %.2f\n", pib2);
                printf("- Os valores das cartas são iguais, deu empate!");                
            }
            break;
        case 3:
            if (pontos_turisticos1 > pontos_turisticos2){
                printf("• Carta 1: ponto turístico -> %d\n", pontos_turisticos1);
                printf("• Carta 2: ponto turístico -> %d\n", pontos_turisticos2);
                printf("- A carta 1 venceu!");
            }
            else if (pontos_turisticos1 < pontos_turisticos2){
                printf("• Carta 1: ponto turístico -> %d\n", pontos_turisticos1);
                printf("• Carta 2: ponto turístico -> %d\n", pontos_turisticos2);
                printf("- A carta 2 venceu!");           
            }
            else {
                printf("• Carta 1: ponto turístico -> %d\n", pontos_turisticos1);
                printf("• Carta 2: ponto turístico -> %d\n", pontos_turisticos2);
                printf("- Os valores das cartas são iguais, deu empate!");                
            }
            break;
    }
    return 0;
}