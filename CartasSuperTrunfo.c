#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado;
    char codigo[10];
    char nome_da_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    printf("Insira as informações da carta1:\n");
    printf("Digite a letra inicial do seu Estado: \n");
    scanf("%c", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite o dois números, de 01 a 04: \n");
    scanf("%s", &codigo);

    printf("Digite número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km² de sua cidade, só com números: \n");
    scanf("%f", &area);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos desta cidade: \n");
    scanf("%d", &pontos_turisticos);
    
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado,codigo);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    char estado2;
    char codigo2[10];
    char nome_da_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    printf("Insira as informações da carta2:\n");
    printf("Digite a letra inicial do seu Estado: \n");
    scanf("%c", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o dois números, de 01 a 04: \n");
    scanf("%s", &codigo2);

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
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
