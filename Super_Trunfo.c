#include<stdio.h>

int main() {

    // Declaração das variaveis do ambiente
    char estado1, estado2;
    char carta1[4], carta2[4];
    char cidade1[15], cidade2[15];
    int  pontos1, pontos2, pop1, pop2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibper1, pibper2;

// Solicitação dos dados da carta 1

    printf("##### Cadastramento de dados Carta 1 #####\n");

    printf("Digite a primeira letra do seu Estado - ");
    scanf(" %c", &estado1);

    printf("Digite o código da sua carta composto por 1 letra e 2 números - ");
    scanf("%s", &carta1);

    printf("Digite o nome da cidade - ");
    scanf("%s", cidade1);

    printf("Digite o numero de habitantes - ");
    scanf("%d", &pop1);
    
    printf("Digite o tamanho da área da cidade - ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da cidade - ");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade - ");
    scanf("%d", &pontos1);

    printf("\n \n");

    // Solicitação dos dados da carta 2

    printf("##### Cadastramento de dados Carta 2 #####\n");
    printf("Digite a primeira letra do seu Estado - ");
    scanf(" %c", &estado2);

    printf("Digite o código da sua carta composto por 1 letra e 2 números - ");
    scanf("%s", &carta2);

    printf("Digite o nome da cidade - ");
    scanf("%s", &cidade2);

    printf("Digite o Tamanho da população - ");
    scanf("%d", &pop2);
    
    printf("Digite o tamanho da área da cidade - ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da cidade - ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade - ");
    scanf("%d", &pontos2);

    printf("\n \n");

    // Calculo de densidade Populacional
    densidade1 = pop1 / area1;
    densidade2 = pop2 / area2;

    // Calculo PIB per Capita
    pibper1 = (pib1 * 1000000000.0) / pop1;
    pipper2 = (pib2 * 1000000000.0) / pop2;
    
    
    // Impressão dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área - %f\n", area1);
    printf("PIB - %f\n", pib1);
    printf("Número de Pontos Turisticos - %d", pontos1);
    printf("Densidade Populacional: %.2f", densidade1);
    printf("PIB per Capita: %.2f", pibper1);
    
    printf("\n \n");

    // Impressão dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área - %f\n", area2);
    printf("PIB - %f\n", pib2);
    printf("Número de Pontos Turisticos - %d\n", pontos2);
    printf("Densidade Populacional: %.2f", densidade2);
    printf("PIB per Capita: %.2f", pibper2);

    return 0;
}
