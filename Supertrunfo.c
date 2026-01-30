#include <stdio.h>
#include <string.h>


int main(){
    //Variaveis carta 1
    char estado1;
    char cod_carta1 [10];
    char nome_cidade1 [50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    float densidade_populacional1;
    float PerCapita1;
    int ponto_turisticos1;
    float superpoder1;
    

    //Variaveis carta 2
    char estado2;
    char cod_carta2 [10] ;
    char nome_cidade2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    float densidade_populacional2;
    float PerCapita2;
    int ponto_turisticos2;
    float superpoder2;

    //pedindo informações carta 1
    printf("Digite o estado da carta1-(de A-H):");
    scanf("%c", &estado1);
    
      printf("Digite o codigo da carta1:");
    scanf("%s", cod_carta1);

     printf("Digite o nome da cidade1:");
getchar(); 
fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

      printf("Digite o tamanho da população1:");
    scanf("%lu", &populacao1);

      printf("Digite a área(em km²) da cidade1:");
    scanf("%f", &area1);

      printf("Digite o PIB da cidade1:");
    scanf("%f", &pib1);

      printf("Digite a quantidade de pontos turisticos:");
    scanf("%d", &ponto_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    PerCapita1 = (pib1 * 1000000000) / populacao1;


    superpoder1 = (float)populacao1 
        + area1 + 
        pib1 + 
        ponto_turisticos1 + 
        PerCapita1 + (1.0f / densidade_populacional1);



     //pedindo informações carta 2
    printf("Digite o estado da carta2-(de A-H):");
    scanf("%c", &estado2);
    
      printf("Digite o codigo da carta2:");
    scanf("%s", cod_carta2);

     printf("Digite o nome da cidade2:");
getchar();
fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

      printf("Digite o tamanho da população2:");
    scanf(" %lu", &populacao2);

      printf("Digite a área(em km²) da cidade2:");
    scanf(" %f", &area2);

      printf("Digite o PIB da cidade2:");
    scanf(" %f", &pib2);

      printf("Digite a quantidade de pontos turisticos:");
    scanf(" %d", &ponto_turisticos2);

     densidade_populacional2 = populacao2 / area2 ;
     PerCapita2 = (pib2 * 1000000000) / populacao2;

    superpoder2 = (float)populacao2 +
        area2 + 
        pib2 +
        ponto_turisticos2 + 
        PerCapita2 + (1.0f / densidade_populacional2);


    //Mostrando carta 1

    printf("==Carta1==:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1 );
    printf("PIB: %.2f\n bilhões de reais", pib1);
    printf("Número de pontos turisticos: %d\n", ponto_turisticos1);


    printf("Densidade populacional: %f hab/km² \n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PerCapita1);

    //Mostrando carta 2

    printf("==Carta2==\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km² \n ", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turisticos: %d\n", ponto_turisticos2);


    printf("Densidade populaciona2: %f hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PerCapita2);

    //comparação de cartas
    printf("\n-- Comparação de cartas--\n");
    printf("População: Carta1 vence(%d)\n", populacao1 > populacao2);
    printf("Área: Carta1 vence(%d)\n", area1 > area2);
    printf("PIB: Carta1 vence(%d)\n", pib1 > pib2 );
    printf("Pontos turisticos: Carta1 vence(%d)\n", ponto_turisticos1 > ponto_turisticos2);

    //Densidade menor vence

    printf("Densidade Populacional: Carta2 vence(%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta1 vence(%d)\n", PerCapita1 > PerCapita2);
    printf("Super Poder: Carta1 vence(%d)\n", superpoder1 > superpoder2);
    //fim do programa
    return 0;


}
