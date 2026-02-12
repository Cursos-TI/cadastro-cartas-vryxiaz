#include <stdio.h>

int main(){

    //Declarando as variáveis com as informações das cartas.
    char estado1 = 0, estado2 = 0, codigoDaCarta1[4] = "", codigoDaCarta2[4] = "", cidade1[50] = "", cidade2[50] = "";
    unsigned int populacao1 = 0, populacao2 = 0, pontosTuristicos1 = 0, pontosTuristicos2 = 0;
    float area1 = 0.0, area2 = 0.0, pib1 = 0.0, pib2 = 0.0, pibPerCapita1 = 0.0, pibPerCapita2 = 0.0, 
    densidade1 = 0.0, densidade2 = 0.0;

    //Exibindo o título
    printf("=== SUPER TRUNFO DE PAÍSES ===\n");
    
    //Pegando as informaçãoes da carta 1
    printf("INFORMAÇÕES DA CARTA 1\n");

    printf("Insira o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Insira o código da carta 1: ");
    scanf("%3s", codigoDaCarta1);

    printf("Insira o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Insira a população da carta 1: ");
    scanf("%u", &populacao1);

    printf("Insira a área (em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da carta 1: ");
    scanf("%u", &pontosTuristicos1);
    
    //Calculando a densidade demográfica da cidade 1
    densidade1 = (float)populacao1 / area1;
    
    //Calculando o Pib per Capita da cidade 1
    pibPerCapita1 = (pib1 * 1000000000.0)/ (float)populacao1;


    //Pegando as informaçãoes da carta 2
    printf("\nINFORMAÇÕES DA CARTA 2\n");

    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta 2: ");
    scanf("%3s", codigoDaCarta2);

    printf("Insira o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Insira a população da carta 2: ");
    scanf("%u", &populacao2);

    printf("Insira a área (em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da carta 2: ");
    scanf("%u", &pontosTuristicos2);
    
    //Calculando a densidade demográfica da cidade 2
    densidade2 = (float)populacao2 / area2;
    
    //Calculando o Pib per Capita da cidade 2
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    //Fazendo a comparação de valores das duas cartas
    printf("\nMAIOR POPULAÇÃO\n");
    printf("CARTA 1(%s): %u\n", cidade1, populacao1);
    printf("CARTA 2(%s): %u\n", cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("VENCEDOR: %s\n", cidade1);
    }else{
        printf("VENCEDOR: %s\n", cidade2);
    }
    
    printf("\nMAIOR ÁREA\n");
    printf("CARTA 1(%s): %.2f\n", cidade1, area1);
    printf("CARTA 2(%s): %.2f\n", cidade2, area2);
    if(area1 > area2){
        printf("VENCEDOR: %s\n", cidade1);
    }else{
        printf("VENCEDOR: %s\n", cidade2);
    }
    
    printf("\nMAIOR PIB BRUTO\n");
    printf("CARTA 1(%s): %.2f\n", cidade1, pib1);
    printf("CARTA 2(%s): %.2f\n", cidade2, pib2);
    if(pib1 > pib2){
        printf("VENCEDOR: %s\n", cidade1);
    }else{
        printf("VENCEDOR: %s\n", cidade2);
    }
    
    printf("\nMAIOR NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("CARTA 1(%s): %u\n", cidade1, pontosTuristicos1);
    printf("CARTA 2(%s): %u\n", cidade2, pontosTuristicos2);
    if(pontosTuristicos1 > pontosTuristicos2){
        printf("VENCEDOR: %s\n", cidade1);
    }else{
        printf("VENCEDOR: %s\n", cidade2);
    }
    
    printf("\nMENOR DENSIDADE DEMOGRÁFICA\n");
    printf("CARTA 1(%s): %.2f\n", cidade1, densidade1);
    printf("CARTA 2(%s): %.2f\n", cidade2, densidade2);
    if(densidade1 < densidade2){
        printf("VENCEDOR: %s\n", cidade1);
    }else{
        printf("VENCEDOR: %s\n", cidade2);
    }
    
    printf("\nMAIOR PIB PER CAPITA\n");
    printf("CARTA 1(%s): %.2f\n", cidade1, pibPerCapita1);
    printf("CARTA 2(%s): %.2f\n", cidade2, pibPerCapita2);
    if(pibPerCapita1 > pibPerCapita2){
        printf("VENCEDOR: %s\n", cidade1);
    }else{
        printf("VENCEDOR: %s\n", cidade2);
    }
    
    return 0;
}