#include <stdio.h>

int main() {
    // Variáveis para Carta 1
    char estado1; // para a letra do estado
    char codigo_numerico1[10]; // Para a parte numérica do código, ex: "01"
    char nome_da_cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    int temp_char; // Para limpar o buffer
    
    printf("Insira as informações da carta1:\n");
    printf("Digite a letra inicial do seu Estado (A-H): \n");
    scanf(" %c", &estado1); // Espaço antes de %c para limpar buffer
    while ((temp_char = getchar()) != '\n' && temp_char != EOF); // Limpa o buffer
    
    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome_da_cidade1); // Sem &, e com limite para segurança
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);
    
    // Se o código é "A01", o usuário digita 'A' para estado e "01" para codigo_numerico
    printf("Digite a parte numérica do código da carta (ex: 01, 02, 03 ou 04): \n");
    scanf("%s", codigo_numerico1); // Sem &
    while ((temp_char = getchar()) != '\n' && temp_char != EOF);

    printf("Digite número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km² de sua cidade, só com números: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos desta cidade: \n");
    scanf("%d", &pontos_turisticos1);
    
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1,codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    char estado2;
    char codigo2[10];
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    printf("Insira as informações da carta2:\n");
    printf("Digite a letra inicial do seu Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o dois números, de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Digite número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² de sua cidade, só com números: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos desta cidade: \n");
    scanf("%d", &pontos_turisticos2);
    
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2,codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
