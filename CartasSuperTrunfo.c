#include <stdio.h>

int main(){

    //Declarando as variáveis com as informações das cartas.
    char estado1 = 0, estado2 = 0;
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char pais1[50], pais2[50];
    
    unsigned int populacao1, populacao2;
    unsigned int pontosTuristicos1, pontosTuristicos2;
    unsigned int escolhaParametro;
    
    float area1, area2;
    float pib1, pib2;
    float pibPerCapita1, pibPerCapita2; 
    float densidade1, densidade2;

    //Exibindo o título
    printf("==============================\n");
    printf("=   SUPER TRUNFO DE PAÍSES   =\n");
    printf("==============================\n");
    
    //Pegando as informaçãoes da carta 1
    printf("INFORMAÇÕES DA CARTA 1\n");

    printf("Insira o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Insira o código da carta 1: ");
    scanf("%3s", codigoDaCarta1);

    printf("Insira o nome do país da carta 1: ");
    scanf("%s", pais1);

    printf("Insira a população da carta 1: ");
    scanf("%u", &populacao1);

    printf("Insira a área (em km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da carta 1: ");
    scanf("%u", &pontosTuristicos1);
    
    //Calculando a densidade demográfica do país 1
    densidade1 = (float)populacao1 / area1;
    
    //Calculando o Pib per Capita do país 1
    pibPerCapita1 = (pib1 * 1000000000.0)/ (float)populacao1;


    //Pegando as informaçãoes da carta 2
    printf("\nINFORMAÇÕES DA CARTA 2\n");

    printf("Insira o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta 2: ");
    scanf("%3s", codigoDaCarta2);

    printf("Insira o nome do país da carta 2: ");
    scanf("%s", pais2);

    printf("Insira a população da carta 2: ");
    scanf("%u", &populacao2);

    printf("Insira a área (em km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da carta 2: ");
    scanf("%u", &pontosTuristicos2);
    
    //Calculando a densidade demográfica da país 2
    densidade2 = (float)populacao2 / area2;
    
    //Calculando o Pib per Capita do país 2
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    
    //Escolhendo o parâmetro de comparação
    printf("\n===== MENU DE PARÂMETROS DE COMPARAÇÃO =====\n");
    printf("1. Nome dos países\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    printf("============================================\n");
    printf("\nEscolha o parâmetro: ");
    scanf("%u", &escolhaParametro);
    
    
    //Fazendo a comparação de valores das duas cartas e exibindo os resultados
    switch(escolhaParametro){
        case 1:
            printf("\nPAÍS 1: %s\n", pais1);
            printf("PAÍS 2: %s\n", pais2);
        break;
        case 2:
            printf("\nMAIOR POPULAÇÃO\n");
            printf("CARTA 1(%s): %u\n", pais1, populacao1);
            printf("CARTA 2(%s): %u\n", pais2, populacao2);
            if(populacao1 == populacao2){
                printf("EMPATE!");
            }else if(populacao1 > populacao2){
                printf("VENCEDOR: %s\n", pais1);
            }else{
                printf("VENCEDOR: %s\n", pais2);
            }
        break;
        case 3:
            printf("\nMAIOR ÁREA\n");
            printf("CARTA 1(%s): %.2f\n", pais1, area1);
            printf("CARTA 2(%s): %.2f\n", pais2, area2);
            if(area1 == area2){
                printf("EMPATE!");
            }else if(area1 > area2){
                printf("VENCEDOR: %s\n", pais1);
            }else{
                printf("VENCEDOR: %s\n", pais2);
            }
        break;
        case 4:
            printf("\nMAIOR PIB\n");
            printf("CARTA 1(%s): %.2f\n", pais1, pib1);
            printf("CARTA 2(%s): %.2f\n", pais2, pib2);
            if(pib1 == pib2){
                printf("EMPATE!");
            }else if(pib1 > pib2){
                printf("VENCEDOR: %s\n", pais1);
            }else{
                printf("VENCEDOR: %s\n", pais2);
            }
        break;
        case 5:
            printf("\nMAIOR NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("CARTA 1(%s): %u\n", pais1, pontosTuristicos1);
            printf("CARTA 2(%s): %u\n", pais2, pontosTuristicos2);
            if(pontosTuristicos1 == pontosTuristicos2){
                printf("EMPATE!");
            }else if(pontosTuristicos1 > pontosTuristicos2){
                printf("VENCEDOR: %s\n", pais1);
            }else{
                printf("VENCEDOR: %s\n", pais2);
            }
        break;
        case 6:
            printf("\nMENOR DENSIDADE DEMOGRÁFICA\n");
            printf("CARTA 1(%s): %.2f\n", pais1, densidade1);
            printf("CARTA 2(%s): %.2f\n", pais2, densidade2);
            if(densidade1 == densidade2){
                printf("EMPATE!");
            }else if(densidade1 < densidade2){
                printf("VENCEDOR: %s\n", pais1);
            }else{
                printf("VENCEDOR: %s\n", pais2);
            }
        break;
        default:
            printf("Valor Inválido");
    }
    
    return 0;

}