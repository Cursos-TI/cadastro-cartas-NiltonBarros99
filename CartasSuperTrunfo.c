#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char Estado;
  char Código[3];
  char Cidade[20];
  int População;
  float Área;
  float PIB;
  int Pontostúristicos;
  
  // Área para entrada de dados

  printf("Digite a letra que representa seu Estado: \n");
  scanf("%c", &Estado);
  
  printf("Agora digite a letra, juntamente com o código inserido em sua carta:  \n");
  scanf ("%s", &Código);
  
  printf("OK! Informe o nome de sua cidade:             \n");
  scanf("%s", &Cidade);

  printf("Perfeito. Nos informe o tamanho da população de sua cidade:           \n");
  scanf("%d", &População);

  printf("Informe a Área de sua cidade em (km²):         \n");
  scanf("%f", &Área);

  printf("Digite o PIB de sua cidade:         \n");
  scanf("%f", &PIB);

  printf("Por último, nos informe a quantidade de pontos turísticos de sua cidade:  \n");
  scanf("%d", &Pontostúristicos);

  //Área de exibição dos dados da primeira cidade.

  printf("Estado: %c \n", Estado);
  printf("Código: %.3s \n", Código);
  printf("Nome da sua cidade: %s \n", Cidade);

  
  

return 0;
} 
