#include <stdio.h>

int main()
{
    char estado;
    char codigo[20];
    char nome_cidade[20];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turistico;
    float densidade_populacional;
    float pib_per_capita;
    float superpoder;

    char estado2;
    char codigo2[20];
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turistico2;
    float densidade_populacional2;
    float pib_per_capita2;
    float superpoder2;

    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turistico;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;

    /*
    Para cada carta, foi criado uma variavel especifica, por exemplo:
    as variaveis que correspondem a CARTA1, todas elas não possuem
    o numero 2 no final.

    Já as variaveis que correspondem a CARTA2, todas elas possuem
    o numero2 ao final do nome. Fiz dessa forma com o intuito de não mudar tanto
    o nome da variavel e mantê-lo o mais autoexplicativo possível.
    */
   
    printf("\n***** Digite as informações referente a carta1 *****\n");

    printf("Digite o primeiro ESTADO que corresponde a carta 1: \n");
    scanf(" %c", &estado);

    printf("Digite o primeiro CODIGO que corresponde a carta 1: \n");
    scanf("%s", &codigo);

    printf("Digite o primeiro NOME DA CIDADE que corresponde a carta 1: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a primeira quantidade de POPULAÇÃO que corresponde a carta 1: \n");
    scanf("%lu", &populacao);

    printf("Digite a primeira quantidade de metro quadrado da ÁREA que corresponde a carta 1: \n");
    scanf("%f", &area);

    printf("Digite o primeiro PIB que corresponde a carta 1: \n");
    scanf("%f", &pib);

    printf("Digite a primeira quantidade de PONTOS TURÍSTICOS que corresponde a carta 1: \n");
    scanf("%d", &pontos_turistico);

    densidade_populacional = (float) populacao / area;
    densidade_populacional = 1 / densidade_populacional;

    pib_per_capita = (float)(pib * 1000000000) / populacao;

    superpoder = (float) (populacao + area + pib + pontos_turistico + pib_per_capita + densidade_populacional);
    
    // CARTA 2
    
    printf("\n***** Digite as informações referente a carta2 *****\n");

    printf("Digite o segundo ESTADO que corresponde a carta 2: \n");
    scanf(" %c", &estado2);

    
    printf("Digite o segundo CODIGO que corresponde a carta 2: \n");
    scanf("%s", &codigo2);

    
    printf("Digite o segundo NOME DA CIDADE que corresponde a carta 2: \n");
    scanf("%s", &nome_cidade2);

    
    printf("Digite a segunda quantidade de POPULAÇÃO que corresponde a carta 2: \n");
    scanf("%lu", &populacao2);

    
    printf("Digite a segunda quantidade de metro quadrado da ÁREA que corresponde a carta 2: \n");
    scanf("%f", &area2);

    
    printf("Digite o segundo PIB que corresponde a carta 2: \n");
    scanf("%f", &pib2);

    
    printf("Digite a segunda quantidade de PONTOS TURÍSTICOS que corresponde a carta 2: \n");
    scanf("%d", &pontos_turistico2);

    densidade_populacional2 = (float) populacao2 / area2;
    densidade_populacional2 = 1 / densidade_populacional2;

    pib_per_capita2 = (float)(pib2 * 1000000000) / populacao2;

    superpoder2 = (float) (populacao2 + area2 + pib2 + pontos_turistico2 + pib_per_capita2 + densidade_populacional2);

    // RESULTADOS COMPARAÇÕES 
    resultado_populacao = populacao > populacao2;
    printf("\nPopulação: Carta 1 venceu(%d)\n", resultado_populacao);

    resultado_area = area > area2;
    printf("Área: Carta 1 venceu(%d)\n", resultado_area);

    resultado_pib =  pib > pib2;
    printf("PIB: Carta 1 venceu(%d)\n", resultado_pib);

    resultado_pontos_turistico = pontos_turistico > pontos_turistico2;
    printf("Pontos Turísticos: Carta 1 venceu(%d)\n", resultado_pontos_turistico);

    resultado_densidade = densidade_populacional > densidade_populacional2;
    printf("Densidade Populacional: Carta 2 venceu(%d)\n", resultado_densidade);

    resultado_pib_per_capita = pib_per_capita > pib_per_capita2;
    printf("PIB per Capita: Carta 1 venceu(%d)\n", resultado_pib_per_capita);

    resultado_super_poder = superpoder > superpoder2;
    printf("Super Poder: Carta 1 venceu(%d)\n", resultado_super_poder);

    return 0;
}