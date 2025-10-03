#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // CIDADE1
  char Estado;
  char Código[3];
  char Cidade[50];
  unsigned int População;
  float Área;
  float PIB;
  int Pontosturísticos;
  float Densidade;
  float Pibpercapita1;

// CIDADE 2
  char estado;
  char código[3];
  char cidade[20];
  unsigned int população;
  float area;
  float pib;
  int Pontos;
  float Densidade2;
  float Pibpercapita2;
  
  
  
  // Área para entrada de dados da primeira carta.

  printf("Digite uma letra de 'A a H' que represente seu Estado: \n");
  scanf(" %s", &Estado);
  
  printf("Agora digite a letra, juntamente com o código inserido em sua carta:  \n");
  scanf (" %s", Código);
  
  printf("OK! Informe o nome de sua cidade:     \n");
  scanf (" %s", Cidade);

  printf("Perfeito. Nos informe o tamanho da população de sua cidade:           \n");
  scanf(" %u", &População);

  printf("Informe a Área de sua cidade em (km²):         \n");
  scanf(" %f", &Área);

  printf("Digite o PIB de sua cidade:         \n");
  scanf(" %f", &PIB);

  printf("Por último, nos informe a quantidade de pontos turísticos de sua cidade:  \n");
  scanf(" %d", &Pontosturísticos);

  // Área de cálculos para obtenção do resultado da densidade e Pibpercapita da carta 1

  Densidade = População / Área; 
  Pibpercapita1 = PIB / População;
  
  //Área para entrada de dados da segunda carta.

  printf("OK. Vamos para a segunda carta! \n");
  printf("Digite uma letra de 'A a H' que represente seu Estado: \n");
  scanf (" %s", &estado);

  printf("Agora digite a letra, juntamente com o código inserido em sua carta:  \n");
  scanf (" %s", código);
  
  printf("Informe o nome de sua cidade:             \n");
  scanf(" %s", cidade);

  printf("Informe o tamanho da população de sua cidade:           \n");
  scanf(" %u", &população);

  printf("Informe a Área de sua cidade em (km²):         \n");
  scanf(" %f", &area);

  printf("Digite o PIB de sua cidade:         \n");
  scanf(" %f", &pib);

  printf("Por último, nos informe a quantidade de pontos turísticos de sua cidade:  \n");
  scanf(" %d", &Pontos);

  // Área de cálculos para obtenção do resultado da densidade da carta 2

  Densidade2 = população / area;
  Pibpercapita2 = pib / população;
  
 
  //Área de exibição dos dados da primeira cidade.
  
  printf("\n");
  printf("Carta 1: \n");
  printf("Estado: %c \n", Estado);
  printf("Código: %.3s \n", Código);
  printf("Nome da sua cidade: %s \n", Cidade);
  printf("População: %lld  \n", População);
  printf("Área em (km²): %.3fkm² \n", Área);
  printf("PIB: %.1f Bilhões de reais   \n", PIB);
  printf("Pontos turísticos: %d \n", Pontosturísticos);
  printf("Densidade Populacional: %.2f Hab/km² \n", Densidade);
  printf("PIB per Capita:  %.2f reais \n", Pibpercapita1);
  printf("\n");
  
  // Área de exibição de dados da segunda cidade.

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado);
  printf("Código: %.3s \n", código);
  printf("Nome da sua cidade: %s \n", cidade);
  printf("População: %d \n", população);
  printf("Área em (km²): %.0fkm² \n", area);
  printf("PIB: %.0f Bilhões de reais   \n", pib);
  printf("Pontos turísticos: %d \n", Pontos);
  printf("Densidade Populacional: %.2f Hab/km² \n", Densidade2);
  printf("PIB per Capita:  %.2f reais \n", Pibpercapita2);



 return 0;
} 
