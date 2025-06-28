#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {

    // Variáveis para armazenar os dados da primeira carta

    char codigo1[4], codigo2[4]; // Armazena o código da cidade (ex: A01)
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // === CADASTRO DA PRIMEIRA CARTA ===
    printf("Cadastro da primeira carta:\n");

    // Leitura do código da cidade
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo1);

    // Leitura da população
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    // Leitura da área
    printf("Digite a area: ");
    scanf("%f", &area1);
    
    // Leitura do PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
   

    // Leitura do número de pontos turísticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // === CADASTRO DA SEGUNDA CARTA ===
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

    // === EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA ===
    printf("\n--- Dados da primeira carta ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.f\n", area1); 
    printf("PIB: %.f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // === EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA ===
    printf("\n--- Dados da segunda carta ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.f\n", area2);
    printf("PIB: %.f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0; // Fim do programa
}