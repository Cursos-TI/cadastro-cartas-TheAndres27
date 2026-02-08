#include <stdio.h>
#include <string.h>

int main(){
    // =====================================================
    // DECLARAÇÃO DAS VARIÁVEIS DAS DUAS CARTAS
    // =====================================================
    // Cada carta representa uma cidade/país com seus atributos

    // -------- Carta 1 --------
    char estado1, cod_carta1[10], nome_cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, PerCapita1, superpoder1;
    int ponto_turisticos1;
    
    // -------- Carta 2 --------;
    char estado2,  cod_carta2[10], nome_cidade2[50] ;
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, PerCapita2, superpoder2;
    int ponto_turisticos2;
   
    // =====================================================
    // CADASTRO DOS DADOS DA CARTA 1
    // =====================================================
    printf("Digite o estado da carta1-(de A-H): ");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta1: ");
    scanf("%s", cod_carta1);
    // fgets permite ler nomes com espaço
    printf("Digite o nome da cidade1: ");
    getchar(); // limpa o ENTER deixado pelo scanf
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    // remove o \n do final da string
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Digite o tamanho da população1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área(em km²) da cidade1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade1: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &ponto_turisticos1);
    // =====================================================
    // CÁLCULOS AUTOMÁTICOS CARTA 1
    // =====================================================

    // densidade = população / área
    densidade_populacional1 = populacao1 / area1;
    // PIB per capita = PIB total / população
    PerCapita1 = (pib1 * 1000000000) / populacao1;
    // superpoder = soma geral de atributos (métrica extra do jogo)
    superpoder1 = (float)populacao1 + area1 + pib1 +
                  ponto_turisticos1 + PerCapita1 +
                  (1.0f / densidade_populacional1);
    // =====================================================
    // CADASTRO DOS DADOS DA CARTA 2
    // =====================================================
    printf("\nDigite o estado da carta2-(de A-H): ");
    scanf(" %c", &estado2); // espaço antes ignora ENTER pendente

    printf("Digite o codigo da carta2: ");
    scanf("%s", cod_carta2);

    printf("Digite o nome da cidade2: ");
    getchar();
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Digite o tamanho da população2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área(em km²) da cidade2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &ponto_turisticos2);
    // =====================================================
    // CÁLCULOS AUTOMÁTICOS CARTA 2
    // =====================================================
    densidade_populacional2 = populacao2 / area2;
    PerCapita2 = (pib2 * 1000000000) / populacao2;

    superpoder2 = (float)populacao2 + area2 + pib2 +
                  ponto_turisticos2 + PerCapita2 +
                  (1.0f / densidade_populacional2);
    // =====================================================
    // EXIBIÇÃO DOS DADOS DAS CARTAS
    // =====================================================
    printf("\n== Carta 1 ==\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", ponto_turisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PerCapita1);


    printf("\n== Carta 2 ==\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", ponto_turisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PerCapita2);
    // =====================================================
    // MENU INTERATIVO COM SWITCH
    // Usuário escolhe qual atributo será comparado
    // =====================================================
    // =====================================================
    // COMPARAÇÃO AVANÇADA - DOIS ATRIBUTOS (NÍVEL MESTRE)
    // =====================================================

    int op1, op2;

    printf("\n======= SUPER TRUNFO - NÍVEL MESTRE =======\n");
    // ======================
    // MENU DO 1º ATRIBUTO
    // ======================
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("Opcao: ");
    scanf("%d", &op1);
    // ======================
    // MENU DO 2º ATRIBUTO (dinâmico)
    // ======================
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for(int i = 1; i <= 5; i++){
        if(i != op1){ // não mostra o já escolhido
            switch(i){
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos turísticos\n"); break;
                case 5: printf("5 - Densidade demográfica\n"); break;
            }
        }
    }

    printf("Opcao: ");
    scanf("%d", &op2);
    // impede repetição
    if(op1 == op2){
        printf("Erro: atributos iguais não são permitidos!\n");
        return 0;
    }
    // =====================================================
    // VARIÁVEIS AUXILIARES PARA GUARDAR VALORES ESCOLHIDOS
    // =====================================================
    float v1_c1 = 0, v1_c2 = 0;
    float v2_c1 = 0, v2_c2 = 0;

    char nome_attr1[40];
    char nome_attr2[40];
    // =====================================================
    // FUNÇÃO DE SELEÇÃO DOS VALORES (switch)
    // =====================================================

    // ---------- atributo 1 ----------
    switch(op1){
        case 1:
            strcpy(nome_attr1, "População");
            v1_c1 = populacao1;
            v1_c2 = populacao2;
        break;

        case 2:
            strcpy(nome_attr1, "Área");
            v1_c1 = area1;
            v1_c2 = area2;
        break;

        case 3:
            strcpy(nome_attr1, "PIB");
            v1_c1 = pib1;
            v1_c2 = pib2;
        break;

        case 4:
            strcpy(nome_attr1, "Pontos turísticos");
            v1_c1 = ponto_turisticos1;
            v1_c2 = ponto_turisticos2;
        break;

        case 5:
            strcpy(nome_attr1, "Densidade demográfica");
            v1_c1 = densidade_populacional1;
            v1_c2 = densidade_populacional2;
        break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }
    // ---------- atributo 2 ----------
    switch(op2){
        case 1:
            strcpy(nome_attr2, "População");
            v2_c1 = populacao1;
            v2_c2 = populacao2;
        break;

        case 2:
            strcpy(nome_attr2, "Área");
            v2_c1 = area1;
            v2_c2 = area2;
        break;

        case 3:
            strcpy(nome_attr2, "PIB");
            v2_c1 = pib1;
            v2_c2 = pib2;
        break;

        case 4:
            strcpy(nome_attr2, "Pontos turísticos");
            v2_c1 = ponto_turisticos1;
            v2_c2 = ponto_turisticos2;
        break;

        case 5:
            strcpy(nome_attr2, "Densidade demográfica");
            v2_c1 = densidade_populacional1;
            v2_c2 = densidade_populacional2;
        break;
    }
    // =====================================================
    // REGRA DA DENSIDADE (menor vence)
    // Transformamos para inverso para poder somar
    // =====================================================
    if(op1 == 5){
        v1_c1 = 1 / v1_c1;
        v1_c2 = 1 / v1_c2;
    }

    if(op2 == 5){
        v2_c1 = 1 / v2_c1;
        v2_c2 = 1 / v2_c2;
    }
    // =====================================================
    // SOMA DOS ATRIBUTOS
    // =====================================================
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;
    // operador ternário para decidir vencedor
    char *vencedor =
        (soma1 > soma2) ? nome_cidade1 :
        (soma2 > soma1) ? nome_cidade2 :
        "Empate";
    // =====================================================
    // EXIBIÇÃO FINAL
    // =====================================================
    printf("\n========= RESULTADO FINAL =========\n");
    printf("%s X %s\n\n", nome_cidade1, nome_cidade2);

    printf("%s -> %.2f | %.2f\n", nome_attr1, v1_c1, v1_c2);
    printf("%s -> %.2f | %.2f\n", nome_attr2, v2_c1, v2_c2);

    printf("\nSoma %s: %.2f\n", nome_cidade1, soma1);
    printf("Soma %s: %.2f\n", nome_cidade2, soma2);

    if(strcmp(vencedor, "Empate") == 0)
        printf("\nEmpate!\n");
    else
        printf("\nVencedor: %s\n", vencedor);
    // =====================================================
    // FIM DO PROGRAMA
    // =====================================================
    return 0;
}
