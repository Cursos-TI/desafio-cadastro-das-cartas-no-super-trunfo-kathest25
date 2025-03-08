#include <stdio.h>

int main(){
    //Variáveis declaradas
    char estado1[0];
    char estado2[0];
    char codigo1[2];
    char codigo2[2];
    char cidade1[20];
    char cidade2[20];
    int populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int npturisticos1,npturisticos2;

    //Programa começa a rodar:
    printf("Olá! Seja bem-vindo ao jogo Super Trunfo Países!\n");

    // Inserção dos dados para a Carta 1

    printf("Digite a inicial do Estado da Carta 1, indicando uma letra (de A a H): \n");
    scanf("%s",estado1);
    printf("Digite o código da Carta 1, que é a inicial do Estado junto com um número de 01 a 04: \n");
    scanf("%s",codigo1);
    printf("Agora digite a cidade da Carta 1: \n");
    scanf("%s",cidade1);
    printf("Agora digite a população da Carta 1: \n");
    scanf("%d",&populacao1);
    printf("Agora digite o valor da área da Carta 1 (em Km2): \n");
    scanf("%f",&area1);
    printf("Agora digite o PIB da Carta 1 (bilhões de reais): \n");
    scanf("%f",&pib1);
    printf("Agora digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d",&npturisticos1);

    // Impressão das informacoes da Carta 1
    printf("Informações da Carta 1: \n");
    printf("Estado:%s\n",estado1); 
    printf("Código:%s\n",codigo1);
    printf("Cidade:%s\n",cidade1);
    printf("Populacao:%d\n",populacao1); 
    printf("Área:%.2f km²\n",area1);
    printf("PIB:%.2f bilhões de reais\n",pib1);
    printf("Número de pontos turísticos:%d\n",npturisticos1);
    
    // Inserção dos dados para a Carta 2
    printf("Finalizamos a Carta 1! Agora insira as informações da Carta 2.\n");

    printf("Digite a inicial do Estado da Carta 2, indicando uma letra (de A a H): \n");
    scanf("%s",estado2);
    printf("Digite o código da Carta 2, que é a inicial do Estado junto com um número de 01 a 04: \n");
    scanf("%s",codigo2);
    printf("Agora digite a cidade da Carta 2: \n");
    scanf("%s",cidade2);
    printf("Agora digite a população da Carta 2: \n");
    scanf("%d",&populacao2);
    printf("Agora digite o valor da área da Carta 2 (em Km2): \n");
    scanf("%f",&area2);
    printf("Agora digite o PIB da Carta 2 (em bilhões de reais): \n");
    scanf("%f",&pib2);
    printf("Agora digite o número de pontos turísticos da Carta 2: \n");
    scanf(" %d",&npturisticos2);

    // Impressão das informacoes da Carta 2
    printf("Informações da Carta 2: \n");
    printf("Estado:%s\n",estado2); 
    printf("Código:%s\n",codigo2);
    printf("Cidade:%s\n",cidade2);
    printf("Populacao:%d\n",populacao2); 
    printf("Área:%.2f km²\n",area2);
    printf("PIB:%.2f bilhões de reais\n",pib2);
    printf("Número de pontos turísticos:%d\n",npturisticos2);
    
    return 0;
}
