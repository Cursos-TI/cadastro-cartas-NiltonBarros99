#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // CIDADE1
  char estado1;
  char codigo1[5];
  char cidade1[50];
  unsigned int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidade1;
  float pibpercapita1;
  float superpoder1;

// CIDADE 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  unsigned int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float pibpercapita2;
  float superpoder2;
  
  
  
  // Área para entrada de dados da primeira carta.

  printf("Digite uma letra de 'A a H' que represente seu Estado: \n");
  scanf(" %c", &estado1);
  
  printf("Agora digite a letra, juntamente com o código inserido em sua carta:  \n");
  scanf (" %s", codigo1);
  
  printf("OK! Informe o nome de sua cidade:     \n");
  scanf (" %s", cidade1);

  printf("Perfeito. Nos informe o tamanho da população de sua cidade:           \n");
  scanf(" %u", &populacao1);

  printf("Informe a Área de sua cidade em (km²):         \n");
  scanf(" %f", &area1);

  printf("Digite o PIB de sua cidade:         \n");
  scanf(" %f", &pib1);

  printf("Por último, nos informe a quantidade de pontos turísticos de sua cidade:  \n");
  scanf(" %d", &pontosturisticos1);

  // Área de cálculos para obtenção do resultado da densidade e Pibpercapita da carta 1

  densidade1 = populacao1 / area1; 
  pibpercapita1 = (pib1 * 1000000000.0) / populacao1;

  // Área de Cálculo do SUPER PODER da carta 1.

  superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidade1);
  
  //Área para entrada de dados da segunda carta.

  printf("OK. Vamos para a segunda carta! \n");
  printf("Digite uma letra de 'A a H' que represente seu Estado: \n");
  scanf (" %c", &estado2);

  printf("Agora digite a letra, juntamente com o código inserido em sua carta:  \n");
  scanf (" %s", codigo2);
  
  printf("Informe o nome de sua cidade:             \n");
  scanf(" %s", cidade2);

  printf("Informe o tamanho da população de sua cidade:           \n");
  scanf(" %u", &populacao2);

  printf("Informe a Área de sua cidade em (km²):         \n");
  scanf(" %f", &area2);

  printf("Digite o PIB de sua cidade:         \n");
  scanf(" %f", &pib2);

  printf("Por último, nos informe a quantidade de pontos turísticos de sua cidade:  \n");
  scanf(" %d", &pontos2);

  // Área de cálculos para obtenção do resultado da densidade e do pibpercapita da carta 2

  densidade2 = populacao2 / area2;
  pibpercapita2 = (pib2 * 1000000000.0) / populacao2;

  // Área de Cálculo do SUPER PODER da carta 2.
  
  superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1 / densidade2);
 
  //Área de exibição dos dados da primeira cidade.
  
  printf("\n");
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %.3s \n",codigo1);
  printf("Nome da sua cidade: %s \n", cidade1);
  printf("População: %u  \n", populacao1);
  printf("Área em (km²): %.3fkm² \n", area1);
  printf("PIB: %.1f Bilhões de reais   \n", pib1);
  printf("Pontos turísticos: %d \n", pontosturisticos1);
  printf("Densidade Populacional: %.2f Hab/km² \n", densidade1);
  printf("PIB per Capita:  %.2f reais \n", pibpercapita1);
  printf("Super Poder: %f\n", superpoder1);
  printf("\n");
  
  // Área de exibição de dados da segunda cidade.

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %.3s \n", codigo2);
  printf("Nome da sua cidade: %s \n", cidade2);
  printf("População: %u \n", populacao2);
  printf("Área em (km²): %.0fkm² \n", area2);
  printf("PIB: %.0f Bilhões de reais   \n", pib2);
  printf("Pontos turísticos: %d \n", pontos2);
  printf("Densidade Populacional: %.2f Hab/km² \n", densidade2);
  printf("PIB per Capita:  %.2f reais \n", pibpercapita2);
  printf("Super Poder: %f\n", superpoder2);

  // Área de comparações
  printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);


 return 0;
} 
