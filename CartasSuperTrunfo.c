#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
// Área para definição das variáveis para armazenar as propriedades das cidades
      
int carta1, carta2, p_turisticos1, p_turisticos2, populacao1, populacao2;
char estado1[20], estado2[20], codigo1[4], codigo2[4], n_cidade1[20], n_cidade2[20];
float area_em_km1, area_em_km2, pib1, pib2;
// Área para entrada de dados

printf("Bem vindo ao jogo Super Trunfo Países!\n");

printf("Digite o número da carta:");
scanf("%d", &carta1);

printf("Digite a letra referênte ao Estado de A a H:");
scanf(" %s", estado1);

printf("Digite o Código da carta:");
scanf(" %s", codigo1);

printf("Digite o nome da Cidade:");
scanf(" %[^\n]", n_cidade1);

printf("Digite o número da população:");
scanf("%d", &populacao1);

printf("Digite a área em Km²:");
scanf("%f", &area_em_km1);

printf("Digite o PIB da Cidade:");
scanf("%f", &pib1);

printf("Digite o número de pontos turisticos:");
scanf("%d", &p_turisticos1);

// Entrada de dados da carta 2.

printf("Digite os dados da segunda carta.\n");
printf("Digite o número da carta:");
scanf("%d", &carta2);

printf("Digite a letra referênte ao Estado de A a H:");
scanf(" %s", estado2);

printf("Digite o código da carta:");
scanf(" %s", codigo2);

printf("Digite o nome da Cidade:");
scanf(" %[^\n]", n_cidade2);


printf("Digite o número população:");
scanf("%d", &populacao2);

printf("Digite a área em Km²:");
scanf("%f", &area_em_km2);

printf("Digite o PIB da Cidade:");
scanf("%f", &pib2);

printf("Digite o número de pontos turisticos:");
scanf("%d", &p_turisticos2);
                                                                                      
// Área para exibição dos dados da cidade

printf("\n--- Carta 1 ---: %d\n", carta1);

printf("Estado: %s\n", estado1);

printf("Código: %s\n", codigo1);

printf("Nome da Cidade: %s\n", n_cidade1);

printf("População: %d\n", populacao1);

printf("Área: %f\n", area_em_km1);

printf("PIB: %f\n", pib1);
                                                                                                        
printf("Número de Pontos Turísticos: %d\n", p_turisticos1);

printf("\n--- Carta 2 ---: %d\n", carta2);

printf("Estado: %s\n", estado2);

printf("Código: %s\n", codigo2);

printf("Nome da Cidade: %s\n", n_cidade2);

printf("População: %d\n", populacao2);

printf("Área: %f\n", area_em_km2);

printf("PIB: %f\n", pib2);

printf("Número de Pontos Turísticos: %d\n", p_turisticos2);

// Área reservada a saídas do terminal,

printf("Carta: %d\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea:%f km2\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", carta1, estado1, codigo1, n_cidade1, populacao1, area_em_km1, pib1, p_turisticos1);
printf("Carta: %d\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea:%f km2\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d", carta2, estado2, codigo2, n_cidade2, populacao2, area_em_km2, pib2, p_turisticos2);

return 0;
}