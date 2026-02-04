#include <stdio.h>

int main(){

    //Declarando as variáveis com as informações das cartas.
    char estado1 = 0, estado2 = 0, codigoDaCarta1[4] = "", codigoDaCarta2[4] = "", cidade1[50] = "", cidade2[50] = "";
    unsigned long int populacao1 = 0, populacao2 = 0;
    int pontosTuristicos1 = 0, pontosTuristicos2 = 0;
    float area1 = 0.0, area2 = 0.0, pib1 = 0.0, pib2 = 0.0, pibPerCapita1 = 0.0, pibPerCapita2 = 0.0, 
    densidade1 = 0.0, densidade2 = 0.0, superPoder1 = 0.0, superPoder2 = 0.0;

    //Exibindo o título
    printf("=== SUPER TRUNFO DE PAÍSES ===");
    
    //Pegando as informaçãoes da carta 1
    printf("INFORMAÇÕES DA CARTA 1\n");

    printf("Insira o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Insira o código da carta 1: ");
    scanf("%3s", codigoDaCarta1);

    printf("Insira o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Insira a população da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Insira a área (em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);
    
    //Calculando a densidade demográfica da Cidade 1
    densidade1 = (float)populacao1 / area1;
    
    //Calculando o Pib per Capita da Cidade 1
    pibPerCapita1 = (pib1 * 1000000000.0)/ (float)populacao1;

    //Calculando o Super Poder da Cidade 1
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);



    //Pegando as informaçãoes da carta 2
    printf("\nINFORMAÇÕES DA CARTA 2\n");

    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta 2: ");
    scanf("%3s", codigoDaCarta2);

    printf("Insira o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Insira a população da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Insira a área (em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);
    
    //Calculando a densidade demográfica da cidade 2
    densidade2 = (float)populacao2 / area2;
    
    //Calculando o Pib per Capita da cidade 2
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    //Calculando o Super Poder da Cidade 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);


    //Exibindo a carta 1 na tela
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    //Exibindo a carta 2 na tela
    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    //Exibindo as comparações entre as cartas
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Maior População: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
    printf("Maior Área: Carta 1 venceu? (%d)\n", area1 > area2);
    printf("Maior PIB: Carta 1 venceu? (%d)\n", pib1 > pib2);
    printf("Mais Pontos Turísticos: Carta 1 venceu? (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Menor Densidade Populacional: Carta 1 Venceu? (%d)\n", densidade1 < densidade2);
    printf("Maior PIB per Capita: Carta 1 venceu? (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Maior Super Poder!: Carta 1 venceu? (%d)\n", superPoder1 > superPoder2);

    return 0;

}