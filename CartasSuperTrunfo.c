#include <stdio.h>

int main() {

    // Variáveis das cartas
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Novos atributos
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // === Entrada de dados da primeira carta ===
    printf("Cadastro da primeira carta:\n");

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // === Entrada de dados da segunda carta ===
    printf("\nCadastro da segunda carta:\n");

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // === Exibição da primeira carta ===
    printf("\n--- Dados da primeira carta ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    // === Exibição da segunda carta ===
    printf("\n--- Dados da segunda carta ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}
