#include <stdio.h>

int main() {
    

    char estado;
    char codigo[20];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turistico;

    char estado2;
    char codigo2[20];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turistico2;

    /*
    Para cada carta, foi criado uma variavel especifica, por exemplo:
    as variaveis que correspondem a CARTA1, todas elas não possuem 
    o numero 2 no final.

    Já as variaveis que correspondem a CARTA2, todas elas possuem
    o numero2 ao final do nome. Fiz dessa forma com o intuito de não mudar tanto 
    o nome da variavel e mantê-lo o mais autoexplicativo possível.
    */
   
    printf("Digite o primeiro ESTADO que corresponde a carta 1: \n");
    scanf(" %c", &estado);
    printf("Digite o segundo ESTADO que corresponde a carta 2: \n");
    scanf(" %c", &estado2);
 
    printf("Digite o primeiro CODIGO que corresponde a carta 1: \n");
    scanf("%s", &codigo);
    printf("Digite o segundo CODIGO que corresponde a carta 2: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o primeiro NOME DA CIDADE que corresponde a carta 1: \n");
    scanf("%s", &nome_cidade);
    printf("Digite o segundo NOME DA CIDADE que corresponde a carta 2: \n");
    scanf("%s", &nome_cidade2);

    printf("Digite a primeira quantidade de POPULAÇÃO que corresponde a carta 1: \n");
    scanf("%d", &populacao);
    printf("Digite a segunda quantidade de POPULAÇÃO que corresponde a carta 2: \n");
    scanf("%d", &populacao2);
    
    printf("Digite a primeira quantidade de metro quadrado da ÁREA que corresponde a carta 1: \n");
    scanf("%f", &area);
    printf("Digite a segunda quantidade de metro quadrado da ÁREA que corresponde a carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o primeiro PIB que corresponde a carta 1: \n");
    scanf("%f", &pib);
    printf("Digite o segundo PIB que corresponde a carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a primeira quantidade de PONTOS TURÍSTICOS que corresponde a carta 1: \n");
    scanf("%d", &pontos_turistico);
    printf("Digite a segunda quantidade de PONTOS TURÍSTICOS que corresponde a carta 2: \n");
    scanf("%d", &pontos_turistico2);

    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turistico);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turistico2);

    return 0;
}
