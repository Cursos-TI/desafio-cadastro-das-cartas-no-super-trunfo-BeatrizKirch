#include <stdio.h>

int main() {
    // === Declaração das variáveis ===

    // Código das cidades (até 9 caracteres)
    char codigo1[10], codigo2[10];

    // População das cidades
    unsigned long int populacao1, populacao2;

    // Área geográfica das cidades
    float area1, area2;

    // Produto Interno Bruto
    float pib1, pib2;

    // Número de pontos turísticos
    int pontos_turisticos1, pontos_turisticos2;

    // Atributos calculados
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // === Entrada dos dados da primeira carta ===
    printf("Cadastro da primeira carta:\n");

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // === Entrada dos dados da segunda carta ===
    printf("\nCadastro da segunda carta:\n");

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade e PIB per capita
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // === Cálculo do Super Poder ===
    float densidade_inv1 = (densidade1 != 0) ? 1.0f / densidade1 : 0;
    float densidade_inv2 = (densidade2 != 0) ? 1.0f / densidade2 : 0;

    float super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + pontos_turisticos1 + densidade_inv1;
    float super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + pontos_turisticos2 + densidade_inv2;

    // === Exibição dos dados das cartas ===
    printf("\n--- Dados da primeira carta ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n--- Dados da segunda carta ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // === Comparações entre cartas ===
    printf("\n=== Comparação entre cartas ===\n");

    printf("Populacao: %s venceu\n",
           (populacao1 > populacao2) ? codigo1 :
           (populacao1 < populacao2) ? codigo2 : "Empate");

    printf("Area: %s venceu\n",
           (area1 > area2) ? codigo1 :
           (area1 < area2) ? codigo2 : "Empate");

    printf("PIB: %s venceu\n",
           (pib1 > pib2) ? codigo1 :
           (pib1 < pib2) ? codigo2 : "Empate");

    printf("PIB per capita: %s venceu\n",
           (pib_per_capita1 > pib_per_capita2) ? codigo1 :
           (pib_per_capita1 < pib_per_capita2) ? codigo2 : "Empate");

    printf("Pontos Turisticos: %s venceu\n",
           (pontos_turisticos1 > pontos_turisticos2) ? codigo1 :
           (pontos_turisticos1 < pontos_turisticos2) ? codigo2 : "Empate");

    printf("Densidade Populacional: %s venceu\n",
           (densidade1 < densidade2) ? codigo1 :
           (densidade1 > densidade2) ? codigo2 : "Empate");

    printf("Super Poder: %s venceu\n",
           (super_poder1 > super_poder2) ? codigo1 :
           (super_poder1 < super_poder2) ? codigo2 : "Empate");

    return 0;
}
