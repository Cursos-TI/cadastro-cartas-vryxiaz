#include <stdio.h>

int main(){

    //Declarando as variáveis com as informações das cartas.
    char estado1 = 0, estado2 = 0, codigodacarta1[4] = "", codigodacarta2[4] = "", cidade1[50] = "", cidade2[50] = "";
    int populacao1 = 0, populacao2 = 0, pontosturisticos1 = 0, pontosturisticos2 = 0;
    float area1 = 0.0, area2 = 0.0, pib1 = 0.0, pib2 = 0.0, pibPerCapita1 = 0.0, pibPerCapita2 = 0.0, 
    densidade1 = 0.0, densidade2 = 0.0;

    //Exibindo o título
    printf("=== SUPER TRUNFO DE PAÍSES ===");
    
    //Pegando as informaçãoes da carta 1
    printf("INFORMAÇÕES DA CARTA 1\n");

    printf("Insira o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Insira o código da carta 1: ");
    scanf("%3s", codigodacarta1);

    printf("Insira o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Insira a população da carta 1: ");
    scanf("%d", &populacao1);

    printf("Insira a área (em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosturisticos1);
    
    //Calculando a densidade demográfica da cidade 1
    densidade1 = (float)populacao1 / area1;
    
    //Calculando o Pib per Capita da cidade 1
    pibPerCapita1 = (pib1 * 1000000000.0)/ (float)populacao1;


    //Pegando as informaçãoes da carta 2
    printf("\nINFORMAÇÕES DA CARTA 2\n");

    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta 2: ");
    scanf("%3s", codigodacarta2);

    printf("Insira o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Insira a população da carta 2: ");
    scanf("%d", &populacao2);

    printf("Insira a área (em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosturisticos2);
    
    //Calculando a densidade demográfica da cidade 2
    densidade2 = (float)populacao2 / area2;
    
    //Calculando o Pib per Capita da cidade 2
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;


    //Exibindo a carta 1 na tela
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    //Exibindo a carta 2 na tela
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;

}